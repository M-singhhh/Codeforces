#include <iostream>
#include <string>
using namespace std ; 

int main(){
    int  no_opr ; 
    int x = 0 ;
    cin >> no_opr ;
    for(int i = 0 ; i < no_opr ; i++){
        string opr ; 
        cin >> opr; 
        if(opr[1] == '+') x++;
        else x-- ;
        
    }
    cout << x ; 
    return 0 ; 
}

//that was a easy problem we just looped the opr until it is required then we checked for second char if + then add 1 to 0 if - then substract 1 from 0 thats it 