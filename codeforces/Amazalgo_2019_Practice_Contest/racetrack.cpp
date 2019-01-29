#include <bits/stdc++.h>

unsigned long long gcd (unsigned long long a, unsigned long long b) {
    while (a != 0) {
        unsigned long long c = a;
        a = b%a;
        b = c;
    }
    return b;
}

unsigned long long lcm (unsigned long long a, unsigned long long b) {
    return a * (b / gcd (a,b));
}

int main () {
    unsigned long long a; unsigned long long b;
    std::cin >> a >> b;
    std::cout << lcm(a,b);
}