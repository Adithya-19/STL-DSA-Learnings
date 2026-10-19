#include <bits/stdc++.h>

using namespace std;

/*
- Here in Insertion Sort, we take one element at a time from left to right and compare it with the
  elements on its left, and insert it at a position such that the corresponding sub-array is in asceending order
- For a pre-sorted array, the time complexity is O(n)

- Time Complexity: O(n^2)
- Space Complexity: O(1)
*/


void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){ // We start from 2nd element, as a sub-array of 1 element is already sorted
        int key=arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>key){ // We use j as a pointer
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionSort(arr,n);
}
