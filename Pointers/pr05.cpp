#include<iostream>
using namespace std;

int main(){

    int a=10;
    int *ptr=&a;

    char ch='A';
    char *cptr=&ch;

    cptr +=a;
    *ptr +=ch;

    cout<<a<<ch<<endl;

    return 0;

}