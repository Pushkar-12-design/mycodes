#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159265

class Polar {
    double radius;
    double angle; 

public:
    Polar(double r = 0.0, double a = 0.0) {
        radius = r;
        angle = a;
    }

   
    void display() const {
        cout << "Radius: " << radius << ", Angle: " << angle << " degrees" << endl;
    }

   
    Polar operator+(const Polar& p) const {
       
        double x1 = radius * cos(angle * PI / 180);
        double y1 = radius * sin(angle * PI / 180);
        double x2 = p.radius * cos(p.angle * PI / 180);
        double y2 = p.radius * sin(p.angle * PI / 180);

        double x = x1 + x2;
        double y = y1 + y2;

       
        double r = sqrt(x * x + y * y);
        double a = atan2(y, x) * 180 / PI; 

        return Polar(r, a);
    }
};

int main() {
    Polar p1(5, 45);  
    Polar p2(5, 135); 

    Polar p3 = p1 + p2;

    cout << "First Point: ";
    p1.display();
    cout << "Second Point: ";
    p2.display();
    cout << "Resultant Point: ";
    p3.display();

    return 0;
}
