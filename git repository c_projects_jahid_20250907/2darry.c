#include <stdio.h>

int main() {
    int matrix[4][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
    };
    int sum = 0;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
            sum += matrix[i][j];
        }
        printf("\n");
    }
    printf("Sum of all elements: %d\n", sum);
    return 0;
}