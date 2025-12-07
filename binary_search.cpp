#include<bits/stdc++.h>
using namespace std;
int binary(vector<int>&v,int target){
    int start=0;
    int end=v.size()-1;

    while(start<end){
        int mid=start+(end-start)/2;

        if(v[mid]==target) return mid;
        if(v[mid]<target) start=mid+1;
        else end=mid-1;
    }
    return -1;
}
int main(){
    vector<int>v={1,2,3,4,5,6,7};
    int target=6;
    int result=binary(v,target);
    if(result!=-1) cout<<"fount in index : "<<result;
    else cout<<"not found";

}