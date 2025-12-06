#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,3,34,1,0,4,44,55};
    int n=v.size();
    int max=v[0];
    int min=v[0];

    for(int i=0; i<n; i++){
        if(v[i]>max){
            max=v[i];
        }
        if(v[i]<min){
            min=v[i];
        }
    }
    cout<<"max : "<<max<<endl;
    cout<<"min : "<<min<<endl;
    
    return 0;
}