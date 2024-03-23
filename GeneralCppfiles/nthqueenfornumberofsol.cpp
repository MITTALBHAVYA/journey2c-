#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<int>> &arr, int x, int y, int n) {
    for (int row = 0; row < x; row++) {
        if (arr[row][y] == 1) {
            return false;
        }
    }

    int rowPos = x, colPos = y;
    while (rowPos >= 0 && colPos >= 0) {
        if (arr[rowPos][colPos] == 1) {
            return false;
        }
        rowPos--;
        colPos--;
    }

    rowPos = x, colPos = y;
    while (rowPos >= 0 && colPos < n) {
        if (arr[rowPos][colPos] == 1) {
            return false;
        }
        rowPos--;
        colPos++;
    }
    return true;
}

int totalSolutions = 0;

void nQueenCount(vector<vector<int>> &arr, int x, int n) {
    if (x >= n) {
        totalSolutions++;
        return;
    }

    for (int col = 0; col < n; col++) {
        if (isSafe(arr, x, col, n)) {
            arr[x][col] = 1;
            nQueenCount(arr, x + 1, n);
            arr[x][col] = 0;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of Queens: ";
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n, 0));

    nQueenCount(arr, 0, n);

    cout << "Total solutions for " << n << "-Queens problem: " << totalSolutions << endl;

    return 0;
}
//1,0,0,2,10,4,40,92,352
