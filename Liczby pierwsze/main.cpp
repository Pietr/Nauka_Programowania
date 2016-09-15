#include <iostream>

using namespace std;
int liczba;
int main()
{
    cout << "Podaj liczbe: ";
    cin >> liczba;
    int p = 2;

    do
    {
        if(p == liczba)
        {
            cout << "Liczba jest liczba pierwsza";
            return 0;
        }else{
            if(liczba%p == 0)
            {
                cout << "Liczba nie jest liczba pierwsza";
                return 0;
            }else{
                p++;
            }
        }
    }while(1>0);
    return 0;
}
