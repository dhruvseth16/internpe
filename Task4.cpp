#include <iostream>
#include <vector>

using namespace std;

void printBoard(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
}

bool checkWin(const vector<vector<char>>& board, char player) {

    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }

    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;

    return false;
}

int main() {
    vector<vector<char>> board(3, vector<char>(3, '-'));

    bool player1 = true; // Player 1 is 'X', Player 2 is 'O'
    int moves = 0;

    while (moves < 9) {

        printBoard(board);

        char currentPlayer = (player1) ? 'X' : 'O';

        int row, col;
        cout << "Player " << currentPlayer << ", enter your move (row column): ";
        cin >> row >> col;

        row--;
        col--;

        if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != '-') {
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        board[row][col] = currentPlayer;

        if (checkWin(board, currentPlayer)) {
            printBoard(board);
            cout << "Player " << currentPlayer << " wins!" << endl;
            break;
        }

        player1 = !player1;
        moves++;
    }

    if (moves == 9) {
        printBoard(board);
        cout << "It's a draw!" << endl;
    }

    return 0;
}
