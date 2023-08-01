#include<iostream>
using namespace std;
int main(){
    // int n, i=1;
    // cout << "Enter the value of n: " << endl;
    // cin >> n;
    // while(i<=n){
    //     cout << i << " ";
    //     i=i+1;
    // }
    // return 0;
//Write a program to print sum of n numbers

    // int n , i = 1, sum = 0;
    // cout <<"Enter the number: ";
    // cin >> n;
    // while(i<=n){
    //     sum = sum + i; 
    //     i = i+1;
    // }
    // cout << "Value of sum is: "<< sum << endl;

    //Write a program to print sum of all even numbers from 1 to n
     // int n, i = 1, sum = 0;
    // cout << "Enter a number: ";
    // cin >> n;
    // while(i<=n){
    //     if(i%2==0)
    //         sum = sum + i; "sum = sum + i means adding the value of i to the sum after every consecutive "
    //     i = i+1;

    // }
    // // cout << "Sum from 1 to n = "<< sum << endl;
    // cout << "sum from " << 1 << " to " << n << " = "<< sum << endl;
    // return 0;

    // Write a program to convert fahrenheit to celsius. 
    // C = 5/9(F-32)

    // float f;
    // cout<<"Enter the temperature in fahrenheit : ";
    // cin >> f; 
    // float c = (5.0/9)*(f-32);
    // cout<< "The temperature in celsius is : " << c << " degree Celsius";  
    // cout << "the temperature after changing into celsius is : "


    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 2;

    while(i<n){
        if(n%i==0){
            cout << "Not Prime" << endl;
        }
        else {
            cout << "Prime" << endl;
        }
        i = i+1;

    }

    





    
    




}

