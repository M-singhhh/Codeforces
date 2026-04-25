#include <iostream>
#include <cmath>
using namespace std;
//logic 
//using the manhatan distance formula to calculate the distance going along only the axes 
//we will not be using euclidian distance formula cause it calculates the shortest distance bw two points which is not what we are talking about when we say swaping the matrix values 
int main() {
    int val;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> val;
            if (val == 1) {
                // Center is (2,2) in 0-indexed world
                cout << abs(i - 2) + abs(j - 2) << endl;
                return 0; // Exit early once found
            }
        }
    }
    return 0;
}
