#include <bits/stdc++.h>
using namespace std;

/*
So in this program we find the sum of first n natural numbers using recursion.
The function recursionPractice takes an integer n as input and returns the sum of first n natural numbers.
The base case is when n is 0, in which case the function returns 0.
Otherwise, it returns n plus the result of calling itself with n-1.
*/

int recursionPractice(int n){
    if (n==0){
        return 0;
    }
    else{
        return n+recursionPractice(n-1);
    }
}


int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"The sum of first n natural numbers is: "<<recursionPractice(n)<<"\n";
    return 0;
}
