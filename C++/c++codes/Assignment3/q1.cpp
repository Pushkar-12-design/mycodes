#include <iostream>
#include <cstring>
using namespace std;

class String {
    char *str;
public:
    String() { 
        str = new char[1];
        str[0] = '\0';
    }

    String(const char* s) { 
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    String(const String& s) { 
        str = new char[strlen(s.str) + 1];
        strcpy(str, s.str);
    }

    String& operator=(const String& s) { 
        if (this != &s) {
            delete[] str;
            str = new char[strlen(s.str) + 1];
            strcpy(str, s.str);
        }
        return *this;
    }

    String concat(const String& s) { 
        char* temp = new char[strlen(str) + strlen(s.str) + 1];
        strcpy(temp, str);
        strcat(temp, s.str);
        String result(temp);
        delete[] temp;
        return result;
    }

    void display() { cout << str << endl; } 

    ~String() { delete[] str; } 
};

int main() {
    String s1;                      
    String s2("Well done!");        
    String s3("You did it. ");
    String s4 = s3.concat(s2);   
    String s5; s5 = s4;             
    cout << "s1: "; s1.display();
    cout << "s2: "; s2.display();
    cout << "s4: "; s4.display();
    cout << "s5: "; s5.display();

    return 0;
}
