#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector <string> cars = {"BMW", "Mercedes", "Audi", "Toyota"};

    // Sort the vector in ascending order
    sort(cars.begin(), cars.end());

    //Sort the vector in descending order
    sort(cars.rbegin(), cars.rend());
}