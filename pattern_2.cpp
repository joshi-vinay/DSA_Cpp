#include<iostream>
using namespace std;
int main(){
/*
Pattern:     1234
             1234
             1234
             1234
*/
    cout << "Enter the numner of rows in the pattern: ";
    int n;
    cin >> n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << j;
            j = j+1;
        }
        cout<< endl;
        i = i+1;
    }    
/*
Pattern:     4321
             4321
             4321
             4321

*/
    cout << "Enter the number of rows in the pattern: ";
    int n;
    cin >> n;
    int i =1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << n-j+1;
            j = j+1;
        }
        cout << endl;
        i = i + 1;
    }
/*
Pattern:      123
              456
              789
*/

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int i=1;
    int count=1;

    while(i<=n){
        int j=1;
        while(j<=n){
            cout << count << " ";
            count = count + 1;
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }

    int n;
    cout<<"Enter the number of rows in the pattern: "<< endl;
    cin>>n;
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout<< "*";
            col = col + 1;
        }
        cout<< endl;
        row = row+1;
        
    }
    /*
            1
            2 2
            3 3 3
            4 4 4 4
   */
    int n;
    cout << "Enter the number of rows in the pattern: ";
    cin >> n;
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout <<row << " ";
            col = col + 1;

        }
        cout << endl;
        row = row + 1;
    }

    /*
            1
            2 3
            4 5 6
            7 8 9 10
    */

   int n;
   cout << "Enter the number of rows in the pattern: ";
   cin >> n;
   int row = 1;
   int count = 1;
   while(row<=n){
    int col = 1;
    while(col <= row){
        cout << count<< " ";
        count = count + 1;
        col = col + 1;
    }
    cout << endl;
    row = row + 1;
    
    }

    /*      1
            2 3
            3 4 5
            4 5 6 7 
            5 6 7 8 9
    */


    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int row = 1;
    
    while (row <= n) {
        int col = 1;
        int num = row;
        
        while (col <= row) {
            cout << num << " ";
            num = num + 1;
            col = col + 1;
        }
        
        cout << endl;
        row = row + 1;
    }

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

/*              1
                2 1
                3 2 1
                4 3 2 1
    */

   int n;
   cout<<"Enter the number of rows: ";
   cin>>n;
   int row = 1;
   while(row<=n){
    int col = 1;
    while(col<=row){
        cout<<row-col+1<<" ";
        col = col+1;
    }
    cout<<endl;
    row = row + 1;
   }
    
    /*      A A A A
            B B B B
            C C C C
            D D D D
    */
   int n;
   cout << "Enter the number of rows: ";
   cin >> n;
   int row = 1;
   while(row<=n){
    int col = 1;
    
    while(col<=n){
        char ch = 65+row - 1;
        cout<<ch<<" ";
       
        col = col+1;
        
    }
   
    cout<<endl;
    
    row = row + 1;
   
   }

/*          
            A B C D
            A B C D
            A B C D
            A B C D
*/


   int n;
   cout<<"Enter the number of rows: ";
   cin>>n;
   int row=1;
   while(row<=n){
    int col = 1;
    char ch = 65;
    while(col<=n){
        cout<<ch<<" ";
        ch = ch + 1;
        col = col + 1;

    }
    cout<<endl;
   row = row+1;

   }
   



        // -----------------OR-----------------------


    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int row = 1;
    while(row<=n){
        int col = 1;
        char ch = 65;
        while(col<=n){
            ch = 65+col-1;
            cout<<ch<<" "; 
            col = col+1;

        }
        cout<<endl;
        row = row+ 1;

    }

    /*      A B C
            D E F 
            G H I 
    */

    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int row = 1;
    char ch = 65;
    while(row<=n){
        int col = 1;
        while(col<=n){
            cout<<ch<<" ";
            ch = ch+1;
            col = col+1;
        }
        cout<<endl;
        row = row+1;
    }



    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int row = 1;
    char value = 65;
    
    while (row <= n) {
        int col = 1;
        char ch = value;
        
        while (col <= n) {
            cout << value << " ";
            value = value + 1;
            col = col + 1;
        }
        
        cout << endl;
        row = row + 1;
    }

/*      A B C
        B C D
        C D E
*/
int n;
cout<<"Enter the number of rows: ";
cin>>n;
int row=1;
while (row<=n)
{
    int col = 1;
    
    while (col<=n)
    {
        char ch = 65 + row + col - 2;
        cout<<ch<<" ";
        
        col = col+1;
    }
    cout<< endl;
    row = row+1;
    
    
}


/*      A
        B B
        C C C 
*/


int n;
cout<<"Enter the number of rows: ";
cin>>n;
int row = 1;

while(row<=n){
    int col = 1;
    while(col<=row){
        char ch = 65+row-1;
        cout<<ch<<" ";
        
        col = col+1;
    }
    cout<< endl;
    row = row+1;
}


/*      A
        B C
        D E F
        G H I J
*/

