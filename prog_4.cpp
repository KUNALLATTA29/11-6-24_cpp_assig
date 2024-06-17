#include<bits/stdc++.h>
using namespace std;

int main(){
    
    map<string,int> arr{
        {"kunal",3300},
        {"babu",2200},
        {"raju",4500},
        {"jagu",8800},
        {"kaliya",2700},
        {"lali",8800}
    };
    
    int s;
    cin>>s;
    vector<string> key;
    for(auto it:arr){
        if(it.second==s){
            key.push_back(it.first);
        }
    }
    for(auto it:key){
        arr.erase(it);
    }
    for(auto it:arr){
        cout<<it.first<<"="<<it.second<<endl;
    }
}
