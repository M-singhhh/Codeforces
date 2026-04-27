#include <iostream>
#include <cmath>
using namespace std ; 

int main(){
    long long n ; 
    long long m ; 
    long long a ; 
    cin >> n >> m >> a ;
    
    long long stones_n = ceil((double)n/a);//we will se how many stones are required to cover 1 side of of the rectangle 
    long long stones_m = ceil((double)m/a);//then we will filll the extra gap left for the another side 
    
    long long total = stones_n * stones_m ; //multiplication of both will give us the total the number of tiles cause by multipling we  are just filling the grid between two sides 
    
    cout << total ; 
    return 0 ; 
}


// this works like cross product of vectors similar to how product of two vectors give us the area constrained by them 
//similarly we took two axis as vectors and multiplied both of them to form the square grid and get the total number of tiles to form that grid structure 