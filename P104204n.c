#include <stdio.h>

int monotone_decrease(int *numbers, int length) {
    for (int i = 0; i < length; i++) {
        if(numbers[i] > numbers[i+1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int test_case;
    scanf("%d", &test_case);
    for(int i = 0; i < test_case; i++) {
        int length;
        scanf("%d", &length);
        int numbers[length];
        for(int i = 0; i < length-1; i++) {
            scanf("%d", &numbers[i]);
        }
        int result = monotone_decrease(numbers, length);
        if(result) {
            printf("True");
        } else {
            printf("False");
        }
    }
    return 0;
}
