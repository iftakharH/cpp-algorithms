#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<string> cars;   // Creating a stack of strings

    // Pushing elements onto the stack
    s.push("BMW");
    s.push("Mercedes");
    s.push("Audi");

    cout << "Top element: " << s.top() << endl;    // Finding the top of the stack

    s.pop();    // Removing the top element
    cout << "Top element after pop: " << s.top() << endl; // Top element after pop

    cout << "Stack size: " << s.size() << endl;    //size of the stack

    cout << "Is stack empty?:  " << (s.empty() ? "Yes" : "No") << endl; //checking if stack is empty

    return 0;
}