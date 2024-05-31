#include <iostream>
#include <list>

using namespace std;

void displayRatings(list<int>& playerRatings){
    for (list<int>::iterator it = playerRatings.begin(); it != playerRatings.end(); it++) {
        cout << "Player rating: " << *it << endl;
    }
}

int main(){
    list<int> players = {8, 2, 7, 3, 6, 10, 6, 4, 5, 1, 9};
    list<int> beginners;
    list<int> pros;

    for(list<int>::iterator it = players.begin(); it != players.end(); it++){
        int rating = *it;
        if (rating > 5){
            pros.push_back(rating);
        }else{
            beginners.push_back(rating);
        }
    }

    cout << "Beginners" << endl;
    displayRatings(beginners);

    cout << "Pros" << endl;
    displayRatings(pros);

    return 0;
}