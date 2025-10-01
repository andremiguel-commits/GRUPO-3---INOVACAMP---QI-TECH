#include "Anuncio.h"

#include <string.h>

#include <iostream>
using namespace std;

Anuncio::Anuncio(Usuario* emprestador, Usuario* pagador, int prazo, int valor, int taxa):
    emprestador(emprestador), pagador(pagador), prazo(prazo), valor(valor), taxa(taxa) {}

int Anuncio::getValor(){
    return valor;
}

int Anuncio::getPrazo(){
    return prazo;
}

int Anuncio::getNivelElo(){
    if(emprestador -> getElo() == "bronze") return 1;
    if(emprestador -> getElo() == "prata") return 2;
    if(emprestador -> getElo() == "ouro") return 3;
    if(emprestador -> getElo() == "platina") return 4;
}

Usuario* Anuncio::getEmprestador(){
    return emprestador;
}