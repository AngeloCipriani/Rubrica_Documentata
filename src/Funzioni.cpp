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

//! \relates FUNZIONI
/*! \fn LetturaDaFile(string percorsoFile, Contatto rubrica[])
    \brief Lettura rubrica dal file binario
    \param percorsoFile percorso del file binario che contiene la rubrica
    \param rubrica rubrica dove salvare il contenuto letto dal file
*/

void LetturaDaFile(string percorsoFile, Contatto rubrica[])
{
    fstream file;
    file.open(percorsoFile, ios::in | ios::binary);

    for(int i = 0; file.read((char*) &rubrica[i], sizeof(rubrica[i])); i++);

    file.close();
}

//! \relates FUNZIONI
/*! \fn StampaContatto(Contatto contatto)
    \brief Stampa le informazioni di un contatto
    \param contatto contatto da stampare
*/

void StampaContatto(Contatto contatto)
{
    cout << "Nome: " << contatto.nome << endl;
    cout << "Cognome: " << contatto.cognome << endl;
    cout << "Numero di telefono: " << contatto.numeroTelefono << endl;
    cout << "Codice: " << contatto.codiceContatto << endl;
}

//! \relates FUNZIONI
/*! \fn StampaRubrica(Contatto rubrica[])
    \brief Stampa tutti i contatti presenti nella rubrica
    \param rubrica rubrica contenente tutti i contatti da stampare
*/

void StampaRubrica(Contatto rubrica[])
{
    cout << "------RUBRICA------" << endl;

    for(int i = 0; i < NUMERO_MASSIMO_CONTATTI; i++)
    {
        //Controlla se i contatti sono finiti
        if(rubrica[i].nome[0] == '\0')
            break;

        StampaContatto(rubrica[i]);
        cout << endl;
    }
}

