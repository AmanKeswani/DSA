#include <iostream>
using namespace std;

const int ROWS = 3;    
const int COLS = 3;    
const int THRESHOLD = 2;    

int main() {
    int matrix[ROWS][COLS] = {{1, 0, 0},
                              {0, 2, 0},
                              {0, 0, 3}};
    int nonZeroCount = 0;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] != 0) {
                nonZeroCount++;
            }
        }
    }

    if (nonZeroCount < THRESHOLD) {
        cout << "The matrix is sparse." << endl;
    } else {
        cout << "The matrix is not sparse." << endl;
    }

    return 0;
}
