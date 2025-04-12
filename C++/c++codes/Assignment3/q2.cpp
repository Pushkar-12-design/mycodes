#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title, author, publisher;
    float price;

  
    Book(string t = "", string a = "", string p = "", float pr = 0) {
        title = t;
        author = a;
        publisher = p;
        price = pr;
    }

 
    bool match(string t, string a) {
        return (title == t && author == a);
    }

    
    void show() {
        cout << "Title: " << title << "\nAuthor: " << author
             << "\nPublisher: " << publisher << "\nPrice: Rs. " << price << endl;
    }
};

int main() {
  
    Book books[] = {
        Book("C++", "Bjarne", "Pearson", 500),
        Book("Python", "Eric", "No Starch", 700),
        Book("DSA", "Lipschutz", "McGraw", 600)
    };

    string t, a;
    cout << "Enter title: ";
    getline(cin, t);
    cout << "Enter author: ";
    getline(cin, a);

    bool found = false;
    for (Book b : books) {
        if (b.match(t, a)) {
            cout << "\nBook Found:\n";
            b.show();
            found = true;
            break;
        }
    }

    if (!found)
        cout << "\nBook not available.\n";

    return 0;
}
