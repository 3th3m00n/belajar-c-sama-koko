#include <stdio.h>
#include <string.h>

int main() {
    for(int i = 1; i <= 10; i++) {
        if (i%2 == 0) {
            printf("%i adalah bilangan genap\n", i);
        } else {
            printf("%i adalah bilangan gasal\n", i);
        }
    }
    return 0;
}