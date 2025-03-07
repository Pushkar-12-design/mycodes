#include <iostream>
#include <cmath> 
using namespace std;


double power(double m, int n = 2) {
    return pow(m, n); 
}


int power(int m, int n = 2) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= m; 
    }
    return result;
}

int main() {
    double m1;
    int m2, n1, n2;

    cout << "Enter a double value for m (to test the first power function): ";
    cin >> m1;
    cout << "Enter an int value for n (or press Enter for default): ";
    cin >> n1;
    cout << m1 << " raised to the power " << n1 << " is: " << power(m1, n1) << endl;

    
    cout << "Enter an int value for m (to test the second power function): ";
    cin >> m2;
    cout << "Enter an int value for n (or press Enter for default): ";
    cin >> n2;
    cout << m2 << " raised to the power " << n2 << " is: " << power(m2, n2) << endl;

    return 0;
}
