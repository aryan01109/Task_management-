#include<iostream>
#include<cmath>
using namespace std;

int binary_to_decimal(int n){
    int decimal_number = 0;
    int power = 0;
    while(n > 0){
        int last_digit = n % 10;
        decimal_number += last_digit * pow(2, power);
        n = n / 10;
        power++;
    }
    return decimal_number;
}

int main(){
    int binary_number;
    cout << "Enter a binary number: ";
    cin >> binary_number;
    int decimal_number = binary_to_decimal(binary_number);
    cout << "Decimal equivalent: " << decimal_number << endl;
    return 0;
}