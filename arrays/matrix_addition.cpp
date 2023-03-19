#include <iostream>
using namespace std;

const int ROWS = 2;    
const int COLS = 2;    

int main() {
    int matrix1[ROWS][COLS] = {{1, 2},
                               {3, 4}};
    int matrix2[ROWS][COLS] = {{5, 6},
                               {7, 8}};
    int result[ROWS][COLS] = {0};

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << "The result of matrix addition is:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
