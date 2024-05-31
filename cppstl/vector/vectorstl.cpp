#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> numbers;
    numbers.push_back(0);

    for (int i = 1; i <= 10; ++i) {
        numbers.push_back(i);
    }

    auto it = numbers.begin();
    //cout << *(it + 5);

    // accessing values way 1
    for (int i = 0; i < 11; ++i) {
        //cout << numbers.at(i) << endl;
    }

    // accessing values way 2
    for (int number: numbers) {
        //cout << number << endl;
    }

    // accessing values way 3
    for (auto it = numbers.begin(); it != numbers.end(); it++) {
        // cout << it; can't
//        cout << *it << endl; // value of the iterator
//        cout << &it << endl; // the address of the iterator
//        cout << &(*it) << endl; // address of the value of the iterator
    }

    // Other functionalities
    cout << "Size: " << numbers.size() << endl;
    cout << "Max size: " << numbers.max_size() << endl;
    cout << "Capacity: " << numbers.capacity() << endl;
    numbers.resize(5);
    cout << "Size: " << numbers.size() << endl;
    if (numbers.empty())
        cout << "vector is empty" << endl;
    else
        cout << "vector is not empty" << endl;
    cout << "Element [0] is: " << numbers[0] << endl;
    cout << "Element at(0) is: " << numbers.at(0) << endl;
    cout << "Front: " << numbers.front() << endl;
    cout << "Back: " << numbers.back() << endl;
    numbers.clear();
    cout << "Size: " << numbers.size() << endl;

}