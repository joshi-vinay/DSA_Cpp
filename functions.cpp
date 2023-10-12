/*  Functions -->  Functions are code blocks/programs that
    store a code 'template'/'blueprint' to be used again
    and again without making the code bulky. Any change that
    has to be made is done within the function to reflect it
    everywhere. Functions make code readable, less bulky, less buggy.


*/

#include<iostream>
using namespace std;

int power(int a, int b){
    int ans = 1;
    for(int i = 1; i<=b; i++){
        ans = ans * a;
    }
    return ans;
}
int main(){
    int a , b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    int answer = power(a, b);
    cout<<"Power of "<<a<<","<<b<<" is: "<<answer<<endl;

}

Even --> 1
Odd --> 0
bool isEven(int a){
    if(a&1){
        return 0;   //Odd
    }
    else{
        return 1;   //Even
    }
}

    int main(){
        int a;
        cout<<"Enter the value of a: ";
        cin>>a;
        if(isEven(a)){
            cout<<a<<" is an Even number"<<endl;
        }
        else{
            cout<<a<<" is an Odd number"<<endl;
        }
    }

int factorial(int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int nCr(int n , int r){
    int numerator = factorial(n);
    int denominator = factorial(r)*factorial(n-r);
    return numerator/denominator;
}

int main(){
    int n, r;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"enter the value of r: ";
    cin>>r;
    int answer = nCr(n,r);
    cout<<"The value of "<<n<<"C"<<r<<" is: "<<answer<<endl;

}
