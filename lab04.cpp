#include <iostream>

// Базовий клас "Transport"
class Transport {
public:
    virtual void drive() = 0; // чиста віртуальна функція
    virtual void brake() = 0; // чиста віртуальна функція
};

// Дочірній клас "Tap"
class Tap : public Transport {
private:
    int carrying_capacity; // атрибут
    int arrow; // атрибут
public:
    Tap(int в, int с) : carrying_capacity(в), arrow(с) {} // конструктор

    void drive() override {
        std::cout << "Tap is driving.\n";
    }

    void brake() override {
        std::cout << "Tap is braking.\n";
    }

    void up() {
        std::cout << "Tap is lifting up.\n";
    }

    void down() {
        std::cout << "Tap is going down.\n";
    }
};

int main() {
    Tap tap(10, 20);
    tap.drive();
    tap.brake();
    tap.up();
    tap.down();

    return 0;
}

