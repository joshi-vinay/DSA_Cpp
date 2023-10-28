#include<iostream>
using namespace std;

void updateArr(int arr[], int size){
    cout<<"Inside the function"<<endl;

    arr[0]=120;

    // printing the array
    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Going back to the main function";
    cout<<endl;

}

int main(){
    int arr[3]={2,5,7};
    updateArr(arr,3);
    for(int i = 0; i<3; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    return 0;
}


// ARRAYS ARE ALWAYS PASSED BY REFERENCE.

