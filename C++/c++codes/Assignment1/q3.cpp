#include <iostream>
using namespace std;

int* createVector(int size) {
  
    int* vector = new int[size];

   
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> vector[i];
    }

   
}

int main() {
    int size;

    cout << "Enter the size of the vector: ";
    cin >> size;

   
    int* myVector = createVector(size);

    cout << "The elements of the vector are:\n";
    for (int i = 0; i < size; i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;

 
    delete[] myVector;

    return 0;
}
