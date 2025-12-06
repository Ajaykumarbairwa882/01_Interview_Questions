#include<bits/stdc++.h>
using namespace std;
int main(){
   
    string s="hello";
     first way to reverse a string
        int i=0;
        int j=s.size()-1;

        while(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        cout<<s;

    //second to reverse a string

     string ss="ajay";
     int start=0;
     int end=ss.size()-1;

     while(start<end){
        int temp=ss[start];
        ss[start]=ss[end];
        ss[end]=temp;
        start++;
        end--;
     }
     cout<<ss;

}