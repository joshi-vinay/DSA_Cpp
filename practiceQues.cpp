// Print sum of all elements of an array.

#include<iostream>
using namespace std;

int add(int arr[], int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}


int main(){
    int arr[100];
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the elements in the array: ";
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"The sum of the elements in the given array is: "<<add(arr,size)<<endl;
    
    return 0;

}