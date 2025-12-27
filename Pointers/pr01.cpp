#include<iostream>
using namespace std;


int main(){

    int a=10, b=20;
    int* p1=&a;
    int* p2=&b;

    p2=p1;
    cout<<*p2<<endl; // Output: 10
    cout<<*p1<<endl; // Output: 10
    cout<<a<<endl;  // Output: 10

    return 0;
}