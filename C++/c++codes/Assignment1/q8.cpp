#include <iostream>
#include <cmath> 
using namespace std;


double power(double m, int n = 2) {
    return pow(m, n); 
}

int main() {
    double m;
    int n;

   
    cout << "Enter the base (m): ";
    cin >> m;

    
    cout << "Enter the exponent (n, default is 2): ";
    cin >> n;

    cout << m << " raised to the power " << n << " is: " << power(m, n) << endl;

    return 0;
}
