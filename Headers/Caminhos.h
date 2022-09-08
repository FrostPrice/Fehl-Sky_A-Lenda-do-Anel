// Item relacionados com os caminhos escolhidos e alguns eventos que podem acontencer nesses caminhos
#ifndef CAMINHOS_H
#define CAMINHOS_H

#include <string>

#include "Player.h"

class Caminhos
{
private:
    int caminho_atual;
    int index_caminhos_possiveis[16][3] = {
        {1, 2, 0},
        {2, 3, 5},
        {3, 4, 0},
        {4, 7, 8},
        {5, 8, 6},
        {6, 9, 0},
        {7, 13, 0},
        {8, 10, 0},
        {9, 12, 0},
        {10, 11, 0},
        {11, 13, 0},
        {12, 13, 0},
        {13, 14, 0},
        {14, 16, 0},
        {15, 16, 0},
        {16, 0, 0},
    };

    string caminhos_possiveis[16] = {
        "1",             // 1
        "2",             // 2
        "3A",            // 3
        "3ABoss",        // 4
        "3B",            // 5
        "3BBoss",        // 6
        "4A",            // 7
        "4B",            // 8
        "4C",            // 9
        "5A",            // 10
        "5ABoss",        // 11
        "5B",            // 12
        "BatalhaFinal",  // 13
        "Epilogo",       // 14
        "Morte",         // 15
        "Agradecimento", // 16
    };

public:
    Caminhos();

    // Métodos
    void historia(Player jogador);
    string pesquisa_caminho_atual();
    int define_caminho(int caminho_1, int caminho_2);
    void define_proximos_caminhos(int proximos_caminhos[2]);

    // Setters
    void set_caminho_atual(int caminho_novo)
    {
        caminho_atual = caminho_novo;
    };
};

#endif // CAMINHOS_H