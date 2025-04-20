#include <stdio.h>

int array_parity(int *numbers, int length) {
    for(int i = 0; i < length; i++) {
        if(((numbers[i] % 2) + 2) %2 != i % 2) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int length;
    while(scanf("%d", &length) != EOF) {
        int numbers[length];
        for(int i = 0; i < length; i++) {
            scanf("%d", &numbers[i]);
        }
        int result = array_parity(numbers, length);
        if(result) {
            printf("True");
        } else {
            printf("False");
        }

    }
    return 0;
}
