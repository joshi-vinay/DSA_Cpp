#include<iostream>
// #include <bits/stdc++.h>

using namespace std;

int getMin(int num[], int n){
    // int min = INT_MAX;
    int mini = num[0] ; 
    for(int i = 1; i<n; i++){
        // if(num[i] < min){
        //     min = num[i];
        // }

        mini = min(mini,num[i]);
        //min is a pre-defined functioned to check minimum value
        // among the two.

    }

    //returning min value
    return mini;
}

int getMax(int num[], int n){
    // int max = INT_MIN; 
    int maxi  = num[0]  ;
    for(int i = 1; i<n; i++){
        // if(num[i] > max){
        //     max = num[i];
        // }
        maxi = max(maxi,num[i]);
        // /max is a pre-defined functioned to check maximum value
        // among the two.
    }  

    //returning max value
    return maxi;
}

int main(){
    
    int size;
    cout<<"Enter the size of your array: ";
    cin>>size;

cout<<"Enter elements in the array: ";
    int num[100];
    //taking input in array
    for(int i = 0; i<size; i++){
        cin >> num[i];
    }

    cout<<"Maximum value is: "<< getMax(num, size)<<endl;
    cout<<"Minimum value is: "<< getMin(num, size)<<endl;

    return 0;
}

