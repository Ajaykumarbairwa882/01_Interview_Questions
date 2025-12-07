#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,5,6,7};
    
    int n = v.size() + 1;
    int indexsum = n * (n + 1) / 2;
    int sum=0;

    for(int i=0; i<n-1; i++){
        sum+=v[i];
    }
    cout<< "missing element is : "<< indexsum-sum;
}