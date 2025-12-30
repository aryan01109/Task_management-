#include<iostream>
using namespace std;

int main(){
    int n=4,m=4;

    int mat[4][4]={
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13,14, 15, 16}
    };
int p_diagonal_sum=0;

    for(int i=0; i<n; i++){
        p_diagonal_sum = p_diagonal_sum + mat[i][i];
    }
    cout<<"Sum of primary diagonal elements is: "<<p_diagonal_sum<<endl;

int s_diagonal_sum=0;

    for(int i=0; i<n; i++){
        s_diagonal_sum = s_diagonal_sum + mat[i][n-1-i];
    }
    
   cout<<"Sum of secondary diagonal elements is: "<<s_diagonal_sum<<endl;

   int common_sum;
   for(int i=0; i<n; i++){
        if(mat[i][i]==(mat[i][n-1-i])){
            common_sum = common_sum + mat[i][i];
        }
   }
    cout<<"Sum of common elements in both diagonals is: "<<common_sum<<endl;

    cout<<"total sum: "<<(p_diagonal_sum + s_diagonal_sum - common_sum)<<endl;
    
     return 0;
}