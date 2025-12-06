#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="rajaram prajapat";
    map<char,int>m;
    for(auto x:s){
       if(x!=' '){
         m[x]++;
       }
    }
    for(auto x:m){
        cout<<x.first <<"  "<< x.second<<endl;
    }
    return 0;
}