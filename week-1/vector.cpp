#include <iostream>
#include <vector>

using namespace std;

    // Array example
    // int arr[3] = {1, 2, 3};
    // for (int i = 0; i < 3; i++) cout << arr[i] << " ";

    // Vector example
    // vector<int> vec = {1, 2, 3};
    // vec.push_back(4);
    // for (int i = 0; i < vec.size(); i++) cout << vec[i] << " ";

int main() {
    vector<string> cars = {"Mercedes", "BMW", "Honda", "Mazda"};   //create a vector
    
    cout << cars[0] << endl;        //access an element
    
    cout << cars.front() << endl;   // Get the first element
    
    cout << cars.back() << endl;    // Get the last element
    
    cout << cars.at(2) << endl;     //access an element
    
    cars.push_back("Toyota");       //add an element to the end and print
        for (string car : cars) {
                cout << car << " ";
            }
        cout << endl;
    
    cars.pop_back();               //remove the last element and print
        for (string car : cars) {
                cout << car << " ";
            }
        cout << endl;
    
    cout << "Size: " << cars.size() << endl;    //get the size of the vector
    
    cout << "Not Empty(0)/Empty(1): " << cars.empty() << endl;   //check if the vector is empty
    
    cars.clear();                   //remove all elements from the vector
    for (int i = 0; i < cars.size(); i++) 
        cout << cars[i] << " ";
    
    return 0;
}