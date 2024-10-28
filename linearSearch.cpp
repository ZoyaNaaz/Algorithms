#include<iostream>
using namespace std;
// linear search
int linearSearch(int arr[], int target, int size){
    for(int i = 0; i < size; i++){
        if(target == arr[i])//found
            return i;
    }
    return -1;// not found
}
int main(){
    int n;
    cout<<"enter array size:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array elements:"<<endl;
    for(int i = 0; i < n; i++)
        cin>>arr[i];
    int target;
    cout<<"enter element to search:"<<endl;
    cin>>target;
    int index = linearSearch(arr, target, n);
    cout<<"Index of target element "<<target<<" is "<<index;
    return 0;
}