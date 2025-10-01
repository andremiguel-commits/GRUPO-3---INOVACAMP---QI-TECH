#include "Gerenciador.h"
#include "Anuncio.h"
#include "Usuario.h"

#include <algorithm>

#include <string.h>

#include <iostream>
using namespace std;

/*Neste Arquivo, estão descrito os métodos implementados para ordenar os anúncios de empréstimos na aba inicial.
Foi criado um vetor com todos os anúncios ocorrendo simultaneamente, e, dependendo do interesse de filtragem do
usuário, é fornecida uma ordenação das propostas. Para isso, foi utilizada a biblioteca algorithm de C++, em que
foi empregado o método de ordenação por recursçao, merge-sort.*/

Gerenciador::Gerenciador(int maximo): maximo(maximo) {
    int i;
    anuncios = new Anuncio*[maximo];
    for (i=0; i<maximo; i++) anuncios[i] = nullptr;
    quantidadeDeAnuncios = 0;
}

Gerenciador::~Gerenciador(){
    int i;
    for (i=0; i<maximo; i++) delete anuncios[i];
    delete[] anuncios;
}

// Este método adiciona um anúncio ao vetor anuncios, que será ordenado.
bool Gerenciador::AdicionarAnuncio(Anuncio* anuncio){
    int i;
    for (i=0; i<maximo; i++) if (anuncios[i] == nullptr){ 
        anuncios[i] = anuncio;
        quantidadeDeAnuncios++;
        cout << "Anúncio adicionado com sucesso!" << endl;
        return true;
    }

    cout << "Erro ao adicionar o anúncio!" << endl; 
    return false;
}

// Este método ordena os anúncios do menor preço para o maior preço.
void Gerenciador::MenorMaior() {
    std::sort(anuncios, anuncios + quantidadeDeAnuncios, [](Anuncio* a, Anuncio* b) {
        return a -> getValor() < b -> getValor();
    });
}

// Este método ordena os anúncios do maior preço para o menor preço.
void Gerenciador:: MaiorMenor(){
    std::sort(anuncios, anuncios + quantidadeDeAnuncios, [](Anuncio* a, Anuncio* b) {
        return a -> getValor() > b -> getValor();
    });
}

// Este método ordena os anúncios por meio do prazo de expiração.
void Gerenciador::MaisRecente(){
    std::sort(anuncios, anuncios + quantidadeDeAnuncios, [](Anuncio* a, Anuncio* b) {
        return a -> getPrazo() > b -> getPrazo();
    });
}

// Este método ordena os anúncios por meio do elo do emprestador.
void Gerenciador::MaiorElo(){
    std::sort(anuncios, anuncios + quantidadeDeAnuncios, [](Anuncio* a, Anuncio* b) {
        return a -> getNivelElo() > b -> getNivelElo();
    });
}