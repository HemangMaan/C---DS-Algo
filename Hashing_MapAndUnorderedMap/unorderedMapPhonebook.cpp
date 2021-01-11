#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string, vector<string> > phonebook;
    phonebook["Hemang"].push_back("9654");
    phonebook["Hemang"].push_back("9655");
    phonebook["Hemang"].push_back("9656");
    phonebook["Hemang"].push_back("9657");
    phonebook["Ashish"].push_back("8654");
    phonebook["Ashish"].push_back("8655");
    phonebook["Ashish"].push_back("8656");

    for(auto it:phonebook){
        cout<<"Name :"<<it.first<<" -> ";
        for(auto n:it.second){
            cout<<n<<" , ";
        }
        cout<<endl;
    }

    string f;
    cin>>f;

    if(phonebook.count(f)==0){
        cout<<"No Contact found"<<endl;
    }
    for(auto s:phonebook[f]){
        cout<<s<<endl;
    }

}