#include<iostream>
#include<vector>
using namespace std;
// array -> {4, 1, 5, 2, 3}
// output -> {1, 2, 3, 4, 5}

// selection sort -> O(n^2)
void selectionSort(vector<int>& arr){
   int n = arr.size();
   for(int i = 0; i < n-1; i++){
     int smallestIdx = i;
     for(int j = i+1; j < n; j++){
      if(arr[j] < arr[smallestIdx]){
        smallestIdx = j;
      }
     }
     swap(arr[i], arr[smallestIdx]);
   }
}

void printArray(vector<int>& arr){
       for(auto val : arr)
          cout<<val<<" ";
}
int main(){
    vector<int>v = {4, 1, 5, 2, 3};

    selectionSort(v);
    printArray(v);
   
    return 0;
}