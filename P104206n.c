#include <stdio.h>

int array_parity(int *numbers, int length) {
    for(int i = 0; i < length; i++) {
        if(((numbers[i] % 2)+2)%2 != i % 2) {
            return 0;
        }
    }
    return 1 ;
}

int main() {
    int test_case;
    scanf("%d", &test_case);
    for(int i= 0; i < test_case; i++) {
        int length;
        scanf("%d", &length);
        int numbers[length];
        for(int i = 0; i < length; i++) {
            scanf("%d", &numbers[i]);
        }
        int result = array_parity(numbers, length);
        if (result) {
            printf("True");
        } else {
            printf("False");
        }
        printf("%d", result);
    }
    return 0;
}
