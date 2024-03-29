#ifndef MACIERZ
#define MACIERZ

#include <iostream>

class Macierz {
private:
    double data[2][2];

public:
    // Konstruktor domyślny
    Macierz();

    // Konstruktor kopiujący
    Macierz(const Macierz& copy);

    // Destruktor
    ~Macierz();

    // Przeciążenie operatora mnożenia macierzy
    Macierz operator*(const Macierz& copy) const;

    // Przeciążenie operatora dodawania macierzy
    Macierz operator+(const Macierz& copy) const;

    // Przeciążenie operatora mnożenia macierzy przez skalar
    Macierz operator*(const double x) const;

    // Przeciążenie operatora przypisania
    Macierz& operator=(const Macierz& copy);

    // Przeciążenie operatora porównania
    bool operator==(const Macierz& copy) const;

    // Przeciążenie operatora dodawania macierzy
    Macierz& operator+=(const Macierz& copy);

    // Przeciążenie operatora mnożenia macierzy
    Macierz& operator*=(const Macierz& copy);

    // Przeciążenie operatora mnożenia macierzy przez skalar
    Macierz& operator*=(const double x);

    // Przyjaźń dla funkcji wypisującej macierz
    friend std::ostream& operator<<(std::ostream& s, const Macierz& m);

    // Metoda ustawiająca wartość elementu macierzy
    void set(int i, int j, double x);

    // Metoda pobierająca wartość elementu macierzy
    double get(int i, int j) const;

    // Metoda transponująca macierz
    void transpozycja();
};

#endif // MACIERZ