// Item relacionados com os caminhos escolhidos e alguns eventos que podem acontencer nesses caminhos
#ifndef CAMINHOS_H
#define CAMINHOS_H

class Caminhos
{

public:
    Caminhos();

    // Métodos
    void inicio(Player jogador);
    void ato_2(Player jogador);
    void ato_3_a(Player jogador);
    void ato_3_a_boss(Player jogador);
    void ato_3_b(Player jogador);
    void ato_3_b_boss(Player jogador);
    void ato_4_a(Player jogador);
    void ato_4_b(Player jogador);
    void ato_4_c(Player jogador);
    void ato_5_a(Player jogador);
    void ato_5_a_boss(Player jogador);
    void ato_5_b(Player jogador);
    void ato_5_b_boss(Player jogador);
    void ato_final(Player jogador);
    void ato_epilogo(Player jogador);
};

#endif // CAMINHOS_H