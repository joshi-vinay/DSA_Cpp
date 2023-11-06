#include<iostream>
using namespace std;

//  Take 4 integers as input and return the greatest one.

#include<iostream>
using namespace std;

int getMax(int a, int b, int c, int d){
    int max = a;
    if(b>max){
        max = b;
    }
    if (c>max) {
        max = c;
    }
    if (d>max) {
        max = d;
    }
    return max;
}

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    cout<<getMax(a,b,c,d);
    
    return 0;
}
