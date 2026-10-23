#include <bits/stdc++.h>

using namespace std;

/*
- Linear Search: Here, we traverse through an array finding the position of a given element.

- Time Complexity: O(n) <Worst Case>
- Space Complexity: O(1)
*/

int linearSearch(int arr[], int size, int target) {
    for (int i=0; i<size; i++) {
        if (arr[i]==target) {
            return i;
        }
    }
}

int main() {
    int size;
    cout<<"Enter the number of elements: ";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    

    int target;

    cout<<"Enter the element to search: ";
    cin>>target;

    int result=linearSearch(arr,size,target);
    cout<<"Element found at index: "<<result;
    return 0;
}
