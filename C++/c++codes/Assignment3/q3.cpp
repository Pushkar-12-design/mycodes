#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:

    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }


    static Complex addcomplex(Complex a, Complex b) {
        return Complex(a.real + b.real, a.imag + b.imag);
    }

  
    void display(string name) {
        cout << name << " = " << real << " +j " << imag << endl;
    }
};

int main() {
    Complex A(3.12, 5.65); 
    Complex B(2.75, 1.21);  
    Complex C;              

    C = Complex::addcomplex(A, B);

    A.display("A");
    B.display("B");
    C.display("C");

    return 0;
}
