#include "iostream"
using namespace std;

int main(void)
{
    int n;
     cout <<endl;

     cout << "Verificar si el numero es par o impar" <<endl <<endl;

     cout << "Ingresar numero: ";
     cin >> n;

      if(n%2==0){
         cout<<"El numero es par" <<endl;
     }
     else{
         cout<<"El numero es impar" <<endl;
     }

     return 0;
}