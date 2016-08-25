#include <iostream>
#include <time.h>
#include <windows.h>
#include <cstdlib>

using namespace std;
int liczba1, liczba2=0, liczba3=0, liczba4=0, liczba5=0, liczba6=0, ll=2;
int main()
{
    cout << "Za chwile nastapi zwolnienie blokady..." << endl;
    Sleep(2000);
    cout << "Wylosowane liczby to: ";
    srand(time(NULL));
    liczba1 = rand()%49+1;
    liczba2 = rand()%49+1;
    liczba3 = rand()%49+1;
    liczba4 = rand()%49+1;
    liczba5 = rand()%49+1;
    liczba6 = rand()%49+1;
    Sleep(2000);
    cout << liczba1 << ", ";
    Sleep(1000);
    while(liczba1 == liczba2)
    {
        liczba2 = rand()%49+1;
    }
    cout << liczba2 << ", ";
    Sleep(1000);
    while((liczba1 == liczba3)||(liczba2 == liczba3))
    {
        liczba3 = rand()%49+1;
    }
    cout << liczba3 << ", ";
    Sleep(1000);
    while((liczba1 == liczba4)||(liczba2 == liczba4)||(liczba3 == liczba4))
    {
        liczba4 = rand()%49+1;
    }
    cout << liczba4 << ", ";
    Sleep(1000);
    while((liczba1 == liczba5)||(liczba2 == liczba5)||(liczba3 == liczba5)||(liczba4 == liczba5))
    {
        liczba5 = rand()%49+1;
    }
    cout << liczba5 << ", ";
    Sleep(1000);
    while((liczba1 == liczba6)||(liczba2 == liczba6)||(liczba3 == liczba6)||(liczba4 == liczba6)||(liczba5 == liczba6))
    {
        liczba6 = rand()%49+1;
    }
    cout << liczba6 << endl;
    //cout << liczba1 << ", " << liczba2 << ", " << liczba3 << ", " << liczba4 << ", " << liczba5 << ", " << liczba6 << endl;
    system("pause");
    return 0;
}
