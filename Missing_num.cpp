#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,5,6,7};
    int sum=0;
    int n = v.size() + 1;
    int indexsum = n * (n + 1) / 2;

    for(int i=0; i<v.size(); i++){
        sum+=v[i];
    }
    cout<< "missing element is : "<< indexsum-sum;
}