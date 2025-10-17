#include <iostream>
#include <set>

using namespace std;

int main(){
    //initialize a set that sorts in ascending order by default
    set <string> cars = {"BMW", "Mercedes", "Audi"};
    //Print set elements
    for (string car : cars){
        cout << car << " ";
    }

    //sort in descending order
    set <string, greater<string>> cars2 = {"BMW", "Mercedes", "Audi"};
    cout << "\n";
    for (string car : cars2){
        cout << car << " ";
    }

    //Unique elements
    set <string> cars3 = {"BMW", "Mercedes", "Audi", "BMW", "Audi"};
    cout << "\n";
    for (string car : cars3){
        cout << car << " ";
    }

    //Insert elements
    cars.insert("Toyota");
    cout << "\n";
    for (string car : cars){
        cout << car << " ";
    }

    //Remove elements
    cars.erase("Audi");
    cout << "\n";
    for (string car : cars){
        cout << car << " ";
    }

    //size of set
    cout << "\nSize of set: " << cars.size() << "\n";

    //empty or not
    cout << "Is set empty? " << (cars.empty() ? "Yes" : "No") << "\n";

    //clear set
    cars.clear();

    return 0;
}