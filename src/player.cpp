using namespace std;
#include <iostream>

#include "../Headers/Funcoes.h"
#include "../Headers/Player.h"

Player::Player()
{
    nome = "";
    classe = "";
    vitalidade = 0;
    forca = 0;
    stamina = 0;
    inteligencia = 0;
    sorte = 5;
    arma = 0;
    defesa = 0;
};

void Player::criacao_player()
{
    system("clear"); // Mudar comando de acordo com OS. Para windows é cls
    cout << "+--------------------------------------+\n";
    cout << "|  Digite o nome do Herói da história  |\n";
    cout << "+--------------------------------------+\n";
    cin >> nome;
    set_nome(nome);

    cout << endl;
    cout << "+-----------------------------------------------------+\n";
    cout << "|  Você tem a opção entre essas classes:              |\n";
    cout << "|  1 - Guerreiro -> Focado em combate corpo a corpo   |\n";
    cout << "|  2 - Mago -> Com proficiência em magias e feitiços  |\n";
    cout << "|  3 - Arqueiro -> Especialista em combate a distância|\n";
    cout << "+-----------------------------------------------------+\n";
    int input_usuario;
    input_usuario = solicita_input_usuario("Digite 1, 2 ou 3: ", 1, 3);

    // FIXME: mudar valores de dano e arma (Dimunuir)
    switch (input_usuario)
    {
    case 1:
        // Define valores para a classe: Guerreiro
        classe = "Guerreiro";
        vitalidade = 10;
        forca = 7;
        stamina = 5;
        inteligencia = 2;
        // arma = ;  Valor que será adicionado no ataque
        // defesa = ; Valor que determinará a qtd de dano levado

        break;
    case 2:
        // Define valores para a classe: Mago
        classe = "Mago";
        vitalidade = 6;
        forca = 2;
        stamina = 6;
        inteligencia = 10;
        // arma = ;  Valor que será adicionado no ataque
        // defesa = ; Valor que determinará a qtd de dano levado

        break;
    case 3:
        // Define valores para a classe: Arqueiro
        classe = "Arqueiro";
        vitalidade = 6;
        forca = 5;
        stamina = 10;
        inteligencia = 3;
        // arma = ;  Valor que será adicionado no ataque
        // defesa = ; Valor que determinará a qtd de dano levado

        break;
    };
};