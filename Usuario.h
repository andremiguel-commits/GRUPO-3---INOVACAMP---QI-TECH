#ifndef USUARIO_H
#define USUARIO_H

#include <string.h>

#include <iostream>
using namespace std;

class Usuario{
    private:
        string elo;
        int CPF;
        string nome;

    public:
        Usuario(string nome, int CPF, string elo);
        virtual ~Usuario();

        void getNome();
        void getCPF();

        string getElo();
};
#endif