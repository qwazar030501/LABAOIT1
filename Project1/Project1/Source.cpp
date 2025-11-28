#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    printf("число фибоначи: ");
    scanf("%d", &n);
    int res = fibonacci(n);
    printf("(%d) = %d\n", n, res);
    printf("sf");
    printf("sf");
    printf("sf");
    printf("sf");
    printf("sf2");
    printf("sf2");
    printf("sf2");
    printf("sf3");
    printf("sf3");
    printf("sf3");

}


