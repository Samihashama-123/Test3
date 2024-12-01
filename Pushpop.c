#include <stdio.h>

void push();
void pop();
void show();

int stack[50], i, j, option = 0, n, top = -1;

void main() {
    printf("Enter the number of elements in the stack: ");
    scanf("%d", &n);

    printf("Stack implementation using array\n");

    while (option != 4) {
        printf("\nChoose one from the below options:\n");
        printf("1. Push\n2. Pop\n3. Show\n4. Exit\n");
        printf("Enter your option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                show();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Please Enter a valid option\n");
        }
    }
}

void push() {
    int value;
    if (top == n - 1) {
        printf("\nOverflow\n");
    } else {
        printf("Enter the value: ");
        scanf("%d", &value);
        top = top + 1;
        stack[top] = value;
    }
}

void pop() {
    if (top == -1) {
        printf("\nUnderflow\n");
    } else {
        printf("Popped element: %d\n", stack[top]);
        top = top - 1;
    }
}

void show() {
    if (top == -1) {
        printf("\nStack is empty\n");
    } else {
        printf("Stack elements are:\n");
        for (i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}