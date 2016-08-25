#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;
int liczba, pliczba, prob=0;

int main()
{
    cout << "Pomyslalem sobie o pewnej liczbie z zakresu... Od 0 do 100. Jaka to liczba?" << endl;
    srand(time(NULL));
    pliczba = rand()%99+1;
    while(liczba!=pliczba)
    {
        cout << endl << "Liczba: ";
        cin >> liczba;
        prob++;
        if(liczba == pliczba)
            cout << "Gratulacje! Wygrales za " << prob << " razem." << endl;
        else if (liczba > pliczba)
            cout << "Troche za duzo.";
        else if (liczba < pliczba)
            cout << "Troche za malo.";
    }
    system("pause");
    return 0;
}
