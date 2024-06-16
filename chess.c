#include <stdio.h>
char board[8][8] = {
    {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
    {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
};
void print_board() {
    for (int i = 0; i < 8; i++) {
    printf("|");
    for (int j = 0; j < 8; j++) {
    printf("%c|", board[i][j]);
    }
    printf("\n");
    }
}
int main() {
    int from_x, from_y, to_x, to_y;

    while (1) {
    printf("\nCurrent board:\n");
    print_board();
    printf("\nEnter move (from_x from_y to_x to_y): ");
    scanf("%d %d %d %d", &from_x, &from_y, &to_x, &to_y);
    board[to_x][to_y] = board[from_x][from_y];
    board[from_x][from_y] = ' ';
    }

    return 0;
}