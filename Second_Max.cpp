#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,3,34,1,0,4,44,55};
    int n=v.size();
    int max=v[0];
    int secondmax=v[0];

    for(int i=0; i<n; i++){
        if(v[i]>max){
            secondmax=max;
            max=v[i];
        }
        else if(v[i]!=max && v[i]>secondmax){
            secondmax=v[i];
        }
        
    }
    cout<<"second max : "<<secondmax<<endl;
    
    
    return 0;
}