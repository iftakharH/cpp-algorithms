#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {2 , 4, 7, 9, 10, 13, 20};

    int target = 13;
    int left = 0, right = arr.size() - 1;
    int result = -1;

    while (left <= right){
        int mid = left + (right- left) / 2;

        if (arr[mid] == target){
            result = mid;
            break;
        } else if (arr[mid] < target){
            left = mid +1;
        }
        else {
            right = mid - 1;
        }
    }

    if (result != -1)
        cout << target  << endl << "Found at index";
    else
        cout << "Element not found" << endl;
}
