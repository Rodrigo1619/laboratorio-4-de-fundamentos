#include "iostream"
#include "string"

using namespace std;

int main (void)
{
    string palabra;
    cout << "Ingresar una palabra: " <<endl;
    cin >> palabra;

    if (palabra.front() == palabra.back()){
        cout << "La letra del principio y del final es la misma" <<endl;

    }
    else{
        cout << "La letra del principio y del final no son las mismas" <<endl;
    }

    return 0;
}