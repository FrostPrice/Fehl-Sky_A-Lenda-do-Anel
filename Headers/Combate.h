// Funções relacionadas com o Combate do jogo
#ifndef COMBATE_H
#define COMBATE_H

#include "Player.h"
#include "Inimigo.h"

class Combate
{
public:
    Combate(); // Só para instanciar essa classe

    int calc_dano(int forca, int dano_arma, int sorte, int defesa);
    void combate(Player &jogador, Inimigo inimigo, bool pode_fugir);
    void mostrar_status_combate(Player jogador, Inimigo inimigo);
    template <class Atancante, class Defensor> // Usa template só para definir que as classes são "genéricas"
    void atacar(Atancante &atacante, Defensor &defensor);
    void usar_item(Player &jogador);
    void fugir(Player &jogador, Inimigo &inimigo, bool &em_combate);
    void chance_item(Player &jogador);
};

#endif // COMBATE_H