#include <iostream>
#include <cstring>
#include "Catalogue.h"

using namespace std;

int main()
{
    
    Catalog * catalog = new Catalog;
    int n = -1;

    while (n != 4)
    {
        cout << " / ___|__ _| |_ __ _| | ___   __ _ \n| |   / _` | __/ _` | |/ _ \ / _` |\n| |__| (_| | || (_| | | (_) | (_| |\n \\____\\__,_|\\__\\__,_|_|\\___/ \\__, |\n |___/ \n" << endl;
        cout << "================== LE MENU ==================" << endl;
        cout << "1 : Ajouter <depart> <arrivee> <transport>" << endl;
        cout << "2 : Afficher" << endl;
        cout << "3 : Rechercher <depart> <arrivee>" << endl;
        cout << "4 : Quitter" << endl;
        cout << "=============================================" << endl;

        cin >> n;

        switch (n)
        {
        case 1:

            // Si qqn arrive à faire ça en ligne je veux bien...
            int addTrajetCompose = 0;
            char * depart;
            char * arrivee;
            char * transport;
            char ** trajetCompose[100];
            getline(depart, cin);
            getline(arrivee, cin);
            getline(transport, cin);
            cin.ignore();
            trajetCompose[0] = depart;
            trajetCompose[1] = arrivee;
            trajetCompose[2] = transport;
            cout << "Voulez vous ajouter un trajet composé (1: oui | 0: non)" << endl;
            cin >> addTrajetCompose;
            int i = 0;

            while (addTrajetCompose)
            {
                i += 3;
                getline(depart, cin);
                getline(arrivee, cin);
                getline(transport, cin);
                trajetCompose[i] = depart;
                trajetCompose[i+1] = arrivee;
                trajetCompose[i+2] = transport;
                cout << "Voulez vous ajouter un autre trajet (1: oui | 0: non)" << endl;
                cin >> addTrajetCompose;
            }
            
            if ( i == 3 )
            {
                SimpleJourney newTrajet = SimpleJourney(trajetCompose[0], trajetCompose[1], trajetCompose[2]);
            }
            else
            {
                SimpleJourney newTrajet [ i/3 ];
                for (int j = 0; j < i; j+=3)
                {
                    newTrajet[i] = SimpleJourney(trajetCompose[j], trajetCompose[j+1], trajetCompose[j+2]);
                }
            }

            catalog->Add(newTrajet);

            break;
        
        case 2:

            catalog->Show();

            break;

        
        case 3:

            char * depart;
            char * arrivee;
            getline(depart, cin);
            getline(arrivee, cin);
            cin.ignore();

            catalog->Fetch(depart, arrivee);            
            
            break;

        case 4:

            cout << "Au revoir" << endl;
        }
    }

    return 0;

}
