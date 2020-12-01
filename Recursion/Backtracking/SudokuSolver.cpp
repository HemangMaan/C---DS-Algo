#include<bits/stdc++.h>
using namespace std;

bool IsCorrect(int sudoku[][9],int i,int j,int num,int n)
{
    //row and column check
    for(int chk=0;chk<n;chk++){
        if(sudoku[i][chk]==num || sudoku[chk][j]==num){
            return false;
        }
    }
    //grid check
    int rn = sqrt(n);
    int row = (i/rn)*rn;
    int col = (j/rn)*rn;
    for(int x=row;x<row+rn;x++){
        for(int y = col;y<col+rn;y++){
            if(sudoku[x][y]==num){
                return false;
            }
        }
    }
    return true;
}
bool SudokuSolver(int sudoku[][9],int i,int j,int n){
    if(i==n){
        //base case hit - sudoku solved
        //print board
        for(int row=0;row<n;row++){
            for(int col = 0;col<n;col++){
                cout<<sudoku[row][col]<<" ";
            }
            cout<<"\n";
        }
        return true;
    }
    //if all columns of row filled
    if(j==n){
        return SudokuSolver(sudoku,i+1,0,n);
    }
    //if the box is pre-filled
    if(sudoku[i][j]!=0){
        return SudokuSolver(sudoku,i,j+1,n);
    }
    for(int num=1;num<=n;num++){
        if(IsCorrect(sudoku,i,j,num,n)){
            sudoku[i][j]=num;
            bool CouldWeSolve = SudokuSolver(sudoku,i,j+1,n);
            if(CouldWeSolve){
                return true;
            }
        }
    }
    //backtracking if the number is not suitable
    sudoku[i][j]=0;
    return false;
}

int main(){
    int sudoku[9][9]= {
        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}
    };
    SudokuSolver(sudoku,0,0,9);
    return 0;
}