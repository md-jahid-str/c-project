#include <stdio.h>

int add(int a, int b) {
    return a+b;
}

int subtract(int a, int b) {
    return a-b;
}

int multiply(int a, int b) {
       return a*b;
}

float divide (int a, int b){
    if(b == 0){
        printf("Error\n");
        return 0.0;
    }
    return(float) a/b;
}

int main() {
    int choice, a,b;

    while(1){
        printf("\n=== calculator menu ===\n");
        printf("1. add\n");
        printf("2. subtract\n");
        printf("3. multiply\n");
        printf("4. divide\n");
        printf("5. exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Big Fucker Exiting!\n");
            break;
        }

        printf("enter first number: ");
        scanf("%d", &a);
        printf("enter second number: ");
        scanf("%d", &b);

        switch (choice) {
            case 1:
                printf("Result: %d\n", add(a, b));
                break;
            case 2:
                printf("Result: %d\n", subtract(a, b));
                break;
            case 3:
                printf("Result: %d\n", multiply(a, b));
                break;
            case 4:
                printf("Result: %.2f\n", divide(a, b));
                break; 
            default:
                printf("you choiced wrong option! Mother fucker!\n");
                break;
    }
} while ( choice != 5);

return 0;

}