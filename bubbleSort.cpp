#include<iostream>
#include<vector>
using namespace std;
// array -> {3, 4, 5, 1, 2}
// output -> {1, 2, 3, 4, 5}

// Bubble sort -> O(n^2)
void bubbleSort(vector<int>& arr){
    int n = arr.size();
    bool isSwap = false;
     for(int i = 0; i < n-1; i++){
          for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
          }
          if(!isSwap) return;
     }  
}

void printArray(vector<int>& arr){
       for(auto val : arr)
          cout<<val<<" ";
}
int main(){
    vector<int>v = {3, 4, 5, 1, 2};

    bubbleSort(v);
    printArray(v);
   
    return 0;
}