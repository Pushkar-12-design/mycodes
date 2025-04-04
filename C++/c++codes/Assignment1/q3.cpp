#include <iostream>
using namespace std;

int* createVector(int M) {
   
    int* vector = new int[M];
    return vector;
}

int main() {
    int size;
    cout << "Enter the size of the vector: ";
    cin >> size;

   
    int* myVector = createVector(size);


    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> myVector[i];
    }

    cout << "The vector elements are: ";
    for (int i = 0; i < size; i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    delete[] myVector;

    return 0;
}
