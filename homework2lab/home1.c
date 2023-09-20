#include <locale.h>
#include <stdio.h>

void main() {
    setlocale(LC_ALL, "RUS");
    int L = 5;
    int n = 10;

    printf("Дано:\n \t   %d\n \t %d\n \t_______\n", n, L);

    float answer = (float)n / L;
    int intPart = (int)answer;
    float fracPart = answer - intPart;

    printf("Ответ: \t%+03d.%02d\n", intPart, (int)(fracPart * 100));
}