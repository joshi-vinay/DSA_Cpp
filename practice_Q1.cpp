#include<iostream>
using namespace std;

// Given two numbers a and b, for every number startng from a through b, print the english representation if the number is less than 10 or print if it's even or odd if the number is greater than or equal 10. Use a loop to increment an integer from a through b.

int main() {

    int a;
    int b;

    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    string represent[10] = {"zero", "one", "two", "three", "four",\
    	"five", "six", "seven", "eight", "nine"};
    
    for(int i = a; i <= b; i++) {
        
        if(i > 9) {
            if(i % 2 == 0)
                cout << "even\n";
            else cout << "odd\n";
        }
        else {
            cout << represent[i]<<endl;
        }
    }
    return 0;
}