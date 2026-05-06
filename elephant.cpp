#include <iostream>
#include <string>
using namespace std ; 

//logic - initilized i with total distance then checked if distmnce is greater then 5 and total distance  with 5 cause above that we have only that option then when the distance is left bellow 5 we checcked 
//we compared if it is equal to 1 2 3 or 4 then substracted particular number and did it until we get 0 and increased count for each operation 

int main(){
    int number ; 
    cin >> number ;
    int count = 0 ; 
    
    for(int i = number ; i > 0;){
        if(number>=5) {
            i = i -5 ;
            count ++ ;
        }
        else {
            for(int j = 1 ; j < 5 ; j++){
                if(i == j ){
                  i = i - j ; 
                  count ++ ; 
                } 
            }
        }
        
    }
    cout << count ; 
    return 0 ; 
}