#include <stdio.h>

int main() {
    int row,col,j;
    int offset;

    printf("Enter number of columns: ");
    scanf("%d",&col);

    printf("Enter row index: ");
    scanf("%d",&row);

    printf("Enter column index: ");
    scanf("%d",&j);

    offset = (row*col)+j;

    printf("Offset = %d",offset);

    return 0;
}