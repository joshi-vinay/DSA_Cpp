#include<iostream>
using namespace std;

//  Sort 0 1 2

void sort012(int arr[], int n){
    int i = 0, j = 0, k = n-1;
    while(j<=k){
        if(arr[j] == 0){
            swap(arr[i++], arr[j++]);
        }
        else if(arr[j] == 1){
            j++;
        }
        else{
            swap(arr[j], arr[k--]);
        }
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[7] = {0,1,1,0,2,1,0};
    sort012(arr, 7);
    printArray(arr, 7);
    return 0;
   
}