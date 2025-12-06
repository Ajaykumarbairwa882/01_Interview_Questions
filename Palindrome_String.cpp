#include<bits/stdc++.h>
using namespace std;
int main(){
     string ss="naman";
     string Original_Str=ss;
     int start=0;
     int end=ss.size()-1;

     while(start<end){
        int temp=ss[start];
        ss[start]=ss[end];
        ss[end]=temp;
        start++;
        end--;
     }
    
     if(Original_Str==ss){
        cout<<"it is palindrom";
     }
     else{
         cout<<"it is not palindrom";
     }

     

}