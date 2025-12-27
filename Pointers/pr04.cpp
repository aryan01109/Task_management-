#include<iostream>
using namespace std;

void byte_value(int &a,int &b, int &c){
    a*=1;
    b*=2;
    c*=3;
    
}

int main (){
    int x=5,y=10,z=15;
    byte_value(x,y,z);
    
    cout<<x<<" "<<y<<" "<<z<<endl;
    return 0;
}