#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout << "Enter the number of rows in the pattern: ";
    // cin >> n;
    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout << "*";
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i+1;
    // }
    

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << i;
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }
   
}
