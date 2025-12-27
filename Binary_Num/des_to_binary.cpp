#include<iostream>
#include<cmath>
using namespace std;

int desimal_to_binary(int n){
    int binary_number = 0;
    int power = 0;
    while(n > 0){
        int remainder = n % 2;
        binary_number += remainder * pow(10, power);
        n = n / 2;
        power++;
    }
    return binary_number;
}

int main(){
    int decimal_number;
    cout << "Enter a decimal number: ";
    cin >> decimal_number;
    int binary_number = desimal_to_binary(decimal_number);
    cout << "Binary equivalent: " << binary_number << endl;
    return 0;
}