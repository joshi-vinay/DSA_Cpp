#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Printing counting from 1 to "<< n << ":"<<endl;
    for(int i = 1; i<=n; i++){
        cout<<i<<endl;
    }

    // ----------------------OR--------------------------------

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Printing counting from 1 to "<< n <<":"<<endl;
    int i = 1;
    for(; i<=n ;){
        cout<<i<<endl;
        i++;
    }

    // ----------------------OR--------------------------------

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Printing counting from 1 to "<< n <<":"<<endl;
    int i = 1;
    for( ; ; ){
        if(i<=n){
            cout<< i << endl;
        }
        else{
            break;
        }
        i++;
    }


    //Using multiple inits., conditions and updations

    for (int a = 0, b = 1, c = 2; a>=0 && b>=1 && c>=2; a--, b--, c--)
    {
        cout<<a<<endl<<b<<endl<<c;
    }
    

            // Print sum from 1 to n

int n;
cout<<"Enter the value of n: ";
cin>>n;
int sum = 0;
for(int i = 1; i<=n; i++){
    sum = sum + i;
}
cout << "The value of sum from 1 to "<< n << " is: "<< sum;

// Fibonacci Numbers: Each number in this sequence is the sum of previous two numbers.

int n;
cout<<"Enter the value of n: ";
cin>>n;
int a = 0, b = 1;
cout<<a<<" "<<b<<" ";
for(int i=1; i<=n; i++){
   int nextNumber = a + b;
    cout<<nextNumber<<" ";
    a = b;
    b = nextNumber;
    
}


            // Check if prime or not...

int n;
cout << "Enter the value of n: ";
cin>>n;
bool isPrime = 1;
for(int i = 2; i<n; i++){
    if(n%i==0){
        isPrime = 0;
        break;
    }
    
}
if(isPrime==0){
        cout<<"Not a prime number";
    }
    else{
        cout<<"is a prime number";
    }


}
