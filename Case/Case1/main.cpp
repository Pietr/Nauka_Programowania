#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <stdio.h>

using namespace std;
float liczba[2];
char klawisz;

int main()
{
    cout << "Witaj w kalulatorze!" << endl << endl;

    while(true)
    {
        cout << "Wpisz pierwsza liczbe: ";
        cin >> liczba[0];
        cout << "Wpisz druga liczbe: ";
        cin >> liczba[1];

        cout << endl << "~~~~~~~~~~~~~~" << endl;
        cout << "1. Dodawanie" << endl;
        cout << "2. Odejmowanie" << endl;
        cout << "3. Mnozenie" << endl;
        cout << "4. Dzielenie" << endl;
        cout << "5. Wyjdz" << endl << endl;
        cout << endl;
        klawisz = getch();

        switch(klawisz)
        {
        case '1':
            {
                cout << "Suma: " << liczba[0]+liczba[1];
            }
        break;
        case '2':
            {
                cout << "Roznica: " << liczba[0]-liczba[1];
            }
        break;
        case '3':
            {
                cout << "Iloczyn: " << liczba[0]*liczba[1];
            }
        break;
        case '4':
            {
                if((liczba[0] == 0)||(liczba[1] == 0))
                    cout << "Nie dzielimy przez zero!";
                else
                    cout << "Iloraz: " << liczba[0]/liczba[1];
            }
        break;
        case '5':
            exit(0);
        break;
        default: cout << "Niepoprane rekordy!";
        }

        cout << endl << endl << "Wcisnij dowolny klawisz...";
        getch();
        system("cls");
    }

    return 0;
}
