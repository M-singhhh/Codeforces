// #include <iostream>
// #include <cmath>
// using namespace std ; 

// int main(){
//     int rows ; 
//     cin >> rows ; 
//     int matrix[rows][3];
//     int count , openion = 0 ;  
    
//     for(int i = 0 ; i < 3 ; i++){
//         for(int j =  0 ; j < rows ; j++){
//             cin >> matrix[i][j];
//             if(matrix[i][j] == 1 ){
//               openion++;
//             } 
            
//             if(openion >= 2 ) count ++ ; 
//         }
//         openion = 0  ;
//     }
    
//     cout << count ; 
//     return 0 ; 
// }

//you dont need to use matrix just store take all the variables ak sath 


#include <iostream>
#include <cmath>
using namespace std ; 

int main(){
    int rows ; 
    cin >> rows ; 
    int count = 0; 
    for(int i = 0 ; i < rows ; i++){
        int tony , cap , thor ; 
        cin >> tony >> cap >> thor ; 
        int sum = tony + cap + thor ; 
        if(sum > 1 ) count ++ ; 
    }
    
    cout << count ; 
    return 0 ; 
}