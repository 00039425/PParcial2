#include <iostream>

using namespace std;

int main(){
    int n[5] = {1, 2, 3, 4, 5}, par = 0, impar = 0;
    
    for(int i = 0; i <5; i++){
        
        if(n[i] % 2 == 0){
            par++;
        }else{
            impar++;
        }
    }
    
    cout << "Numeros pares: " << par << endl;
    cout << "Numeros impares: " << impar << endl;
    
    
    
}