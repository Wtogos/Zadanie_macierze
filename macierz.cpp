#include "macierz.h"

// Konstruktor domyślny
Macierz::Macierz() {
    data[0][0] = 0.0;
    data[0][1] = 0.0;
    data[1][0] = 0.0;
    data[1][1] = 0.0;
}

// Konstruktor kopiujący
Macierz::Macierz(const Macierz& copy) {
    data[0][0] = copy.data[0][0];
    data[0][1] = copy.data[0][1];
    data[1][0] = copy.data[1][0];
    data[1][1] = copy.data[1][1];
}

// Destruktor
Macierz::~Macierz() {}

// Przeciążenie operatora mnożenia macierzy
Macierz Macierz::operator*(const Macierz& copy) const {
    Macierz result;
    result.data[0][0] = data[0][0] * copy.data[0][0] + data[0][1] * copy.data[1][0];
    result.data[0][1] = data[0][0] * copy.data[0][1] + data[0][1] * copy.data[1][1];
    result.data[1][0] = data[1][0] * copy.data[0][0] + data[1][1] * copy.data[1][0];
    result.data[1][1] = data[1][0] * copy.data[0][1] + data[1][1] * copy.data[1][1];
    return result;
}

// Przeciążenie operatora dodawania macierzy
Macierz Macierz::operator+(const Macierz& copy) const {
    Macierz result;
    result.data[0][0] = data[0][0] + copy.data[0][0];
    result.data[0][1] = data[0][1] + copy.data[0][1];
    result.data[1][0] = data[1][0] + copy.data[1][0];
    result.data[1][1] = data[1][1] + copy.data[1][1];
    return result;
}

// Przeciążenie operatora mnożenia macierzy przez skalar
Macierz Macierz::operator*(const double x) const {
    Macierz result;
    result.data[0][0] = data[0][0] * x;
    result.data[0][1] = data[0][1] * x;
    result.data[1][0] = data[1][0] * x;
    result.data[1][1] = data[1][1] * x;
    return result;
}

// Przeciążenie operatora przypisania
Macierz& Macierz::operator=(const Macierz& copy) {
    if (this != &copy) {
        data[0][0] = copy.data[0][0];
        data[0][1] = copy.data[0][1];
        data[1][0] = copy.data[1][0];
        data[1][1] = copy.data[1][1];
    }
    return *this;
}

// Przeciążenie operatora porównania
bool Macierz::operator==(const Macierz& copy) const {
    return (data[0][0] == copy.data[0][0] &&
        data[0][1] == copy.data[0][1] &&
        data[1][0] == copy.data[1][0] &&
        data[1][1] == copy.data[1][1]);
}

// Przeciążenie operatora dodawania macierzy
Macierz& Macierz::operator+=(const Macierz& copy) {
    data[0][0] += copy.data[0][0];
    data[0][1] += copy.data[0][1];
    data[1][0] += copy.data[1][0];
    data[1][1] += copy.data[1][1];
    return *this;
}

// Przeciążenie operatora mnożenia macierzy
Macierz& Macierz::operator*=(const Macierz& copy) {
    Macierz result = *this * copy;
    *this = result;
    return *this;
}

// Przeciążenie operatora mnożenia macierzy przez skalar
Macierz& Macierz::operator*=(const double x) {
    data[0][0] *= x;
    data[0][1] *= x;
    data[1][0] *= x;
    data[1][1] *= x;
    return *this;
}

// Przyjaźń dla funkcji wypisującej macierz
std::ostream& operator<<(std::ostream& s, const Macierz& m) {
    s << "[ " << m.data[0][0] << " " << m.data[0][1] << " ]" << std::endl;
    s << "[ " << m.data[1][0] << " " << m.data[1][1] << " ]" << std::endl;
    return s;
}

// Metoda ustawiająca wartość elementu macierzy
void Macierz::set(int i, int j, double x) {
    data[i][j] = x;
}

// Metoda pobierająca wartość elementu macierzy
double Macierz::get(int i, int j) const {
    return data[i][j];
}

// Metoda transponująca macierz
void Macierz::transpozycja() {
    std::swap(data[0][1], data[1][0]);
}