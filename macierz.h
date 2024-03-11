#ifndef MACIERZ
#define MACIERZ

#include <iostream>

class Macierz {
private:
    double data[2][2];

public:
    // Konstruktor domyœlny
    Macierz();

    // Konstruktor kopiuj¹cy
    Macierz(const Macierz& copy);

    // Destruktor
    ~Macierz();

    // Przeci¹¿enie operatora mno¿enia macierzy
    Macierz operator*(const Macierz& copy) const;

    // Przeci¹¿enie operatora dodawania macierzy
    Macierz operator+(const Macierz& copy) const;

    // Przeci¹¿enie operatora mno¿enia macierzy przez skalar
    Macierz operator*(const double x) const;

    // Przeci¹¿enie operatora przypisania
    Macierz& operator=(const Macierz& copy);

    // Przeci¹¿enie operatora porównania
    bool operator==(const Macierz& copy) const;

    // Przeci¹¿enie operatora dodawania macierzy
    Macierz& operator+=(const Macierz& copy);

    // Przeci¹¿enie operatora mno¿enia macierzy
    Macierz& operator*=(const Macierz& copy);

    // Przeci¹¿enie operatora mno¿enia macierzy przez skalar
    Macierz& operator*=(const double x);

    // PrzyjaŸñ dla funkcji wypisuj¹cej macierz
    friend std::ostream& operator<<(std::ostream& s, const Macierz& m);

    // Metoda ustawiaj¹ca wartoœæ elementu macierzy
    void set(int i, int j, double x);

    // Metoda pobieraj¹ca wartoœæ elementu macierzy
    double get(int i, int j) const;

    // Metoda transponuj¹ca macierz
    void transpozycja();
};

#endif // MACIERZ