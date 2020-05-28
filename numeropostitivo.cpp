#include "iostream"
using namespace std;

int main(void)
{
    int n;
     cout <<endl;

     cout << "Verificar si el numero es positivo, negativo o cero" <<endl <<endl;

     cout << "Ingresar numero: ";
     cin >> n;

     if(n<0){
         cout << "El numero es negativo" <<endl;
     }

     else if (n>0){
         cout << "El numero es positivo" <<endl;
     }

     else {
         cout << "El numero es cero" <<endl;
     }

     return 0;
}