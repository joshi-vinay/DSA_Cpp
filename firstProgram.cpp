#include<iostream>
using namespace std;
int main(){
    cout << "Hello World!" <<endl;
    cout << "Namaste Duniya!" <<endl;
    int a = 123;
    cout << a << endl;
    char b = 'v';    
    cout << b << endl;
    bool b1 = true;
    cout << b1 << endl;
    float f = 1.2;
    cout << f << endl;
    double d = 1.23;
    cout << d << endl;
    int size = sizeof(a);
    cout << "Size of a is: " << size << endl;   
    /* Type Casting --> Conversion of one data type to another (if it is valid) is 
                        called typecasting.

        Example: 
                int a = 'a';
                variable a will store the ASCII value of 'a' = 97.
        Example:
                char ch = 98;
                98 will automatically get typecasted to its corresponding character.
                This automatic typecasting is called implicit typecasting.

                */
    unsigned int c = -112;  // unsigned int only stores positive values, if u try to 
    cout << c << endl;  // store a negative value in unsigned int then it will print a very huge value.
                
    
    
}