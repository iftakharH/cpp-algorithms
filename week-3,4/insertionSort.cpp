#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;

    cout << "Enter value of n: ";
    cin >>n;

    vector <int> arr;

    //input using push_back()
    int input;
    for (int i=0; i<n; i++)
    {
        cin>> input;
        arr.push_back (input);
    }


    //insertion sort logic
    for (int i = 1; i < n; ++i)
    {
        int key = arr[i];
        int j = i - 1;

        /* Move elements of arr[0..i-1], that are greater than key, to one position ahead
           of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }


    //printing sorted array
    cout << "sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}

