#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
bool isValid(vector<vector<char>> &board, int row, int col, char c)
{
    for (int i = 0; i < 9; i++)
    {
        if (board[i][col] == c)
        {
            return false;
        }
        if (board[row][i] == c)
        {
            return false;
        }
        if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c)
        {
            return false;
        }
    }
    return true;
}
bool solve(vector<vector<char>> &board)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            if (board[i][j] == '.')
            {
                for (char c = '1'; c <= '9'; c++)
                {
                    if (isValid(board, i, j, c))
                    {
                        board[i][j] = c;
                        if (solve(board))
                        {
                            return true;
                        }
                        else
                        {
                            board[i][j] = '.';
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}
void solveSudoku(vector<vector<char>> &board)
{
    solve(board);
    return;
}
void sudokuMazeInput(int n, vector<vector<char>> &board)
{
    cout << "INPUT WILL BE ROW WISE WITH ROW SIZE :: " << n << endl;
    cout << "ENTER '.' FOR BLANK BLOCKS AND NUMBER{1 to " << n << "} FOR NUMBER ENTRY " << endl;
    cout << "HERE" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char ip;
            cin >> ip;
            board[i][j] = ip;
        }
    }
    solveSudoku(board);
    return;
}
void printSudokuSolution(vector<vector<char>>&board,int n)
{
    cout<<"SOLUTION OF THIS SODUKU IS :: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}
void startSudokuSolver()
{
    cout << "ENTER THE SUDOKU SIZE ---> ";
    int n;
    cin >> n;
    vector<vector<char>> board(n, vector<char>(n));
    sudokuMazeInput(n, board);
    printSudokuSolution(board,n);
    return;
}
int main()
{
    startSudokuSolver();
    return 0;
}