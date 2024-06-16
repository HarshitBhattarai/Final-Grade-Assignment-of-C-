#include <stdio.h>
char board[3][3];
void initializeBoard() 
{
    for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
    board[i][j] = '-';
}

void printBoard() {
    printf("  0 1 2\n");
    for (int i = 0; i < 3; i++) {
    printf("%d ", i);
    for (int j = 0; j < 3; j++)
    printf("%c ", board[i][j]);
    printf("\n");
    }
}

char checkWinner() {
    for (int i = 0; i < 3; i++) {
    if (board[i][0] != '-' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
    return board[i][0];
    if (board[0][i] != '-' && board[0][i] == board[1][i] && board[1][i] == board[2][i])
    return board[0][i];
    }
    if (board[0][0] != '-' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
    return board[0][0];
    if (board[0][2] != '-' && board[0][2] == board[1][1] && board[1][1] == board[2][0])
    return board[0][2];
    return '-';
}

int main() {
    int row, col;
    char currentPlayer = 'X';
    char winner = '-';

    initializeBoard();

    printf("Welcome to Tic-Tac-Toe!\n\n");

    while (winner == '-') {
    printBoard();
    printf("\nPlayer %c's turn.\n", currentPlayer);
    printf("Enter row (0-2) and column (0-2) separated by space: ");
    scanf("%d %d", &row, &col);

    if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != '-') {
    printf("Invalid move! Please try again.\n");
    continue;
    }

    board[row][col] = currentPlayer;
    winner = checkWinner();
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    printBoard();

    if (winner != '-')
    printf("\nPlayer %c wins!\n", winner);
    else
    printf("\nIt's a draw!\n");

    return 0;
}