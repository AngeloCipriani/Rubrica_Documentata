#ifndef FUNZIONI_H
#define FUNZIONI_H
#include <iostream>
#include <fstream>

using namespace std;

struct Contatto
{
    int codiceContatto;
    int numeroTelefono;
    char nome[100];
    char cognome[100];
};

void InserisciContatto(string percorsoFile);

#endif // FUNZIONI_H
