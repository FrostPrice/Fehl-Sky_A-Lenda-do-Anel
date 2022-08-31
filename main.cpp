#include <locale.h>
#include <time.h>

#include "Headers/Sistemas.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    Sistemas sistema;

    do
    {
        sistema.menu_principal();
    } while (sistema.get_jogando());

    return 0;
}