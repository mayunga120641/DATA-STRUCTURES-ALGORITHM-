#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;

    stack<char> charStack;
    for (int i = 0; i < input.length(); i++) {
        charStack.push(input[i]);
	}
    while (!charStack.empty()) {
        cout << charStack.top();
        charStack.pop();
    }

    cout << endl;
    return 0;
}
