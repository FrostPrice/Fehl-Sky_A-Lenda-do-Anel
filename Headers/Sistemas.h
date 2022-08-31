// Esse arquivo vai conter as funções gerais de funcionalidade do jogo (como por exemplo, começar jogo)
#ifndef SISTEMAS_H // Se o arquivo não está definido. Usado para impedir conflito de arquivos
#define SISTEMAS_H

using namespace std;
#include <string>
#include <vector>

class Sistemas
{
private:
    int escolha;
    bool jogando;

public:
    Sistemas();

    // Métodos
    void menu_principal();

    void comeca_jogo();

    // int roda_d20()
    // {
    //     srand(NULL);
    //     return rand() % 20;
    // };

    // int compara_dados(int valor_dado_a, int valor_dado_b)
    // {
    //     if (valor_dado_a > valor_dado_b)
    //         return 1;
    //     else if (valor_dado_b > valor_dado_a)
    //         return 0;
    //     else
    //         return 0; //  Se o valor dos dados foram iguais, a defesa ganha
    // };

    // int calc_dano(int forca, int dano_arma)
    // {
    //     int dano_final = 0;
    //     dano_final = forca + dano_arma;
    //     return dano_final;
    // };

    // Getters
    bool get_jogando()
    {
        return jogando;
    };

    // Setters
};

#endif // SISTEMAS_H