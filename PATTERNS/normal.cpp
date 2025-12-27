#include<iostream>
using namespace std;

void hollow_rectangle(){
    int rows = 4, cols = 4;
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=cols; j++){
            if(i==1 || i==rows || j==1 || j==cols){
                cout<<"*";
                // *****
                // *   *
                // *   *
                // *   *
                // *****
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    hollow_rectangle();
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<i;
            // 00000
            // 11111
            // 22222
            // 33333
        }
        cout<<endl;
    }
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cout<<j;
            // 12345
           // 12345
          // 12345
         // 12345
        }
        cout<<endl;
    }
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout<<i;
            // 1
            // 22
            // 333
            // 4444
            // 55555
        }
        cout<<endl;
    }
    for(int i=5; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<i;
            // 55555
            // 4444
            // 333
            // 22
            // 1
        }
        cout<<endl;
    }
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
            // 1
            // 12
            // 123
            // 1234
            // 12345
        }
        cout<<endl;
    }
    for(int i=5; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<j;
            // 12345
            // 1234
            // 123
            // 12
            // 1
        }
        cout<<endl;
    }
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            if((i+j)%2==0){
                cout<<"1";
            } else {
                cout<<"0";
            }
            // 1
            // 10
            // 101
            // 1010
            // 10101
        }
        cout<<endl;
    }
    int n=5;
     
    for(int i=1; i<=n; i++){
        char key='a';
        for(int j=1; j<=i; j++){
          
              cout<<key;
             
            
            // 1
            // 12
            // 123
            // 1234
            // 12345
        } key++;
        cout<<endl;
    }

     for(int i=1; i<=n; i++){
        char key='a'+i-1;
        for(int j=1; j<=i; j++){
          
              cout<<key;
             
            
            // 1
            // 12
            // 123
            // 1234
            // 12345
        } key++;
        cout<<endl;
    }
    int key=1;
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=i; j++){
          
              cout<<key;
             key++;
            
            // 1
            // 12
            // 123
            // 1234
            // 12345
        } 
        cout<<endl;
    }
    return 0;
}
