#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5};
    vector<int>m={6,7,8,9,10};
     vector<int>ans;
     for(auto x:v){
        ans.push_back(x);
     }
      for(auto x:m){
        ans.push_back(x);
     }
      for(auto x:ans){
        cout<<x<<" ";
     }
    


     //if element is repeated and marge onle unique element in sorted array

    vector<int> a = {1, 2, 2, 3, 4};
    vector<int> b = {2, 3, 5, 6};

    set<int> s;

    for (int x : a) s.insert(x);
    for (int x : b) s.insert(x);

    for (int x : s) cout << x << " ";
    return 0;
}