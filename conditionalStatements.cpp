#include<iostream>
using namespace std;
int main(){

    int a;
    cout<<"Enter the value of a: "<< endl;
    cin >> a;

    cout<<"Value of a is: "<< a << endl;

    if(a>0){
        cout<<"A is positive"<< endl;

    }
    else{
        cout<<"A is negative"<< endl;
    }
    int a,b;
    
    cout<<"Enter the value of a:"<< endl;
    cin>>a;

    cout<<"Enter the value of b:"<< endl;
    cin>>b;

    if(a>b){
        cout<<"A is greater"<< endl;

    }
    if(b>a){
        cout<<"B is greater"<< endl;
    }

    /* cin ignores ENTER(\n), TAB(\t) and SPPACE( ) while taking input. These are called 
    whitespace characters. Use cin.get() to read these whitespace characters.
    */

    /* Write a Cpp program to determine whether a given number is positive, negative or zero*/
    int x ;
    cout<<"Enter a number x: "<< endl;
    cin>>x;
    if(x>0){
        cout<<"x is positive"<< endl;

    }
    else{
        if(x<0){
            cout<<"x is negative"<< endl;
        }
        else{
            cout<<"x is zero"<< endl;
        }
    }
    else if(x<0){
        cout<<"x is negative"<< endl;

    }
    else{
        cout<<"x is zero"<< endl;
    }
    
    char ch;
    cout << "Enter a character: "<< endl;
    cin >> ch;
    if(ch>=97 && ch<=122){
        cout << "ch is lowercase" << endl;
    }
    else if(ch>=65 && ch<=90){
        cout << "ch is upercase" << endl;
    }
    else{
        cout<< "ch is numeric" << endl;
    }
    

} 
