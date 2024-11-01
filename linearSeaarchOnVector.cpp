#include<iostream>
#include<vector>
using namespace std;
// linear search
void linearSearchOnVector(vector<int>& vec){
     for(auto val: vec)
        cout<<val<<" ";
}
int main(){
    vector<int>v;

    v.push_back(4);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);

    linearSearchOnVector(v);
   
   
    return 0;
}