#include <iostream>
#include <cmath>
#include <cstdlib>

typedef float REAL;

// Declaraciones
REAL S1(int N);
REAL S2(int N);

int main(void)
{
    std::cout.precision(10);
    std::cout.setf(std::ios::scientific);

    for (int N = 1; N <= 10000000; N *= 10) {
        REAL s1 = S1(N);
        REAL s2 = S2(N);
        REAL diferencia = std::fabs(1.0f - s1 / s2);

        std::cout << N
                  << "\t" << s1
                  << "\t" << s2
                  << "\t" << diferencia
                  << "\n";
    }

    return 0;
}

REAL S1(int N)
{
    REAL suma = 0.0;
    for (int k = 1; k <= N; ++k) {
        suma += 1.0 / k;
    }
    return suma;
}

REAL S2(int N)
{
    REAL suma = 0.0;
    for (int k = N; k >= 1; --k) {
        suma += 1.0 / k;
    }
    return suma;
}