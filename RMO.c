#include <stdio.h>

int main() {
    int BA,i,j,N,W,address;

    printf("Enter Base Address: ");
    scanf("%d",&BA);

    printf("Enter number of columns: ");
    scanf("%d",&N);

    printf("Enter element size: ");
    scanf("%d",&W);

    printf("Enter row index: ");
    scanf("%d",&i);

    printf("Enter column index: ");
    scanf("%d",&j);

    address = BA+((i*N)+j)*W;

    printf("Address = %d",address);

    return 0;
}