#include <iostream>
#include <vector>

void printSpiralMatrix(int rows, int columns) {
    std::vector<std::vector<int>> matrix(rows, std::vector<int>(columns));

    int num = 1;  // Start number
    int topRow = 0, bottomRow = rows - 1;
    int leftCol = 0, rightCol = columns - 1;

    while (topRow <= bottomRow && leftCol <= rightCol) {
        // Print top row
        for (int col = leftCol; col <= rightCol; col++) {
            matrix[topRow][col] = num++;
        }
        topRow++;

        // Print right column
        for (int row = topRow; row <= bottomRow; row++) {
            matrix[row][rightCol] = num++;
        }
        rightCol--;

        // Print bottom row
        for (int col = rightCol; col >= leftCol; col--) {
            matrix[bottomRow][col] = num++;
        }
        bottomRow--;

        // Print left column
        for (int row = bottomRow; row >= topRow; row--) {
            matrix[row][leftCol] = num++;
        }
        leftCol++;
    }

    // Print the spiral matrix
    for (const auto& row : matrix) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << "\n";
    }
}

int main() {
    int rows, columns;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> columns;

    std::cout << "Spiral Matrix:\n";
    printSpiralMatrix(rows, columns);

    return 0;
}