int n;
cout<<"Enter the number of rows: ";
cin>>n;
int row = 1;
char ch = 65;
while(row<=n){
    int col = 1;
    
    while(col<=row){
        cout<<ch<<" ";
        ch = ch+1;
        col = col+1;
    }
    cout<<endl;
    row = row + 1;

}


/*      A
        B C
        C D E
        D E F G
*/

int n;
cout<<"Enter the number of rows: ";
cin>>n;
int row = 1;


while(row<=n){
    int col = 1;
    char ch = 65 + row+col-2;
    while(col<=row){
        cout<<ch<<" ";
        ch = ch+1;
        col = col+1;
    }
    cout<<endl;
    row = row+ 1;
}

/*      D
        C D
        B C D
        A B C D

*/

int n;
cout<<"Enter the number of rows: ";
cin>>n;
int row = 1;
while (row<=n)
{
        int col = 1;
        char value = 65+n-row;
        while(col<=row){
                cout<<value<<" ";
                value = value+1;
                col = col+1;
        }
        cout<<endl;
        row = row+1;
}

/*          *
          * *
        * * *
      * * * *

*/

int n;
cout<<"Enter the number of rows: ";
cin>>n;
int row = 1;

while(row<=n){
        int space = 1;
        while(space<=n-row){
                cout<<" "<<" ";
                space = space +1;
        }
        int col = 1;
        while(col<=row){
                cout<<"*"<<" ";
                col = col+1;
        }
        cout<<endl;
        row = row+1;
}

/*      * * * *
        * * *
        * *
        * 

*/

int n;
cout<<"Enter the number of rows: ";
cin>>n;
int row = 1;

while (row<=n)
{
        int col = 1;
        while(col<=n-row+1){
        cout<<"*"<<" ";
        col = col+1;
        }
        cout<<endl;
        row =row+1;
}

/*      * * * *
          * * *
            * *
              *

*/

int n;
cout<<"Enter the number of rows: ";
cin>>n;
int row = 1;

while (row<=n)
{
        int space = 1;
        while(space<=row-1){
                cout<<" "<<" ";
                space = space + 1;
        }
        int col = 1;
        while(col<=n-row+1){
                cout<<"*"<<" ";
                col = col+1;

        }
        cout<<endl;
        row = row+1;

}

/*      1 1 1 1
          2 2 2 
            3 3
              4

*/

int n;
cout<<"Enter the number of rows: ";
cin>>n;
int row =1;

while(row<=n){
        int space =1;
        while(space<=row-1){
                cout<<" "<<" ";
                space = space+1;
        }
        int col=1;
        while(col<=n-row+1){
                cout<<row<<" ";
                col=col+1;
        }
        cout<<endl;
        row = row + 1;

}
 
 /*          1
           2 2 
         3 3 3
       4 4 4 4
 */


int n;
cout<<"Enter the number of rows: ";
cin>>n;
int row =1;

while(row<=n){
        int space =1;
        while(space<=n-row){
                cout<<" "<<" ";
                space = space+1;
        }
        int col=1;
        while(col<=row){
                cout<<row<<" ";
                col=col+1;
        }
        cout<<endl;
        row = row + 1;

}


/*          1
          2 3
        4 5 6
      7 8 9 10

*/
int n;
cout<<"Enter number of rows: ";
cin>>n;
int row = 1;
int num = 1;
while(row<n){
        int space =1;
        while(space<=n-row){
                cout<<" "<<" ";
                space = space+1;
        }
        int col = 1;
        while (col<=row)
        {
                cout<<num<<" ";
                num=num+1;
                col = col+1;
        }
        cout<<endl;
        row = row+1;
        
}


/*              1
              1 2 1
            1 2 3 2 1
          1 2 3 4 3 2 1 

*/

int n;
cout<<"Enter number of rows: ";
cin>>n;
int row = 1;

while(row<=n){
        int space =1;
        while(space<=n-row){
                cout<<" "<<" ";
                space=space+1;
        }
        int col=1;
        while (col<=row)
        {
                cout<<col<<" ";
                col = col+1;
        }
        int value = row-1;
        while (value)
        {
                cout<<value<<" ";
                value = value-1;
                
        }
        cout<<endl;
        row = row+1;
        
}


/*        1 2 3 4 5 5 4 3 2 1
          1 2 3 4 * * 4 3 2 1
          1 2 3 * * * * 3 2 1
          1 2 * * * * * * 2 1
          1 * * * * * * * * 1

*/

int n;
cout<<"Enter number of rows: ";
cin>>n;
int row = 1;
while(row<=n){
        int col = 1;
        while(col<=n-row+1){
                cout<<col<<" ";
                col = col+1;
        }
        col = 1;
        while(col<= (row-1)*2){
                cout<<"*"<<" ";
                col = col+1;
        }
        col = n-row+1;
        while(col>=1){
                cout<<col<<" ";
                col = col-1;
        }
        cout<<endl;
        row = row+1;

}
return 0;


}

    
    
}


