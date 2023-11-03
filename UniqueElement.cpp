#include<iostream>
using namespace std;

//  1) Find Unique element.

int findUnique(int arr[], int size)
{
    int ans = 0;
    for(int i = 0; i<size; i++){
        ans = ans^arr[i];
    }
    return ans;
}


void printArray(int arr[], int size){
    for(int i = 0; i< size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
    cout<<"The unique element in the given array is: "<<findUnique(arr,n);

    return 0;
}
