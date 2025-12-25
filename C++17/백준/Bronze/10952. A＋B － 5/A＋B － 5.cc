#include <stdio.h>
int main(void) {
    while (1) {
        int a = 0;
        int b = 0;
        scanf("%d %d",&a,&b);
        if (a == 0 && b == 0) {
            return 0;
        }
        printf("%d\n", a + b);
    }
}