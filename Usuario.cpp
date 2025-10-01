#include "Usuario.h"

#include <string.h>

#include <iostream>
using namespace std;

Usuario::Usuario(string nome, int CPF, string elo):
    nome(nome), CPF(CPF), elo(elo) {}

string Usuario::getElo(){
    return elo;
}