#include <stdio.h>

int main() {
    int d = 654;  // Вхідне число
    int last_digit = d % 10; // Остання цифра
    int remaining = d / 10;  // Перші дві цифри
    int swapped = (remaining % 10) * 10 + (remaining / 10); // Міняємо місцями цифри
    int x = last_digit * 100 + swapped; // Формуємо число

    printf("x: %d\n", x);  // Очікуваний результат: 456
    return 0;
}


