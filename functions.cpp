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

void count(int n){
    //  function body
    for(int i = 1; i<=n; i++){
        cout<<i<<endl;
    }
}

int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;
    //  function call
    count(a);

    return 0;
}

1--> Prime no.
2--> Not a prime no.

bool isPrime (int n){
    for(int i = 2; i<n; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int num;
    cout<<"Enter any number: ";
    cin>>num;
    if(isPrime(num)){
        cout<<num<<" is a prime number."<<endl;
    }
    else{
        cout<<num<<" is not a prime number.";
    }
    return 0;
}

int AP(int n){
    int ans = (3*n+7);
    return ans;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"The nth term of the AP is: "<<AP(num)<<endl;
    return 0;
}

int countSetBits(int n){
    int count = 0;
    while (n)
    {
    count = count+(n&1);
    n = n>>1;
    }
    return count;
    
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int answer = countSetBits(num);
    cout<<"The number of set bits in the given integer is: "<<answer<<endl;

}

//  Call by Value:

void dummy(int n){
    n++;
    cout<<"value of n here is: "<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    dummy(n);
    cout<<"The value of n here is: "<<n<<endl;;
    return 0;
}

void update(int a){
    a = a/2;
}
int main(){
    int a = 10;
    update(a);
    cout<<a<<endl;
}

int update(int a){
    a -= 5;
    return a;
}
int main(){
    int a = 15;
    update(a);
    cout<<a<<endl;
}


int update(int a)
{
    int ans = a*a;
    return ans;
}
int main(){
    int a = 14;
    a = update(a);
    cout<<a<<endl;
}


