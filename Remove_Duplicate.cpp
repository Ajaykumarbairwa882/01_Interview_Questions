#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,1,2,3,3,3,4,5,5};
    set<int>s;
    for(auto x:v){
        s.insert(x);
    }
     for(auto x:s){
        cout<<x<<" ";
    }

    // if you find the count the unique element
    vector<int>v1={1,1,2,3,3,3,4,5,5};
    int i=0;
    for(int j=1; j<v1.size(); j++){
        if(v1[i]!=v1[j]){
            i++;
            v1[i]=v1[j];
        }
    }

     cout<<i+1;
    
    return 0;
}