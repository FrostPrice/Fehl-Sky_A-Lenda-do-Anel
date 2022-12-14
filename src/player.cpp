using namespace std;
#include <iostream>

#include "../Headers/Helpers.h"
#include "../Headers/Player.h"
#include "../Headers/Inventario.h"

Player::Player()
{
    nome = "";
    classe = "";
    vitalidade = 0;
    forca = 0;
    stamina = 0;
    inteligencia = 0;
    sorte = 5;
    dano = 0;
    defesa = 0;
    Inventario inventario;
};

// Métodos
void Player::criacao_player()
{
    system("clear"); // Mudar comando de acordo com OS. Para windows é cls
    cout << "+--------------------------------------------+\n";
    cout << "|  Digite o nome do Herói da história [a-z]  |\n";
    cout << "+--------------------------------------------+\n";
    cin >> nome;
    set_nome(nome);

    cout << endl;
    cout << "+-------------------------------------------------------+\n";
    cout << "|  Você tem a opção entre essas classes:                |\n";
    cout << "|  1 - Guerreiro -> Focado em combate corpo a corpo     |\n";
    cout << "|  2 - Mago -> Com proficiência em magias e feitiços    |\n";
    cout << "|  3 - Arqueiro -> Especialista em combate a distância  |\n";
    cout << "+-------------------------------------------------------+\n";
    int input_usuario;
    input_usuario = Helpers::solicita_input_usuario("Digite 1, 2 ou 3: ", 3);

    inventario.inicializa();

    switch (input_usuario)
    {
    case 1:
        // Define valores para a classe: Guerreiro
        classe = "Guerreiro";
        vitalidade = 10;
        forca = 6;
        stamina = 5;
        inteligencia = 2;
        dano = 3;
        defesa = 4;

        break;
    case 2:
        // Define valores para a classe: Mago
        classe = "Mago";
        vitalidade = 14;
        forca = 4;
        stamina = 6;
        inteligencia = 10;
        dano = 2;
        defesa = 6;

        break;
    case 3:
        // Define valores para a classe: Arqueiro
        classe = "Arqueiro";
        vitalidade = 15;
        forca = 5;
        stamina = 10;
        inteligencia = 3;
        dano = 3;
        defesa = 5;

        break;
    default:
        cout << "Error... Entre em Pânico!!!\n";
        cout << "O anel foi perdido";

        break;
    };
};