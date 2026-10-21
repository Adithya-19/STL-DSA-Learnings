#include <bits/stdc++.h>

using namespace std;

/*
- Here in Merge Sort, we repeatedly split an array into 2 halves of sub arrays until we hit sub arrays of a
  single element, after which we progress backwards, merging sub arrays into sorted order.
- Time Complexity: O(n*logn)
- Space Complexity: O(n)
*/


void merge(int arr[], int left, int mid, int right){
    int n1=mid-left+1;
    int n2=right-mid;

    int Left[n1]; // Both these arrays represent the left and right halves of the array/sub array
    int Right[n2];

    for(int i=0;i<n1;i++){
        Left[i]=arr[left+i];
    }
    for(int i=0;i<n2;i++){
        Right[i]=arr[mid+1+i];
    }

    int i=0,j=0,k=left; // i is the index in the left half, j in right and k is the index in the original array

    while(i<n1 && j<n2){
        if(Left[i]<=Right[j]){
            arr[k]=Left[i];
            i++;
        }
        else{
            arr[k]=Right[j];
            j++;
        }
        k++;
    }

    // Add any remaining elements of both halves, in case, when both halves have unequal number of elements
    while(i<n1){
        arr[k]=Left[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k]=Right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right){
    if (left>=right){
        return;
    }

    int mid=(left+right)/2;

    mergeSort(arr,left,mid);
    mergeSort(arr,mid+1,right);

    merge(arr,left,mid,right);
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
    mergeSort(arr,0,n-1);

    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
