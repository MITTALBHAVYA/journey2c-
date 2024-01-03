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

bool nQueen(vector<vector<int>> &arr, int x, int n, int &count) {
    if (x >= n) {
        // Found a solution, increment count and print the solution
        count++;
        cout << "Solution " << count << ":" << endl;
        for (const auto &row : arr) {
            for (int val : row) {
                cout << val << " ";
            }
            cout << endl;
        }
        cout << endl;
        return false; // To find all solutions, return false
    }

    bool res = false;
    for (int col = 0; col < n; col++) {
        if (isSafe(arr, x, col, n)) {
            arr[x][col] = 1;

            res = nQueen(arr, x + 1, n, count) || res;

            arr[x][col] = 0;
        }
    }
    return res;
}

int main() {
    int n;
    cout << "Enter the number of Queens: ";
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n, 0));
    int count = 0; // Counter for total solutions found

    if (!nQueen(arr, 0, n, count)) {
        cout << "Total number of solutions: " << count << endl;
    } else {
        cout << "Solution does not exist." << endl;
    }

    return 0;
}
