#include <iostream>

using namespace std;

int main()
{
    int tarifa;
    float precio = 0.50;
    
    cout << "Ingrese la cantidad de  kWh de su recibo" << endl;
    cin >> tarifa;
    
    float total = tarifa * precio;
    
    if(tarifa < 0){
        cout << "Ingrese una cantidad valida" << endl;
    }
    else{
        if(tarifa < 100){
        cout << "Tarifa baja. Su total a pagar es: " << total << endl;
        }else if (tarifa >= 100 && tarifa <= 200){
        cout << "Tarifa media. Su total a pagar es: " << total << endl;
        }else{
         cout << "Tarifa alta. Su total a pagar es: " << total << endl;
        }
    }
    
    
    
    
}