
#include <iostream>
#include <cstdlib>   // für rand(), srand()
#include <ctime>     // für time()
using namespace std;

int main()
{
    srand(time(0));

    cout << "Hallo, Wilkommen zu dem Speil Zahlenraten!\n";
    cout << "Tippe eine Zahl von 1-3 um den Schwierigskeitsgrad, des Spieles, fest zu legen. \n";
    cout << "1 = Zahlenraum von 1 - 25\n";
    cout << "2 = Zahlenraum von 1 - 100\n";
    cout << "3 = Zahlenraum von 1 - 1000\n";
    cout << "Gebe deine Zahl ein!\n\n";

    int wahl = 0;
    bool gueltig = false;

    while (!gueltig) {

        cin >> wahl;

        if (wahl == 1 || wahl == 2 || wahl == 3) {
            gueltig = true;
        }
        else
        {
            cout << "Ungültige Zahl, versuche es noch einmal!\n";
        }
    }
        int computerzahl;
        if (wahl == 1) {
                computerzahl = rand() % 25 + 1; 
        }
        else if (wahl == 2) {
            computerzahl = rand() % 100 + 1;
        }
        else {
            computerzahl = rand() % 1000 + 1;
        }

        cout << "gebe deine Zahl ein\n";

        int guess = -1;

        while (true) {
            cin >> guess;
            if (computerzahl == guess) {
                cout << "Gut gemacht, das war die Richtige Zahl!\n";
                break;
            }

            else if (guess < computerzahl) {
                cout << "Die Zahl ist zu niedrig.\n";
            }
            else if (guess > computerzahl){
                cout << "Die Zahl ist zu hoch!\n";
            }
        }
        


    




}

