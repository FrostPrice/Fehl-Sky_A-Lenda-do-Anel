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
        forca = 7;
        stamina = 5;
        inteligencia = 2;

        break;
    case 2:
        nome = "Cleytin";
        vitalidade = 6;
        forca = 2;
        stamina = 6;
        inteligencia = 10;

        break;
    case 3:
        nome = "Mintus";
        vitalidade = 6;
        forca = 5;
        stamina = 10;
        inteligencia = 3;

        break;
    };
};

void Inimigo::spawnar_mago()
{
    nome = "Midir";
    vitalidade = 10;
    forca = 2;
    stamina = 6;
    inteligencia = 10;
};

void Inimigo::spawnar_ladrao_de_tumulos()
{
    nome = "Ladrão de Túmulos";
    vitalidade = 6;
    forca = 4;
    stamina = 10;
    inteligencia = 2;
};

void Inimigo::spawnar_bandido_chefe()
{
    nome = "Rato";
    vitalidade = 10;
    forca = 4;
    stamina = 2;
    inteligencia = 0;
};

void Inimigo::spawnar_golem()
{
    nome = "Nikollay";
    vitalidade = 10;
    forca = 4;
    stamina = 2;
    inteligencia = 0;
};

void Inimigo::spawnar_chefao_final()
{
    nome = "Fehl Sky";
    vitalidade = 10;
    forca = 10;
    stamina = 10;
    inteligencia = 10;
};