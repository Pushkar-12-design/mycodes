#include <iostream>
using namespace std;

class Staff {
protected:
    int code;
    string name;
public:
    void getData() {
        cout << "Code: "; cin >> code;
        cin.ignore();
        cout << "Name: "; getline(cin, name);
    }
    void showData() const {
        cout << "Code: " << code << "\nName: " << name << endl;
    }
};

class Teacher : public Staff {
    string subject, publication;
public:
    void getData() {
        Staff::getData();
        cout << "Subject: "; getline(cin, subject);
        cout << "Publication: "; getline(cin, publication);
    }
    void showData() const {
        Staff::showData();
        cout << "Subject: " << subject << "\nPublication: " << publication << endl;
    }
};

class Officer : public Staff {
    string grade;
public:
    void getData() {
        Staff::getData();
        cout << "Grade: "; getline(cin, grade);
    }
    void showData() const {
        Staff::showData();
        cout << "Grade: " << grade << endl;
    }
};

class Typist : public Staff {
protected:
    float speed;
public:
    void getData() {
        Staff::getData();
        cout << "Typing Speed (wpm): "; cin >> speed;
        cin.ignore();
    }
    void showData() const {
        Staff::showData();
        cout << "Speed: " << speed << " wpm" << endl;
    }
};

class Regular : public Typist {
public:
    void getData() { Typist::getData(); }
    void showData() const { Typist::showData(); }
};

class Casual : public Typist {
    float dailyWages;
public:
    void getData() {
        Typist::getData();
        cout << "Daily Wages: "; cin >> dailyWages;
        cin.ignore();
    }
    void showData() const {
        Typist::showData();
        cout << "Daily Wages: " << dailyWages << endl;
    }
};

int main() {
    Teacher t; Officer o; Regular r; Casual c;

    cout << "Enter Teacher Details:\n"; t.getData();
    cout << "Enter Officer Details:\n"; o.getData();
    cout << "Enter Regular Typist Details:\n"; r.getData();
    cout << "Enter Casual Typist Details:\n"; c.getData();

    cout << "\n--- Staff Information ---\n";
    cout << "\nTeacher:\n"; t.showData();
    cout << "\nOfficer:\n"; o.showData();
    cout << "\nRegular Typist:\n"; r.showData();
    cout << "\nCasual Typist:\n"; c.showData();

    return 0;
}
