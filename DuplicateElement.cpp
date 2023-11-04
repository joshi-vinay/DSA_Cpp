#include<iostream>
using namespace std;

// 2) Find duplicate element

int findDuplicate(int arr[], int size){
    
int ans = 0;

 XORing all array elements

for(int i = 0; i < size; i++){
    ans = ans^arr[i];
}

 XOR [1,n-1]

for(int i = 1; i<size; i++){
    ans = ans^i;
}
return ans;
}

int main(){
    int arr[100];
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements inside the array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The duplicate element in the given array is: "<<findDuplicate(arr,n);

    return 0;
}