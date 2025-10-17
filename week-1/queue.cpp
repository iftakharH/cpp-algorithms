#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue <string> cars;

    // Adding elements to the queue
    cars.push("BMW");
    cars.push("Mercedes");
    cars.push("Audi");

    // Displaying the front element
    cout << "Front car: " << cars.front() << endl;

    //Displaying the back element
    cout << "Back car: " << cars.back() <<  endl;

    // Removing the front element
    cars.pop();
    cout << "Front car after pop: " << cars.front() << endl;

    // Size of the queue
    cout << "Size of the queue: " << cars.size() << endl;

    //Queue is empty or not
    cout << "Is the queue empty? " << (cars.empty() ? "Yes" : "No") << endl;

    return 0;

}