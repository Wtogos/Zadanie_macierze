#ifndef MACIERZ
#define MACIERZ

#include <iostream>

class Macierz {
private:
    double data[2][2];

public:
    // Konstruktor domy�lny
    Macierz();

    // Konstruktor kopiuj�cy
    Macierz(const Macierz& copy);

    // Destruktor
    ~Macierz();

    // Przeci��enie operatora mno�enia macierzy
    Macierz operator*(const Macierz& copy) const;

    // Przeci��enie operatora dodawania macierzy
    Macierz operator+(const Macierz& copy) const;

    // Przeci��enie operatora mno�enia macierzy przez skalar
    Macierz operator*(const double x) const;

    // Przeci��enie operatora przypisania
    Macierz& operator=(const Macierz& copy);

    // Przeci��enie operatora por�wnania
    bool operator==(const Macierz& copy) const;

    // Przeci��enie operatora dodawania macierzy
    Macierz& operator+=(const Macierz& copy);

    // Przeci��enie operatora mno�enia macierzy
    Macierz& operator*=(const Macierz& copy);

    // Przeci��enie operatora mno�enia macierzy przez skalar
    Macierz& operator*=(const double x);

    // Przyja�� dla funkcji wypisuj�cej macierz
    friend std::ostream& operator<<(std::ostream& s, const Macierz& m);

    // Metoda ustawiaj�ca warto�� elementu macierzy
    void set(int i, int j, double x);

    // Metoda pobieraj�ca warto�� elementu macierzy
    double get(int i, int j) const;

    // Metoda transponuj�ca macierz
    void transpozycja();
};

#endif // MACIERZ