#include <iostream>
#include <iterator>

using namespace std;

int main() {
    int cars[3] = {"BMW", "Mercedes","Audi"};

    // Using iterator to traverse the array
    for (auto it = begin(cars); it != end(cars); ++it) {
        cout << *it << " ";
    }

    //iterate in reverse order
    cout << "\nReverse order: ";
    for (auto it = end(cars) - 1; it != begin(cars) - 1; --it) {
        cout << *it << " ";
    }

    return 0;
    
    //for more info:
    //https://www.w3schools.com/cpp/cpp_iterators.asp
}