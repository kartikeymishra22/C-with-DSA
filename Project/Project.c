#include <stdio.h>

int main() {
    int n;
    printf("Enter the Amount: ");
    scanf("%d", &n);

    int ans1, ans2, ans3, ans4, ans5;
    int op = 1;
    switch (op) {
        case 1:
            ans1 = n / 100;
            printf("100s notes: %d\n", ans1);
            ans1 = n % 100;

        case 2:
            ans2 = ans1 / 50;
            printf("50s notes: %d\n", ans2);
            ans2 = ans1 % 50;

        case 3:
            ans3 = ans2 / 20;
            printf("20s notes: %d\n", ans3);
            ans3 = ans2 % 20;

        case 4:
            ans4 = ans3 / 10;
            printf("10s notes: %d\n", ans4);
            ans4 = ans3 % 10;

        case 5:
            ans5 = ans4 / 1;
            printf("1s notes: %d\n", ans5);
            break;
    }

    return 0;
}