#include <iostream>

using namespace std;

int main(){
    int num = 30, intentos = 0, numI = 0;
    
    do{
        
        if(intentos == 5){
            cout << "has fallado." << endl;
            break;
        }
        
        cout << "Adivine el numero del 1 al 50. Tienes 5 intentos: " ;
        cin >> numI;
        
        if(num == numI){
            cout << "Adivinaste el numero, felicidades" << endl;
            break;
        }else{
            cout << "Vuelve a intentarlo." << endl;
            intentos++;
            cout << "Intentos: " << intentos << endl;
        }
    }while(num != numI || intentos != 5);

    
}