#include <iostream>
using namespace std;

enum Day {
    SUNDAY=1, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
};
int main ()
{
    int dayNumber;
    cout << "Enter a day number (1-7):" ;
    cin>>dayNumber;

    Day day = static_cast<Day>(dayNumber);
    switch (day)
    {
        case SUNDAY:
        cout<< "The day is Sunday."<<endl;
        break;
        case MONDAY:
        cout<< "The day is Monday."<<endl;
        break;
        case TUESDAY:
        cout<< "The day is Tuesday."<<endl;
        break;
        case WEDNESDAY:
        cout<<"The day is Wednesday."<<endl;
        break;
        case THURSDAY:
        cout<<"The day is Thursday."<<endl;
        break;
        case FRIDAY:
        cout<<"The day is Friday."<<endl;
        break;
        case SATURDAY:
        cout<<"The day is Saturday."<<endl;
        break;
        default:
        cout<<"Invalid day number!."<<endl;
    }
        return 0;
}

// #include <iostream>
// using namespace std;

// enum Day { SUNDAY = 1, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

// int main() {
//     int dayNumber;
//     cout << "Enter a day number (1-7): ";
//     cin >> dayNumber;

//     switch (dayNumber) {
//         case SUNDAY: cout << "The day is Sunday.\n"; break;
//         case MONDAY: cout << "The day is Monday.\n"; break;
//         case TUESDAY: cout << "The day is Tuesday.\n"; break;
//         case WEDNESDAY: cout << "The day is Wednesday.\n"; break;
//         case THURSDAY: cout << "The day is Thursday.\n"; break;
//         case FRIDAY: cout << "The day is Friday.\n"; break;
//         case SATURDAY: cout << "The day is Saturday.\n"; break;
//         default: cout << "Invalid day number!\n";
//     }

//     return 0;
// }
