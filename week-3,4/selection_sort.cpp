#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;

    cout << "Enter value of n: ";
    cin >>n;

    vector <int> arr;

    int input;
    for (int i=0; i<n; i++)
    {
        cin>> input;
        arr.push_back (input);
    }



    //selection sort logic
    for (int i = 0; i<n; i++)
    {
        int minIndex = i;
        for(int j = i+1; j<n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;   //finding smallest element from the unsorted part
            }
        }
        //swap smallest found element with first unsorted element
        int temp = arr [i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    cout << "sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
