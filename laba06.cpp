// main.cpp
#include <iostream>
#include "Vector.h"

void printMenu() {
    std::cout << "1. Move vector\n";
    std::cout << "2. Wrap vector\n";
    std::cout << "3. Change vector size\n";
    std::cout << "4. Change vector color\n";
    std::cout << "5. Exit\n";
}

int main() {
    Vector v(1, 2, 3);
    int choice;
    double dx, dy, dz, angle, factor;
    int color;

    while (true) {
        printMenu();
        std::cin >> choice;
        switch (choice) {
        case 1:
            std::cout << "Enter dx, dy, dz: ";
            std::cin >> dx >> dy >> dz;
            v.move(dx, dy, dz);
            break;
        case 2:
            std::cout << "Enter angle: ";
            std::cin >> angle;
            v.rotate(angle);
            break;
        case 3:
            std::cout << "Lead scale factor lead colour unknown option: ";
            std::cin >> factor;
            v.resize(factor);
            break;
        case 4:
            std::cout << "¬вед≥ть кол≥р: ";
            std::cin >> color;
            v.changeColor(color);
            break;
        case 5:
            return 0;
        default:
            std::cout << "Unknown option\n";
        }
    }
}
