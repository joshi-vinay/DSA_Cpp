#include<iostream>
using namespace std;
int main(){
    int a = 2/5;
    cout << a << endl;
    // The answers should be 0.4 but u have declared tha datatype as int so it will convert 0.4 --> 0.
    cout << 2.0/5 << endl;
/* 1). int/int = int
    2). int/float = float
        float/int = float
        double/int = double
        int/double = double
        
    * Basic Arithmetic Operators: +,-,*,/,%
    * Relational Operators: ==,>=,<=,>,<,!=
    * Logical Operators: &&,||,!        
        
        
*/


    int b = 2;
    int c = 3;
    
    bool first = (b==c);
    cout << first << endl;
    bool second = (b>c);
    cout << second << endl;
    bool third = (b<c);
    cout << third << endl;
    bool fourth = (b>=c);
    cout << fourth << endl;
    bool fifth = (b<=c);
    cout << fifth << endl;
    bool sixth = (b!=c);
    cout << sixth << endl;

}