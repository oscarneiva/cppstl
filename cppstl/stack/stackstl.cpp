#include <iostream>
#include <stack>

using namespace std;

void displayStackData(stack<int> numbers);

int main(){
    stack<int> numbers;
    numbers.push(1); // adds
    numbers.push(2);
    numbers.push(3);
    numbers.pop(); // removes

    displayStackData(numbers);
}

void displayStackData(stack<int> numbers){
    while(!numbers.empty()){
        cout << numbers.top() << endl;
        numbers.pop();
    }

    if (numbers.empty()) cout << "stack is empty" << endl;
    else cout << "stack is not empty" << endl;
    cout << "stack size is " << numbers.size() << endl;
}