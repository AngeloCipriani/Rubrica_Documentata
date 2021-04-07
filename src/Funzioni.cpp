#include "Funzioni.h"

//! \class [FUNZIONI]

//! \relates FUNZIONI
/*! \fn InserisciContatto(string percorsoFile)
    \brief L'utente inserisce un contatto da input che poi viene salvato nel file binario
    \param percorsoFile percorso del file binario in cui salvare il contatto
*/

void InserisciContatto(string percorsoFile)
{
    cout << "------INSERIMENTO CONTATTO------" << endl;

    Contatto contatto;

    cout << "- Inserisci il nome del contatto: ";
    cin >> contatto.nome;

    cout << "- Inserisci il cognome del contatto: ";
    cin >> contatto.cognome;

    cout << "- Inserisci il numero di telefono del contatto: ";
    cin >> contatto.numeroTelefono;

    cout << "- Inserisci il codice del contatto: ";
    cin >> contatto.codiceContatto;

    fstream file;
    file.open(percorsoFile, ios::app | ios::binary);
    file.write((char*) &contatto, sizeof(contatto));
    file.close();
}
