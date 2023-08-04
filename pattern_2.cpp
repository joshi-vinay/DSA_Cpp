#include<iostream>
using namespace std;
int main(){
/*
Pattern:     1234
             1234
             1234
             1234
*/
    // cout << "Enter the numner of rows in the pattern: ";
    // int n;
    // cin >> n;
    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout << j;
    //         j = j+1;
    //     }
    //     cout<< endl;
    //     i = i+1;
    // }    
/*
Pattern:     4321
             4321
             4321
             4321

*/
    // cout << "Enter the number of rows in the pattern: ";
    // int n;
    // cin >> n;
    // int i =1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout << n-j+1;
    //         j = j+1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }
/*
Pattern:      123
              456
              789
*/

    // int n;
    // cout << "Enter the number of rows: ";
    // cin >> n;
    // int i=1;
    // int count=1;

    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout << count << " ";
    //         count = count + 1;
    //         j = j+1;
    //     }
    //     cout << endl;
    //     i = i+1;
    // }

    // int n;
    // cout<<"Enter the number of rows in the pattern: "<< endl;
    // cin>>n;
    // int row = 1;
    // while(row<=n){
    //     int col = 1;
    //     while(col<=row){
    //         cout<< "*";
    //         col = col + 1;
    //     }
    //     cout<< endl;
    //     row = row+1;
        
    // }
    /*
            1
            2 2
            3 3 3
            4 4 4 4
   */
    // int n;
    // cout << "Enter the number of rows in the pattern: ";
    // cin >> n;
    // int row = 1;
    // while(row<=n){
    //     int col = 1;
    //     while(col<=row){
    //         cout <<row << " ";
    //         col = col + 1;

    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    /*
            1
            2 3
            4 5 6
            7 8 9 10
    */

//    int n;
//    cout << "Enter the number of rows in the pattern: ";
//    cin >> n;
//    int row = 1;
//    int count = 1;
//    while(row<=n){
//     int col = 1;
//     while(col <= row){
//         cout << count<< " ";
//         count = count + 1;
//         col = col + 1;
//     }
//     cout << endl;
//     row = row + 1;
    
//     }

    /*      1
            2 3
            3 4 5
            4 5 6 7 
            5 6 7 8 9
    */


    // int n;
    // cout<<"Enter the number of rows: ";
    // cin>>n;
    // int row = 1;
    
    // while (row <= n) {
    //     int col = 1;
    //     int num = row;
        
    //     while (col <= row) {
    //         cout << num << " ";
    //         num = num + 1;
    //         col = col + 1;
    //     }
        
    //     cout << endl;
    //     row = row + 1;
    // }

            //  -----------****  OR   ****------------

    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int row = 1;
    
    while (row <= n) {
        int col = 1;
      
        
        while (col <= row) {
            cout << row + col -1 << " ";
          
            col = col + 1;
        }
        
        cout << endl;
        row = row + 1;
    }
    
    
}


