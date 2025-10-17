#include <iostream>
#include <deque>

using namespace std;

int main(){
    deque <string> cars = {"BMW", "Audi", "Honda"};
    //Printing elements
    for (const auto& car : cars) {
        cout << car << " ";
    }

    //Size of the deque
    cout << "\nSize of deque: " << cars.size() << endl;

    //Accessing an element
    cout << "Third car: " << cars.at(2) << endl;

    //Front and back elements
    cout << "Front car: " << cars.front() << endl;
    cout << "Back car: " << cars.back() << endl;

    // Inserting elements at the back and front
    cars.push_back("Toyota");
    cars.push_front("Ford");
    cout << "After additions: ";
    for (const auto& car : cars) {
        cout << car << " ";
    }

    // Removing elements from the back and front
    cars.pop_back();
    cars.pop_front();
    cout << "\nAfter removing: ";
    for (const auto& car : cars) {
        cout << car << " ";
    }

    //Changing an element
    cars[1] = "Mercedes";
    cout << "\nAfter changing second car: ";
    for (const auto& car : cars) {
        cout << car << " ";
    }

    //Deque empty check
    cout << "\nIs deque empty? " << (cars.empty() ? "Yes" : "No") << endl;

    return 0;
}