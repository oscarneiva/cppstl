#include <iostream>
#include <queue>

using namespace std;

void displayQueueData(queue<int> numbers);

int main(){
    queue<int> numbers;
    numbers.push(1); // adds
    numbers.push(2);
    numbers.push(3);
    numbers.pop();

    displayQueueData(numbers);
}

void displayQueueData(queue<int> numbers){
    while(!numbers.empty()){
        cout << numbers.front() << endl;
        numbers.pop();
    }

    if (numbers.empty()) cout << "queue is empty" << endl;
    else cout << "queue is not empty" << endl;
    cout << "stack size is " << numbers.size() << endl;
}