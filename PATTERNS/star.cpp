#include<iostream>
using namespace std;

// Function to print a square pattern of stars
void square_pattern(){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<"*";
            // *****
            // *****
            // *****
            // *****
            // *****
        }
        cout<<endl;
    }
}

// right angled triangle pattern of stars
void right_angled_triangle_pattern(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
            // *
            // **
            // ***
            // ****
            // *****
        }
        cout<<endl;
    }
}
// inverted right angled triangle pattern of stars
void inverted_right_angled_triangle_pattern(){
    for(int i=5; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
            // *****
            // ****
            // ***
            // **
            // *
        }
        cout<<endl;
    }
}
void pyramid_pattern(){
    int n = 5; // Number of rows
    for(int i=1; i<=n; i++){
        // Print spaces
        for(int j=i; j<n; j++){
            cout<<" ";
        }
        // Print stars
        for(int k=1; k<=(2*i-1); k++){
            cout<<"*";
            //     *
            //    ***
            //   *****
            //  *******
        }
        cout<<endl;
    }
}
void inverted_pyramid_pattern(){
    int n = 5; // Number of rows
    for(int i=n; i>=1; i--){
        // Print spaces
        for(int j=i; j<n; j++){
            cout<<" ";
        }
        // Print stars
        for(int k=1; k<=(2*i-1); k++){
            cout<<"*";
            // *******
            //  *****
            //   ***
            //    *
        }
        cout<<endl;
    }
}

void diamond_pattern(){
    int n = 5; // Number of rows
    // Upper half of diamond
    for(int i=1; i<=n; i++){
        for(int j=i; j<n; j++){
            cout<<" ";
        }
        for(int k=1; k<=(2*i-1); k++){
            cout<<"*";
        }
        cout<<endl;
    }
    // Lower half of diamond
    for(int i=n-1; i>=1; i--){
        for(int j=i; j<n; j++){
            cout<<" ";
        }
        for(int k=1; k<=(2*i-1); k++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void butterfly_pattern(){
    int n = 5; // Number of rows
    // Upper half of butterfly
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=1; j<=2*(n-i); j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    // Lower half of butterfly
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=1; j<=2*(n-i); j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void RhombusPattern(){
    int n = 5; // Number of rows
    for(int i=1; i<=n; i++){
        for(int j=i; j<n; j++){
            cout<<" ";
        }
        for(int k=1; k<=n; k++){
            cout<<"*";
            //     *****
            //    *****
            //   *****
            //  *****
            // *****
        }
        cout<<endl;
    }
}
void PalindromicPatternwithNumbers(){
    int n = 5; // Number of rows
    for(int i=1; i<=n; i++){
        // Print spaces
        for(int j=i; j<n; j++){
            cout<<" ";
        }
        // Print decreasing numbers
        for(int k=i; k>=1; k--){
            cout<<k;
        }
        // Print increasing numbers
        for(int l=2; l<=i; l++){
            cout<<l;
        }
        cout<<endl;
    }
}
int main(){
    square_pattern();
    right_angled_triangle_pattern();
    inverted_right_angled_triangle_pattern();
    pyramid_pattern();
    inverted_pyramid_pattern();
    diamond_pattern();
    butterfly_pattern();
    RhombusPattern();
    PalindromicPatternwithNumbers();
    return 0;
}