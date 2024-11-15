#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// array -> {2, 2, 0, 1, 0, 1, 2, 1}
// output -> {0, 0, 1, 1, 1, 2, 2, 2}

//1. approach - O(nlogn)
// void sortArray(vector<int>& arr){
//       sort(arr.begin(), arr.end());
// }

// 2. approach - O(n)
// void sortArray(vector<int>& arr){
//       int n = arr.size();
//       int count0 = 0, count1 = 0, count2 = 0;
//       for(int i = 0; i < n; i++){
//         if(arr[i] == 0) count0++;
//         else if(arr[i] == 1) count1++;
//         else count2++;
//       }
//       int idx = 0;
//       for(int i = 0; i < count0; i++){
//         arr[idx++] = 0;
//       }
//       for(int i = 0; i < count1; i++){
//         arr[idx++] = 1;
//       }
//       for(int i = 0; i < count2; i++){
//         arr[idx++] = 2;
//       }     
// }

// 3. approach - O(n)
void sortArray(vector<int>& arr){
      int n = arr.size();
      int low = 0, mid = 0, high = n-1;

      while(mid <= high){
         if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
         }
         else if(arr[mid] == 1){
            mid++;
         }
         else{ //arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
         }
      }
}

void printArray(vector<int>& arr){
       for(auto val : arr)
          cout<<val<<" ";
}
int main(){
    vector<int>v = {2, 2, 0, 1, 0, 1, 2, 1, 2};

    sortArray(v);
    printArray(v);
   
    return 0;
}