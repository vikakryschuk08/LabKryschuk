#include <iostream>
#include <cmath>
#include <complex>
using namespace std;

double complex_sum(double c1, double d1, double c2, double d2, double& real_part, double& imag_part, double& phase) {
    complex<double> z1(c1, d1), z2(c2, d2);
    complex<double> sum = z1 + z2;
    real_part = sum.real();
    imag_part = sum.imag();
    phase = arg(sum);
    return abs(sum);
}

int main() {
    double c1,d1, c2, d2;
    cout << "\nEnter an integer";
    cin >> c1;
    cout << "\nEnter an integer";
    cin >> c2;
    cout << "\nEnter an integer";
    cin >> d1;
    cout << "\nEnter an integer";
    cin >> d2;

    double real_part, imag_part, phase;
    double modulus = complex_sum(c1, d1, c2, d2, real_part, imag_part, phase);
    cout << "Amount: " << real_part << " + " << imag_part << "i\n";
    cout << "Module: " << modulus << "\n";
    cout << "Phase: " << phase << " radian\n";
    return 0;
}
