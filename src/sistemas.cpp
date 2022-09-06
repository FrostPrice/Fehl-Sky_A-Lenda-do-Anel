#include <iostream>
#include <iomanip>

#include "../Headers/Helpers.h"
#include "../Headers/Sistemas.h"
#include "../Headers/Player.h"
#include "../Headers/Caminhos.h"

Sistemas::Sistemas()
{
    jogando = true;
}

// Métodos
void Sistemas::menu_principal()
{
    system("clear"); // Mudar comando de acordo com OS. Para windows é cls
    cout << "+--------------------------------------+\n";
    cout << "|           Bem-Vindo ao...            |\n";
    cout << "|                                      |\n";
    cout << "|      Fehl Sky - A Lenda do Anel      |\n";
    cout << "|                                      |\n";
    cout << "+--------------------------------------+\n";
    cout << endl;
    cout << "+--------------------------------------+\n";
    cout << "| - Aperte 1 para começar o jogo       |\n";
    cout << "| - Aperte 2 para sair do jogo         |\n";
    cout << "+--------------------------------------+\n";
    cout << endl;
    int input_usuario;
    input_usuario = Helpers::solicita_input_usuario("Escolha: ", 2);

    switch (input_usuario)
    {
    case 1:
        cout << "Começando jogo...\n\n";
        comeca_jogo();

        break;
    case 2:
        cout << "Saindo do jogo...\n";
        jogando = false;

        break;
    default:
        cout << "Error... Entre em Pânico!!!\n";
        cout << "O anel foi perdido";
        jogando = false;

        break;
    };
};

void Sistemas::comeca_jogo()
{
    Player jogador;
    jogador.criacao_player();
    Caminhos caminho;
    caminho.historia(jogador);
};
