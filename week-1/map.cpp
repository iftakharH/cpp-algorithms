#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, string> cars = {{"BMW", "X5"}, {"Honda", "Civic"}, {"Nissan", "Gt-R"}};

    // Inserting a new key-value pair
    cars["Toyota"] = "Corolla";

    //Inserting using insert() method
    cars.insert({"Ford", "Mustang"});
    //after insertion printing all elements
    cout << "Cars in the map:" << endl;
    for (auto car : cars) {
        cout << car.first << ": " << car.second << endl;
    } cout << endl;

    // accessing values
    cout << "Accessing Ford Model: " << cars["Ford"] << endl;

    //accessing values using at() method
    cout << "Accessing Honda Model: " << cars.at("Honda") << endl;

    //changing values
    cars["Nissan"] = "370Z";
    cout << "Updated Nissan Model: " << cars["Nissan"] << endl;

    //elements equal keys are not allowed, it will overwrite the previous value
    //values can be equal, but keys must be unique.
    cout << endl;

    // remove elements using erase() method
    cars.erase("Ford");
    cout << "After removing Ford, cars:" << endl;
    for (const auto& pair : cars) {
        cout << pair.first << ": " << pair.second << endl;
    }cout << endl;

    //size of the map
    cout << "Size of cars map: " << cars.size() << endl;

    //check if map is empty
    cout << "Is cars map empty? " << (cars.empty() ? "Yes" : "No") << endl;


}