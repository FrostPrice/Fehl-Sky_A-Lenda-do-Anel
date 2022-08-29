// Esse arquivo vai conter as funções gerais de funcionalidade do jogo (como por exemplo, começar jogo)
#include <iostream>
using namespace std;

#include "player.cpp"

class Sistemas
{
public:
    void comeca_jogo()
    {
        ler_csv("db/db.csv");
        if (menu_principal())
        {
            Player jogador;
            jogador.criacao_player();
        };
    };

    bool menu_principal()
    {
        cout << "Bem-Vindo ao...\n\n";
        cout << "Fehl Sky - A Lenda do Anel\n\n";

        int input_usuario;
        input_usuario = solicita_input_usuario("- Aperte 1 para começar o jogo\n- Aperte 2 para sair do jogo\n", 1, 2);

        switch (input_usuario)
        {
        case 1:
            cout << "Começando jogo...\n";
            return true;
            break;
        case 2:
            cout << "Saindo do jogo...\n";
            return false;
            break;
        default:
            cout << "Error!!! Start Panicking";
            return false;
            break;
        };
    };
};