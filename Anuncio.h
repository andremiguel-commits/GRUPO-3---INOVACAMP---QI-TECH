#ifndef ANUNCIO_H
#define ANUNCIO_H

#include "Usuario.h"

#include <string.h>

#include <iostream>
using namespace std;

class Anuncio{
    private:
    Usuario* emprestador;
    Usuario* pagador;
    int prazo;
    int valor;
    int taxa;

    public:
        Anuncio(Usuario* emprestador, Usuario* pagador, int prazo, int valor, int taxa);
        virtual ~Anuncio();

        int getValor();
        int getPrazo();
        int getNivelElo();

        Usuario* getEmprestador();
};

#endif