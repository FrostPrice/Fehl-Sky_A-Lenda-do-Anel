#include <string>
#include <iostream>
using namespace std;

#include "config.h"

class Player
{
    string nome;
    int classe;
    int vitalidade, forca, stamina, mana, inteligencia, sorte;
    int arma, armadura, inventario[PLAYER_LIMITE_INVENTARIO];

    void criacao_player()
    {
        cout << "Digite o nome do Herói da história: ";
        cin >> nome;

        cout << "Hora de escolher a sua Classe (1, 2 ou 3)";
        // TODO: Terminar essa função
    };
};