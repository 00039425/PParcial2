#include <iostream>

using namespace std;

int main()
{
    int n = 0, resultado = 0;
    
    cout << "Ingrese cuantos numeros naturales quiere sumar" << endl;
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        
        resultado += i;
        
        
        
     
    }
    
    cout << "La suma de los primeros " << n << " numeros naturales es: " << resultado << endl;
}