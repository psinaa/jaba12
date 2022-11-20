#include <stdio.h>
#include <locale.h>

void task1() {
    int* pi, i = 5;
    float* pf, f = 2.1f;
    printf("%lu\n", sizeof(pi));
    printf("%lu\n", sizeof(pf));
}

void task2() {
    float PI = 3.14159, * p1, * p2;
    p1 = p2 = &PI;
    printf("По адресу p1=%p хранится *p1=%g\n", p1, *p1);
    printf("По адресу p2=%p хранится *p2=%g\n", p2, *p2);
}

void task3() {
    int* pa, x = 5;
    pa = &x;
    printf("По адресу %p хранится *ptr=%g\n", pa, *pa);
    pa++;
    printf("По адресу %p хранится *ptr=%g\n", pa, *pa);
    pa--;
    printf("По адресу %p хранится *ptr=%g\n", pa, *pa);
}

void task4() {
    float array[10] = { 1.1, 2.2, 3.3, 4.4,5.5 ,6.6,7.7,8.8,9.9,10.10 };
    float* ptr_a;
    printf("%p = %p = %p\n", array, &array[0], &array);

}

void main() {
    setlocale(LC_ALL, "RUS");
    task1();
    task2();
    task3();
    task4();
}