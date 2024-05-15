#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;

public:
    // Конструктор за замовчуванням
    Fraction() : numerator(0), denominator(1) {}

    // Конструктор з параметрами
    Fraction(int num, int den) : numerator(num), denominator(den) {
        if (den == 0) {
            std::cout << "Помилка: знаменник не може бути нулем.\n";
            exit(1);
        }
    }

    // Конструктор копії
    Fraction(const Fraction& f) : numerator(f.numerator), denominator(f.denominator) {}

    // Операція присвоювання
    Fraction& operator=(const Fraction& f) {
        if (this != &f) {
            numerator = f.numerator;
            denominator = f.denominator;
        }
        return *this;
    }

    // Операція додавання
    Fraction operator+(const Fraction& f) const {
        return Fraction(numerator * f.denominator + f.numerator * denominator, denominator * f.denominator);
    }

    // Операція ділення
    Fraction operator/(const Fraction& f) const {
        return Fraction(numerator * f.denominator, denominator * f.numerator);
    }

    // Операція інкременту
    Fraction& operator++() {
        numerator += denominator;
        return *this;
    }

    // Операція декременту
    Fraction& operator--() {
        numerator -= denominator;
        return *this;
    }

    // Операція порівняння
    bool operator==(const Fraction& f) const {
        return numerator * f.denominator == f.numerator * denominator;
    }

    // Виведення дробу
    void print() const {
        std::cout << numerator << "/" << denominator << "\n";
    }
};
