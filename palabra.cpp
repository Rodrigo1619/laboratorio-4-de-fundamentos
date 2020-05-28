#include "iostream"
#include "string.h"
#include "conio.h"

using namespace std;

int main (void)
{
    char palabra [50];
    int total=0;

    cout <<"Cantidad de letras en una palabra"<<endl;

    cout << "Ingrese la palabra: " <<endl; cin >> palabra;
    total = strlen(palabra);

    if (total == 10){
        cout << "El numero de letras es:" <<total<<endl;
        cout << "La palabra es par"<<endl;

    }
    else if (total <10 && total%2==0){
        cout <<"El numero de letras es menor a diez"<<endl;
        cout <<"El numero de letras es:"<<endl<<total<<endl;
        cout <<"La cantidad de letras es par"<<endl;

    }
    else if (total<10 && total%2!=0){
        cout <<"El numero de letras es menor a diez"<<endl;
        cout <<"El numero de letras es:"<<endl<<total<<endl;
        cout <<"La cantidad de letras es impar"<<endl;
    }
    else if (total>10 && total%2 ==0){
        cout <<"El numero de letras es mayor a diez"<<endl;
        cout <<"El numero de letras es:"<<endl<<total<<endl;
        cout <<"La cantidad de letras es par"<<endl;
    }
    else if(total>10 && total%2!=0){
        cout <<"El numero de letras es mayor a diez"<<endl;
        cout <<"El numero de letras es:"<<endl<<total<<endl;
    }

    return 0;


    
}