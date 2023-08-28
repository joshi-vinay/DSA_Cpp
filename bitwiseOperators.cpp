#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b=6;
    cout<<"a&b is: "<<(a&b)<<"\n";
    
    cout<<"a|b is: "<<(a|b)<<"\n";
    
    cout<<"~a is: "<<(~a)<<"\n";
    
    cout<<"a^b is: "<<(a^b)<<"\n";
    


    /* Left shift(<<) and Right shift(>>) 
        Padding in << and >> for POSITIVE numbers is done with 0.
        For NEGATIVE numbers, padding is compiler dependent.
    */

cout<<(5<<1)<<endl;
cout<<(17>>2)<<endl;
cout<<(19<<1)<<endl;
cout<<(21<<2)<<endl;


/*  --> We can write i = i+1 as i++ or ++i.
        i++ is called Post-Increment //The value gets used first and then increments.
        ++i is called pre-Increment  //The value gets incremented first and then gets used.

    --> We can write i = i-1 as i-- or --i.
        i-- is called Post-Decrement //The value gets used first and then decrements.
        --i is called Pre-Decrement //The value gets decremented first and then gets used.

*/

int i = 7;
cout<<(++i)<<endl;
cout<<(i++)<<endl;
cout<<(i--)<<endl;
cout<<(--i)<<endl;



int a, b=1;
a = 10;
if(++a)
    cout<<b;
else
    cout<<++b;

int a =1,b=2;
if(a-->0 && ++b>2)
{
    cout<<"Stage1 - Inside If";
}
else
{
    cout<<"Stage2 - Inside else";
}
cout<<endl;
cout<<a<<" "<<b<<endl;    


int a =1,b=2;
if(a-->0 || ++b>2)   // Only one of the conditions must be true for || so it won't check ++b>2.
{
    cout<<"Stage1 - Inside If";
}
else
{
    cout<<"Stage2 - Inside else";
}
cout<<endl;
cout<<a<<" "<<b<<endl;    


int number = 3;
cout<<(25*(++number));


int a = 1;
int b = a++;
int c = ++a;
cout<<b<<" "<<c<<endl;

}