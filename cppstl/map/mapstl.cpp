#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    map<string, string> myMap;
    myMap.insert(pair<string,string>("banana","banana"));
    myMap.insert(pair<string,string>("orange","laranja"));
    myMap.insert(pair<string,string>("apple","maçã"));
    myMap.insert(pair<string,string>("strawberry","morango"));

    myMap["banana"] = "Banana"; // Use key banana to change banana to Banana
    myMap.erase("banana");

    //myMap.clear();

    cout << "size: " << myMap.size() << endl;

    for(auto pair: myMap){
        cout << pair.first << " -  " << pair.second << endl;
    }
}