#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> numbers;
    if (numbers.empty()) cout << "stack is empty" << endl;
    else cout << "stack is not empty" << endl;
}