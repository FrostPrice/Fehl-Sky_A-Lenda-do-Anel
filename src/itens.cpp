// Classes contendo informações dos itens
using namespace std;
#include <string>

class Itens
{
    struct Espada
    {
        string nome = "Excalibur";
        int dano = 6;
    };
    struct Cajado
    {
        string nome = "Staff Of Ring";
        int inteligencia = 6;
    };
    struct Arco
    {
        string nome = "Legolla's Bow";
        int destreza = 6;
    };
    struct Anel
    {
        string nome = "Fehl Sky's Anel";
        int vitalidade = 100;
        int forca = 100;
        int stamina = 100;
        int inteligencia = 100;
    };
};