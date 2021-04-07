#ifndef FUNZIONI_H
#define FUNZIONI_H
#include <iostream>
#include <fstream>

#define NUMERO_MASSIMO_CONTATTI 200

using namespace std;

struct Contatto
{
    int codiceContatto;
    int numeroTelefono;
    char nome[100];
    char cognome[100];
};

void InserisciContatto(string percorsoFile);
void LetturaDaFile(string percorsoFile, Contatto rubrica[]);
void StampaContatto(Contatto contatto);
void StampaRubrica(Contatto rubrica[]);

#endif // FUNZIONI_H
