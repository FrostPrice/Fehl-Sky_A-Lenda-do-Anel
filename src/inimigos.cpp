// Todas as funcões e itens relacionados com os inimigos
using namespace std;
#include <string>
#include <time.h>

class Inimigos
{
    string nome;
    int vitalidade, forca, stamina, mana, inteligencia, sorte = 4;
    int arma, defesa;

    void spawnar_inimigo()
    {
        srand(time(NULL));
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
};