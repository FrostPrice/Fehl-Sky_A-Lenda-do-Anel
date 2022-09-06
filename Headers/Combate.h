// Funções relacionadas com o Combate do jogo
#ifndef COMBATE_H
#define COMBATE_H

#include "Player.h"
#include "Inimigo.h"

class Combate
{
public:
    Combate(); // Só para instanciar essa classe

    int calc_dano(int forca, int dano_arma);
    void combate(Player jogador, Inimigo inimigo);
    void mostrar_status_combate(Player jogador, Inimigo inimigo);
    template <class Atancante, class Defensor> // Usa tempalte só para definir que as classes são "genéricas"
    void atacar(Atancante &atacante, Defensor &defensor);
};

#endif // COMBATE_H