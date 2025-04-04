#ifndef ADVANC_MATH_H
#define ADVANC_MATH_H

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

long long GCD(long long a, long long b) {
    if (b == 0) {
        return a;
    } else {
        return GCD(b, a % b);
    }
}

long long LCM(long long a, long long b) {
    return (a / GCD(a, b)) * b;
}

int random_1_to_1000() {
    srand(time(0)); 
    return (rand() % 1000) + 1;
}

#endif 