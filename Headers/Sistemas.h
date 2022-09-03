// Esse arquivo vai conter as funções gerais de funcionalidade do jogo (como por exemplo, começar jogo)
#ifndef SISTEMAS_H // Se o arquivo não está definido. Usado para impedir conflito de arquivos
#define SISTEMAS_H

class Sistemas
{
private:
    bool jogando;

public:
    Sistemas();

    // Métodos
    void menu_principal();

    void comeca_jogo();

    // Getters
    bool
    get_jogando()
    {
        return jogando;
    };

    // Setters
};

#endif // SISTEMAS_H