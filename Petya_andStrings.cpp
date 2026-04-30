#include <iostream>
#include <string>
using namespace std ; 

//there is just diffrence of 32 bw upper and lower case letter 

void lower(string *str){
    for(int i = 0 ; i < str->length() ; i++){//* and . use -> 
        if((*str)[i]>='A' && (*str)[i]<= 'Z'){ //wrap pointer and string in parenthesis 
            (*str)[i] = (*str)[i] + 32 ;
        }
    }
} 

int main(){
    string word1  ;
    string word2  ;
    cin >> word1 >> word2 ; 
    lower(&word1);
    lower(&word2);
    
    
    if (word1 > word2) cout << 1 ; 
    else if (word1 == word2) cout << 0 ;
    else cout << -1 ;
    return 0 ; 
}