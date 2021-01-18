#include<bits/stdc++.h>
using namespace std;

//data structure used;
class node{
public:
    char data;
    unordered_map<char,node*> m;
    bool terminal;
    node(char data){
        this->data = data;
        terminal = false;
    }
};

//Trie build 
class Trie{
    node* root;
    int cnt;
public:
    Trie(){
        root = new node('\0');
        cnt =0;
    }
    //Insert a node in trie
    void Insert(char *w){
        node* temp = root;
        //iterating the word
        for(int i=0;w[i]!='\0';i++){
            char ch = w[i];
            //if the letter is present 
            if(temp->m.count(ch)){
                temp = temp->m[ch];
            }
            //if the letter is not present then we create a new node with letter and put the letter in it and connect
            else
            {
                node *n = new node(ch);
                temp->m[ch] = n;
                temp = n;
            }
        }
        temp->terminal = true;
    }
    //finding in the trie(prefix tree)
    bool find(char *w){
        node* temp = root;
        //Iterating
        for(int i=0;w[i]!='\0';i++){
            char ch = w[i];
            //keep going if the letter is present
            if(temp->m.count(ch)!=0){
                temp = temp->m[ch];
            }
            //if any letter of the word is not present 
            else
            {
                return false;
            }
        }
        //checking if the last letter is terminal node or not
        return temp->terminal;
    }
};

int main(){
    Trie t;
    char val[][10] = {"hello","hi","no","not","bat","batman"};
    char w[10];
    cin>>w;
    for(int i=0;i<6;i++){
        t.Insert(val[i]);
    }
    if(t.find(w)){
        cout<<"Present"<<endl;
    }
    else
    {
        cout<<"Absent"<<endl;
    }
    return 0;
}