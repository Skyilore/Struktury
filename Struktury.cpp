#include <iostream>
#include <string>
using namespace std;

struct samochód
{
    string model;
    string wlasciciel;
    int km;
    int rocznik;
};

int main()
{
    const int ilosc = 3;
    samochód samochody[ilosc];

    for (int i = 0; i < ilosc; i++)
    {
        cout << "podaj model: ";
        getline(cin, samochody[i].model);
        cout << "podaj wlasciciela: ";
        getline(cin, samochody[i].wlasciciel);
        cout << "podaj przejechane kilometry: ";
        cin >> samochody[i].km;
        cout << "podaj rocznik: ";
        cin >> samochody[i].rocznik;
        cin.ignore();
    }
        
        for (int i = 0; i < ilosc; i++)
        {
            cout << samochody[i].model << ", " << samochody[i].wlasciciel << ", " << samochody[i].km << ", " << samochody[i].rocznik << endl;
        }

    

}

