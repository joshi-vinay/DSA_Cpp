#include<iostream>
using namespace std;

    bool search(int arr[], int n, int key){
    for(int i = 0; i<n; i++){
        if(arr[i] == key){
            return 1;
        }
        else{
            return 0;
        }
    }
    

}

int main(){
    int arr[100];
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the elements of the array: "<<" ";
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key value to search: ";
    cin>>key;
    bool found = search(arr, size, key);
    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is absent"<<endl;
    }

    return 0;
}