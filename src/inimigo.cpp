// Todas as funcões e Item relacionados com os inimigos
#include "../Headers/Inimigo.h"

Inimigo::Inimigo()
{
    nome = "";
    vitalidade = 0;
    forca = 0;
    stamina = 0;
    inteligencia = 0;
    sorte = 3;
    dano = 0;
    defesa = 0;
};

// Métodos
void Inimigo::spawnar_inimigo_aleatorio()
{
    switch (1 + rand() % 3)
    {
    case 1:
        nome = "Jorjião";
        vitalidade = 10;
        forca = 4;
        stamina = 5;
        inteligencia = 2;
        dano = 4;
        defesa = 8;

        break;
    case 2:
        nome = "Cleytin";
        vitalidade = 8;
        forca = 3;
        stamina = 6;
        inteligencia = 10;
        dano = 2;
        defesa = 4;

        break;
    case 3:
        nome = "Mintus";
        vitalidade = 8;
        forca = 5;
        stamina = 10;
        inteligencia = 3;
        dano = 3;
        defesa = 6;

        break;
    };
};

void Inimigo::spawnar_mago()
{
    nome = "Midir";
    vitalidade = 10;
    forca = 3;
    stamina = 6;
    inteligencia = 10;
    dano = 4;
    defesa = 6;
};

void Inimigo::spawnar_ladrao_de_tumulos()
{
    nome = "Ladrão de Túmulos";
    vitalidade = 8;
    forca = 4;
    stamina = 10;
    inteligencia = 2;
    dano = 4;
    defesa = 4;
};

void Inimigo::spawnar_bandido_chefe()
{
    nome = "Rato";
    vitalidade = 10;
    forca = 4;
    stamina = 2;
    inteligencia = 0;
    dano = 4;
    defesa = 8;
};

void Inimigo::spawnar_golem()
{
    nome = "Nikollay";
    vitalidade = 10;
    forca = 4;
    stamina = 2;
    inteligencia = 0;
    dano = 4;
    defesa = 6;
};

void Inimigo::spawnar_chefao_final()
{
    nome = "Fehl Sky";
    vitalidade = 15;
    forca = 4;
    stamina = 10;
    inteligencia = 10;
    dano = 4;
    defesa = 7;
};