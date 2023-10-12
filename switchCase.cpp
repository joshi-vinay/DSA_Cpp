/*  Switch Statement--> Switch statement is a cleaner way of representing various cases
    for the same variable as compared to an if-else.

    SYNTAX:
        switch(variable_name){
            case value_1:
                -----------
                -----------
                break; <-- optional

            case value_2:
                -----------
                -----------
                break; <-- optional
            
            default:
                -----------
                -----------
        }


    Use of break : Using break is optional for each case. If break
        is not used, all the cases starting from the first case whose
        condition was fulfilled, will get executed.
    
    If break is used, only that case will get executed whose condition is 
    fulfilled.

    Continue in switch-case : Not possible / valid to use continue statement 
    in switch-case because we are not going through any iterations, thus 
    there is nothing to skip.
*/


#include<iostream>
using namespace std;
int main(){
    // int num = 2;
    
    // switch(num){
    //     case 1 : cout<<"First"<<endl;
    //         break;
        
    //     case 2 : cout<<"Second"<<endl;
    //         break;

    //     default: cout<<"It is a default case"<<endl;
    // }
    // cout<<endl;
    // return 0;


                        // ---------------Mini Calculator Program---------------------
    

    // int a, b;
    // cout<<"enter the value of a: ";
    // cin>>a;
    // cout<<"Enter the value of b: ";
    // cin>>b;
    
    // char op;
    // cout<<"Which operation do you want to perform: ";
    // cin>>op;

    // switch(op){
    //     case '+' : cout<< "The value of "<<a <<" + " <<b <<" is "<<(a+b)<<endl;
    //         break;
    //     case '-' : cout<< "The value of "<<a <<" - " <<b <<" is "<<(a-b)<<endl;
    //         break;
    //     case '*' : cout<< "The value of "<<a <<" * " <<b <<" is "<<(a*b)<<endl;
    //         break;
    //     case '/' : cout<< "The value of "<<a <<" / " <<b <<" is "<<(a/b)<<endl;
    //         break;
    //     case '%' : cout<< "The value of "<<a <<" % " <<b <<" is "<<(a%b)<<endl;
    //         break;
    //     default: cout<<"Please enter a valid operation"<<endl;
    // }


    int money;
    cout<<"Enter total amount: ";
    cin>>money;

    switch(1){
        case 1: cout<<"No. of 100 Rupee Notes = "<<money/100<<endl;
        money = money%100;   //Money is 1380 here
        case 2: cout<<"No. of 50 Rupee Notes = "<<money/50<<endl;  //Money becomes 80
        money = money%50;
        case 3: cout<<"No. of 20 Rupee Notes = "<<money/20<<endl;
        money = money%20;
        case 4: cout<<"No. of 1 Rupee Notes = "<<money/1<<endl;
        money = money%1;

        
    }
    return 0;




}