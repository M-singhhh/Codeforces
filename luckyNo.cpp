#include <iostream>
#include <string>
using namespace std;

int main() {
    string number;
    cin >> number;
    int count = 0; // Use a counter instead of a flag
    
    for(int i = 0; i < number.length(); i++) {
        // If we find a lucky digit, increment the counter
        if(number[i] == '4' || number[i] == '7') {
            count++;
        }
    }

    // Check if the total count is a lucky number
    if(count == 4 || count == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}
