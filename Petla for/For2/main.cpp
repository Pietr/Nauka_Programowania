#include <iostream>

using namespace std;
string imie;
int ilosc;

int main()
{
    cout << "Twoje imie: ";
    cin >> imie;
    cout << "Ilosc powtorzen: ";
    cin >> ilosc;

    for (int i = 1; i<=ilosc; i++)
    {
        cout << i << ". " << imie << endl;
    }
    cout << "Zakonczono!";
    return 0;
}
