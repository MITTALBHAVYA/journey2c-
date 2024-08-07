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

bool nQueen(vector<vector<int>> &arr, int x, int n) {
    if (x >= n) {
        return true;
    }

    for (int col = 0; col < n; col++) {
        if (isSafe(arr, x, col, n)) {
            arr[x][col] = 1;

            if (nQueen(arr, x + 1, n)) {
                return true;
            }
            arr[x][col] = 0;
        }
    }
    return false;
}

void printSolution(const vector<vector<int>> &arr) {
    for (const auto &row : arr) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of Queens: ";
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n, 0));

    if (nQueen(arr, 0, n)) {
        cout << "Solution exists:" << endl;
        printSolution(arr);
    } else {
        cout << "Solution does not exist." << endl;
    }

    return 0;
}
