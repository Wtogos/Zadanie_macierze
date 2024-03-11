#include "macierz.h"

// Konstruktor domy�lny
Macierz::Macierz() {
    data[0][0] = 0.0;
    data[0][1] = 0.0;
    data[1][0] = 0.0;
    data[1][1] = 0.0;
}

// Konstruktor kopiuj�cy
Macierz::Macierz(const Macierz& copy) {
    data[0][0] = copy.data[0][0];
    data[0][1] = copy.data[0][1];
    data[1][0] = copy.data[1][0];
    data[1][1] = copy.data[1][1];
}

// Destruktor
Macierz::~Macierz() {}

// Przeci��enie operatora mno�enia macierzy
Macierz Macierz::operator*(const Macierz& copy) const {
    Macierz result;
    result.data[0][0] = data[0][0] * copy.data[0][0] + data[0][1] * copy.data[1][0];
    result.data[0][1] = data[0][0] * copy.data[0][1] + data[0][1] * copy.data[1][1];
    result.data[1][0] = data[1][0] * copy.data[0][0] + data[1][1] * copy.data[1][0];
    result.data[1][1] = data[1][0] * copy.data[0][1] + data[1][1] * copy.data[1][1];
    return result;
}

// Przeci��enie operatora dodawania macierzy
Macierz Macierz::operator+(const Macierz& copy) const {
    Macierz result;
    result.data[0][0] = data[0][0] + copy.data[0][0];
    result.data[0][1] = data[0][1] + copy.data[0][1];
    result.data[1][0] = data[1][0] + copy.data[1][0];
    result.data[1][1] = data[1][1] + copy.data[1][1];
    return result;
}

// Przeci��enie operatora mno�enia macierzy przez skalar
Macierz Macierz::operator*(const double x) const {
    Macierz result;
    result.data[0][0] = data[0][0] * x;
    result.data[0][1] = data[0][1] * x;
    result.data[1][0] = data[1][0] * x;
    result.data[1][1] = data[1][1] * x;
    return result;
}

// Przeci��enie operatora przypisania
Macierz& Macierz::operator=(const Macierz& copy) {
    if (this != &copy) {
        data[0][0] = copy.data[0][0];
        data[0][1] = copy.data[0][1];
        data[1][0] = copy.data[1][0];
        data[1][1] = copy.data[1][1];
    }
    return *this;
}

// Przeci��enie operatora por�wnania
bool Macierz::operator==(const Macierz& copy) const {
    return (data[0][0] == copy.data[0][0] &&
        data[0][1] == copy.data[0][1] &&
        data[1][0] == copy.data[1][0] &&
        data[1][1] == copy.data[1][1]);
}

// Przeci��enie operatora dodawania macierzy
Macierz& Macierz::operator+=(const Macierz& copy) {
    data[0][0] += copy.data[0][0];
    data[0][1] += copy.data[0][1];
    data[1][0] += copy.data[1][0];
    data[1][1] += copy.data[1][1];
    return *this;
}

// Przeci��enie operatora mno�enia macierzy
Macierz& Macierz::operator*=(const Macierz& copy) {
    Macierz result = *this * copy;
    *this = result;
    return *this;
}

// Przeci��enie operatora mno�enia macierzy przez skalar
Macierz& Macierz::operator*=(const double x) {
    data[0][0] *= x;
    data[0][1] *= x;
    data[1][0] *= x;
    data[1][1] *= x;
    return *this;
}

// Przyja�� dla funkcji wypisuj�cej macierz
std::ostream& operator<<(std::ostream& s, const Macierz& m) {
    s << "[ " << m.data[0][0] << " " << m.data[0][1] << " ]" << std::endl;
    s << "[ " << m.data[1][0] << " " << m.data[1][1] << " ]" << std::endl;
    return s;
}

// Metoda ustawiaj�ca warto�� elementu macierzy
void Macierz::set(int i, int j, double x) {
    data[i][j] = x;
}

// Metoda pobieraj�ca warto�� elementu macierzy
double Macierz::get(int i, int j) const {
    return data[i][j];
}

// Metoda transponuj�ca macierz
void Macierz::transpozycja() {
    std::swap(data[0][1], data[1][0]);
}