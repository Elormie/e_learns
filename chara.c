#include <stdio.h>

int main() {
    int ch;
    
    while ((ch = getchar()) != EOF) {
        printf("getchar() != EOF evaluates to: %d\n", ch != EOF);
    }
    
    return 0;
}