#include <iostream>
using namespace std;

class Distance {
private:
    int km, m, cm; // Kilometers, Meters, Centimeters

public:
    // Input distance values
    void setDist(int k, int me, int c) {
        km = k;
        m = me;
        cm = c;

        // Handle overflow
        if (cm >= 100) {
            m += cm / 100;
            cm %= 100;
        }
        if (m >= 1000) {
            km += m / 1000;
            m %= 1000;
        }
    }

    // Display distance
    void showDist() const {
        cout << km << " km, " << m << " m, " << cm << " cm" << endl;
    }

    // Add two distances
    Distance addDist(const Distance& d) const {
        Distance res;
        res.km = km + d.km;
        res.m = m + d.m;
        res.cm = cm + d.cm;

        // Handle overflow
        if (res.cm >= 100) {
            res.m += res.cm / 100;
            res.cm %= 100;
        }
        if (res.m >= 1000) {
            res.km += res.m / 1000;
            res.m %= 1000;
        }
        return res;
    }
};

int main() {
    int n;
    cout << "Enter number of distances: ";
    cin >> n;

    Distance dArr[n];

    // Input distances
    for (int i = 0; i < n; i++) {
        int k, m, c;
        cout << "Enter distance " << i + 1 << " (km m cm): ";
        cin >> k >> m >> c;
        dArr[i].setDist(k, m, c);
    }

    // Display distances
    cout << "\nDistances are:\n";
    for (int i = 0; i < n; i++) {
        cout << "Distance " << i + 1 << ": ";
        dArr[i].showDist();
    }

    // Add two distances
    int idx1, idx2;
    cout << "\nEnter indices of distances to add (1 to " << n << "): ";
    cin >> idx1 >> idx2;

    if (idx1 >= 1 && idx1 <= n && idx2 >= 1 && idx2 <= n) {
        Distance res = dArr[idx1 - 1].addDist(dArr[idx2 - 1]);
        cout << "Resulting Distance: ";
        res.showDist();
    } else {
        cout << "Invalid indices!" << endl;
    }

    return 0;
}