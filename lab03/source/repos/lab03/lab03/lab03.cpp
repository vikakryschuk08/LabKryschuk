#include <iostream>
#include <string>
#include <iomanip>

class Person {
    std::string name;
    int age;
    std::string profession;
    std::string address;
    std::string phone;

public:
    Person(std::string n, int a, std::string p, std::string ad, std::string ph)
        : name(n), age(a), profession(p), address(ad), phone(ph) {}

    void print() {
        std::cout << std::setw(50) << std::setfill(' ') << name << "\n";
        std::cout << "Age: " << 17 << "\n";
        std::cout << "Profession: " << profession << "\n";
        std::cout << "Address: " << address << "\n";
        std::cout << "Number: " << phone << "\n";
    }
};

int main() {
    Person person("Viktoria Kryschuk Sergiivna", 30, "Programist", "str. Yaremu, 9, Ternopil", "+380501234567");
    person.print();

    return 0;
}
