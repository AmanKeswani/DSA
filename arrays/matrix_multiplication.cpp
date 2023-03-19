#include <iostream>
using namespace std;

const int ROWS1 = 2;    
const int COLS1 = 3;    
const int ROWS2 = 3;    
const int COLS2 = 2;    

int main() {
    int matrix1[ROWS1][COLS1] = {{1, 2, 3},
                                 {4, 5, 6}};
    int matrix2[ROWS2][COLS2] = {{7, 8},
                                 {9, 10},
                                 {11, 12}};
    int result[ROWS1][COLS2] = {0};

    for (int i = 0; i < ROWS1; i++) {
        for (int j = 0; j < COLS2; j++) {
            for (int k = 0; k < ROWS2; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "The result of matrix multiplication is:" << endl;
    for (int i = 0; i < ROWS1; i++) {
        for (int j = 0; j < COLS2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
