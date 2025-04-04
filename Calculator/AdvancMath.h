#ifndef ADVANC_MATH_H
#define ADVANC_MATH_H

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

double factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int GCD(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return GCD(b, a % b);
    }
}

int LCM(int a, int b) {
    return (a / GCD(a, b)) * b;
}

double random_in_range(int min, int max) {
    srand(time(0));  // Seed the random number generator
    return rand() % (max - min + 1) + min;
}

#endif 