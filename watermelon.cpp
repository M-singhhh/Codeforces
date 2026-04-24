#include <iostream>
using namespace std;

//logic 
//if the number is even it will  always be devided by 2 and (number - 2) will alwyays also be always even so if weight is even means it can be 
//devided into even parts but there is one exception that is 2   


int main() {
    int w;
    cin >> w;
    // Check if w is even AND greater than 2
    if (w % 2 == 0 && w > 2) { 
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
