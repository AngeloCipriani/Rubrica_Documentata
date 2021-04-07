#include "Funzioni.h"
#include <string>

using namespace std;

/*!
    * \mainpage <CENTER>Rubrica</CENTER>
    * \author <B>Angelo Cipriani</B>
    * \version <B>V0.1</B>
    * \date <B>08/04/2021</B>
    *
    * \section caratteristiche CARATTERISTICHE DEL PROGETTO
    *
    *  Il software permette di:
    * - inserire un contatto da input che poi viene salvato in un file binario
    * - leggere i contatti dal file binario e li stampa
    * - ricercare un contatto salvato nel file
*/

int main()
{
    Contatto rubrica[NUMERO_MASSIMO_CONTATTI];

    string percorsoFile;
    cout << "- Inserisci il percorso del file dei dati (es. Dati.dat): ";
    getline(cin, percorsoFile);

    cout << endl;

    while(true)
    {
        LetturaDaFile(percorsoFile, rubrica);

        cout << "1) Inserisci contatto" << endl;
        cout << "2) Stampa rubrica" << endl;
        cout << "3) Ricerca contatto" << endl;
        cout << "4) Esci" << endl;
        cout << "- Inserisci cosa vuoi fare: ";
        int scelta;
        cin >> scelta;

        cout << endl << endl;

        if(scelta == 1)
            InserisciContatto(percorsoFile);
        else if(scelta == 2)
            StampaRubrica(rubrica);
        else if(scelta == 3)
            RicercaContatto(percorsoFile);
        else if(scelta == 4)
            break;

        cout << endl << endl;
    }

    return 0;
}
