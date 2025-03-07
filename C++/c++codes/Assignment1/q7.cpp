#include <iostream>
using namespace std;


#define MAX_OF_THREE(a, b, c) ((a > b && a > c) ? a : (b > c ? b : c))

int main() {
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    cout << "The largest of the three numbers is: " << MAX_OF_THREE(num1, num2, num3) << endl;

    return 0;
}
