#include <iostream>
#include <string>
using namespace std ; 

//k,n,w , the cost of the first banana, initial number of dollars the soldier has and number of bananas he wants.
int total = 0 ; 
int main(){
    int k , n , w ; 
    cin >> k >> n >> w ; 
    
    for(int i =1 ; i <= w ; i++){
        total += k*i;
    }
    if (total <= n) cout << 0 ; 
    else cout << total - n ;
    return 0 ; 
}

//total is sum of intial + 2intial + 3initial ... so on 
//and amount of money required is just total -soldier have 