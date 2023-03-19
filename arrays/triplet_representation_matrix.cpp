#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;
const int MAX_SIZE = ROWS * COLS;

int main() {
    int matrix[ROWS][COLS] = {{1, 0, 0},
                              {0, 2, 0},
                              {0, 0, 3}};
    int row[MAX_SIZE], col[MAX_SIZE], value[MAX_SIZE];
    int nonZeroCount = 0;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] != 0) {
                row[nonZeroCount] = i;
                col[nonZeroCount] = j;
                value[nonZeroCount] = matrix[i][j];
                nonZeroCount++;
            }
        }
    }

    cout << "Triplet representation of the matrix:" << endl;
    for (int i = 0; i < nonZeroCount; i++) {
        cout << "(" << row[i] << ", " << col[i] << ", " << value[i] << ")" << endl;
    }

    return 0;
}
