#include <iostream>
#include <string>
class Student {
protected:
    std::string surname;
    std::string name;
    std::string address;
    std::string phone;
    std::string birthdate;
    std::string email;  // Added email field

public:
    Student(std::string s, std::string n, std::string a, std::string p, std::string b, std::string e)
        : surname(s), name(n), address(a), phone(p), birthdate(b), email(e) {}  // Added email to the constructor

    void display() {
        std::cout << "Surname: " << surname << "\n"
            << "Name: " << name << "\n"
            << "Home Address: " << address << "\n"
            << "Phone: " << phone << "\n"
            << "Birthdate: " << birthdate << "\n"
            << "Email: " << email << std::endl;  // Display email
    }
};
class StudentJournal : public Student {
private:
    std::string course;
    std::string group;

public:
    StudentJournal(std::string s, std::string n, std::string a, std::string p, std::string b, std::string e, std::string c, std::string g)
        : Student(s, n, a, p, b, e), course(c), group(g) {}  // Added email to the constructor

    void display() {
        Student::display();
        std::cout << "Course: " << course << "\n"
            << "Group: " << group << std::endl;
    }
};

int main() {
    StudentJournal sj("Kryschuk", "Viktoria", "Ternopil, Yaremu 9, 85", "+380689718523", "10.08.2006", "vikakryschuk08@gmail.com", "1", "KN-11");
    sj.display();

    return 0;
}
