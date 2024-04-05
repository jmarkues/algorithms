#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1) {
        return 1;
    } else {
        int total = 1;
        while (n >= 1) {
            total = total * n;
            n = n - 1;
        }
        return total;
    }
}


int main()
{
    printf("%d\n", factorial(6));
}
