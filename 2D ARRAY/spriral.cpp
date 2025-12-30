#include <iostream>
using namespace std;

int main() {

    int n = 4, m = 4;

    int mat[4][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13,14, 15, 16}
    };

    // Print the matrix
    cout << "Matrix:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nSpiral Order:\n";

    int startRow = 0, endRow = n - 1;
    int startCol = 0, endCol = m - 1;

    while(startRow <= endRow && startCol <= endCol) {

        // 1. Print top row
        for(int j = startCol; j <= endCol; j++) {
            cout << mat[startRow][j] << " ";
        }
        startRow++;

        // 2. Print right column
        for(int i = startRow; i <= endRow; i++) {
            cout << mat[i][endCol] << " ";
        }
        endCol--;

        // 3. Print bottom row
        if(startRow <= endRow) {
            for(int j = endCol; j >= startCol; j--) {
                cout << mat[endRow][j] << " ";
            }
            endRow--;
        }

        // 4. Print left column
        if(startCol <= endCol) {
            for(int i = endRow; i >= startRow; i--) {
                cout << mat[i][startCol] << " ";
            }
            startCol++;
        }
    }

    return 0;
}