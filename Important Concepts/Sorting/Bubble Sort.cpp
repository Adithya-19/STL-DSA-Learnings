#include <bits/stdc++.h>

using namespace std;

/*
- Here in Bubble Sort, we sort the array by repeatedly swapping adjacent elements, so as to push the locally largest
  element to the right end of the array in each pass, this way the larger elements are on the right side while the smaller
  ones are on the left side of the array, making the array sorted, in ascending order. The loop iterates for
  n+(n-1)+(n-2)+...+1 times or in other words, n(n-1)/2 times, as we keep shrinking our inner loop
- In an optimized code, we break the loop in case the array is already sorted, at a given pass. This would convert an O(n^2)
  into O(n) for the best case of a sorted array.
- Time Complexity: O(n^2)
- Space Complexity: O(1)
*/


void bubbleSort(int arr[],int n){
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){ //We shrink the inner loop for each iteration as the array's larger elements get sorted
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
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
    bubbleSort(arr,n);
}
