#include<iostream>
#include<vector>
using namespace std;
// binary search - O(log n)
// input -> {-1, 0, 3, 4, 5, 9, 12}
// output-> index of 12 is 6

// 1.approach - O(log n)
// iterative
int binarySearch(vector<int> arr,int target){
    int n = arr.size();
    int start = 0, end = n-1;
    while(start <= end){
        //its a optimatization - to protect from overflow
        int mid = start + (end - start)/2; //same as (start+end)/2
        if(target > arr[mid])
            start = mid+1;
        else if(target < arr[mid])
            end = mid-1;
        else
            return mid; //target is found
    } 
    return -1;// not found
}

// 2.approach 
// recursive
// int binarySearch(vector<int>& arr,int target, int start, int end){
//     if(start <= end){
//         int mid = start + (end - start)/2; //same as (start+end)/2
//         if(target > arr[mid])
//             return binarySearch(arr, target, mid+1, end);
//         else if(target < arr[mid])
//             return binarySearch(arr, target, start, mid-1);
//         else
//             return mid; //target is found
//     } 
//     return -1;// not found
// }

int main(){
    vector<int>v = {-1, 0, 3, 4, 5, 9, 12};
    int target = 12;
    int n = v.size();
    int index1 = binarySearch(v, target); //iterative call
    cout<<"Index of target element "<<target<<" is "<<index1<<endl;
    
    // binarySearch(v, target, 0, n-1); //recursive call

    return 0;
}