#include<iostream>
using namespace std;

int main (){

    int a;
    int *ptr;
    a=5;
    ptr=&a;
    cout<<"Value of a is: "<<a<<endl;
    cout<<"Address of a is: "<<&a<<endl;
    cout<<"Value of ptr is: "<<ptr<<endl;
    cout<<"Value at address stored in ptr is: "<<*ptr<<endl;
    return 0;
}