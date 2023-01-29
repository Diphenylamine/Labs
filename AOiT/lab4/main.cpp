#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<char> sim,usim;
    vector<int> ch;
    cout<<"введите строку: ";
    string str;
    getline(cin,str);
    for (int i=0;i<str.length();i++){
        sim.push_back(str[i]);
    }

    
    int d=0;
    for(int i=0;i<sim.size();i++){
        for(int j=0;j<usim.size();j++){
            if(sim[i]==usim[j]) d++;
        }
        if(d==0) usim.push_back(sim[i]);
        else d=0;
    }
    sort(usim.begin(),usim.end());
   
    for(int i=0;i<usim.size();i++){
        cout<<usim[i]<<endl;
    }
    
return 0;
}