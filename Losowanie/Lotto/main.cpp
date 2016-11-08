#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;
int number[5];

int main()
{
    cout << "Za chwile nastapi zwolnienie blokady..." << endl;
    Sleep(2000);
    cout << "Wylosowane liczby to: ";
    srand(time(NULL));
    for(int i=0; i<=5; i++)
    {
        Sleep(1000);
        number[i] = rand()%49+1;
        while((number[i]==number[i-1])||(number[i]==number[i-2])||(number[i]==number[i-3])||(number[i]==number[i-4])||(number[i]==number[i-5]))
            number[i] = rand()%49+1;
        cout << number[i] << " ";
    }
    return 0;
}
