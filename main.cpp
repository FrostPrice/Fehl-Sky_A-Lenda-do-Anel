#include <locale.h>
using namespace std;

#include "headers/componentes.h" // Define globalmente todas as funções comuns
#include "src/sistemas.cpp"

int main()
{
    setlocale(LC_ALL, "Portuguese");

    Sistemas sistema;
    sistema.comeca_jogo();

    return 0;
}