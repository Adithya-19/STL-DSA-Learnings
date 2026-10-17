#include <bits/stdc++.h>

using namespace std;

/*
- Here in Selection Sort, each time we select the minimum element from the particular index we are at
  and swap it with the element at that index, and subsequently move to the next element, shrinking the
  size of the unsorted array each iteration.

- Time Complexity: O(n^2)
- Space Complexity: O(1)
*/


void selectionSort(int arr[],int n){
    int min_index;
    bool found;

    for(int i=0;i<n-1;i++){ // We will set another loop, starting from the next index, so we iterate till n-1
        min_index=i;
        found=false;

        for(int j=i+1;j<n;j++){
            if(arr[min_index]>arr[j]){
                min_index=j;
                found=true;
            }

        }
        
        if(found){
            swap(arr[i],arr[min_index]);
        }
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
    selectionSort(arr,n);
}
