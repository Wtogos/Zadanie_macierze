#include "macierz.h"
#include <iostream>

int main() {
    // Utworzenie dwóch macierzy
    Macierz A, B;

    // Ustawienie wartoœci elementów macierzy
    A.set(0, 0, 1);
    A.set(0, 1, 2);
    A.set(1, 0, 3);
    A.set(1, 1, 4);

    B.set(0, 0, 5);
    B.set(0, 1, 6);
    B.set(1, 0, 7);
    B.set(1, 1, 8);

    // Wyœwietlenie macierzy A i B
    std::cout << "Macierz A:" << std::endl;
    std::cout << A << std::endl;

    std::cout << "Macierz B:" << std::endl;
    std::cout << B << std::endl;

    // Wykonanie operacji na macierzach
    Macierz C = A + B;
    Macierz D = A * B;
    Macierz E = A * 2;

    // Wyœwietlenie wyników operacji
    std::cout << "A + B = " << std::endl;
    std::cout << C << std::endl;

    std::cout << "A * B = " << std::endl;
    std::cout << D << std::endl;

    std::cout << "A * 2 = " << std::endl;
    std::cout << E << std::endl;

    return 0;
}