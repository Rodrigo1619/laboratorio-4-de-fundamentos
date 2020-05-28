#include "iostream"
using namespace std;

int main(void)
{
    int n1, n2;

    cout <<endl;
    cout << "Verifique si un numero es divisible entre otro" <<endl <<endl;

    cout << "Digitar el numero mayor: " <<endl;
    cin >> n1;

    cout << "Digitar el numero menor: " <<endl;
    cin >>n2;

    if(n1%n2==0){
        cout << n2 << "es divisor de" <<n1 <<endl;
    }

    else{
        cout << n2 << "no es divisor de" <<n1 <<endl;
    }
    
    return 0;
}