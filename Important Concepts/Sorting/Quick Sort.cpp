#include <bits/stdc++.h>

using namespace std;

/*
- Here in Quick Sort, we select a pivot element and partition the array around the pivot such that elements less
  than the pivot are on the left side and elements greater than the pivot are on the right side.
  We then recursively apply the same logic to the left and right sub-arrays until the entire array is sorted.
- Time Complexity: O(n*logn) or O(n^2) worst case
- Space Complexity: O(logn) or O(n) worst case
*/

int partition(int arr[], int low, int high){
    int pivot=arr[high];
    int i=low-1;

    for(int j=low;j<high;j++){
        if(arr[j]<= pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

void quickSort(int arr[], int low, int high){
    if(low<high){
        int pivot_index=partition(arr,low,high);
        quickSort(arr,low,pivot_index-1);
        quickSort(arr,pivot_index+1,high);
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
    quickSort(arr,0,n-1);

    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
