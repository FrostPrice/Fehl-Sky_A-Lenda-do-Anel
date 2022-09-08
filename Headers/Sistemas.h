// Esse arquivo vai conter as funções gerais de funcionalidade do jogo (como por exemplo, começar jogo)
#ifndef SISTEMAS_H // Se o arquivo não está definido. Usado para impedir conflito de arquivos
#define SISTEMAS_H

#include <cstdlib>

class Sistemas
{
private:
    bool jogando;

public:
    Sistemas();

    // Métodos
    void menu_principal();
    void comeca_jogo();
    static int roda_d20(int sorte) // o static permite tornar a função Global sem que haja a necessidade de instanciar a classe, acessada usando NomeClasse::funcão()
    {
        return (rand() % 21) + sorte; // O mod (%) impede que o rand seja = ou > que 21
    };
    static int compara_dados(int valor_dado_a, int valor_dado_b) // o static permite tornar a função Global sem que haja a necessidade de instanciar a classe, acessada usando NomeClasse::funcão()
    {
        if (valor_dado_a > valor_dado_b)
            return 1;
        else if (valor_dado_b > valor_dado_a)
            return 0;
        else
            return 0; //  Se o valor dos dados foram iguais, a "defesa" ganha
    };

    // Getters
    bool
    get_jogando()
    {
        return jogando;
    };

    // Setters
};

#endif // SISTEMAS_H