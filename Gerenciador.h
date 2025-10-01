#ifndef GERENCIADOR_H
#define GERENCIADOR_H

#include "Anuncio.h"

#include <string.h>

#include <iostream>
using namespace std;

class Gerenciador{
    private:
        int maximo;
        Anuncio** anuncios;
        int quantidadeDeAnuncios;

    public:
        Gerenciador(int maximo);
        virtual ~Gerenciador();

        bool AdicionarAnuncio(Anuncio* anuncio);

        void MenorMaior();
        void MaiorMenor();
        void MaiorElo();
        void MaisRecente();
};

#endif