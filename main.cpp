#include <locale.h>
using namespace std;

#include "src/sistemas.cpp"

int main()
{
    setlocale(LC_ALL, "Portuguese");

    Sistemas sistema;

    sistema.ler_db_csv();

    return 0;
}