#include <iostream>
#include <windows.h>
#include <cstdlib>
//Ile dni musimy pracowac by zarobic pierwszy milion. :D
//Pomysl by Pietr
//Wykonanie by Pietr
//U¿ycie pêtli while

using namespace std;
int kasa=0;
int godziny;
int stawka;
int dni;

int main()
{
    cout << "Podaj ilosc dziennych godzin roboczych: ";
    cin >> godziny;
    cout << "Podaj swoja stawke godzinowa: ";
    cin >> stawka;
    while ( kasa < 1000000)
    {
        kasa = kasa+(godziny*stawka);
        dni++;
        cout << "Przepracowanych dni: " << dni << ", zarobionych pieniedzy: " << kasa << endl;
    }
    Sleep(10000);
    return 0;
}
