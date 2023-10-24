#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout<<"Printing the array"<<endl;
    
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Printing done"<<endl;
}

int main(){
    int number[15];
    //  Accessing an array:
    cout<<"The value of 14th index is: "<<number[14]<<endl;
    cout<<"The value of 20th index is: "<<number[20]<<endl;

    //  Initialising an array: 
    int second[3] = {0,7,11};
    //  Accessing an element:
    cout<<"The value of 2nd index is: "<<second[2]<<endl;
    cout<<endl;
    int third[15] = {2,7};
    // int n = 15;
    // cout<<"Printing the array: "<<endl;
    // //  print the array.  
    // for(int i=0; i<n; i++)
    // {
    //     cout<<third[i]<<" ";
    // }
    printArray(third,15);
    cout<<endl;
//  Initializing all locations with 0.
    int fourth[10]={0};
    // n = 10;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<fourth[i]<<" ";
    // }
    // return 0;

    printArray(fourth,10);
    
    // char ch[5] = {'a','p','c','r','v'};
    // cout<<ch[4];
    // printArray(ch,5);
    

    
}