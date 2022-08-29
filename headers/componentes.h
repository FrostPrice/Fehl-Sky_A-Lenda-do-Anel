// Itens mais genéricos, que podem ser usados em qualquer lugar do projeto (Ex: calculo de critico, calculo de dano, etc)
using namespace std;
#include <iostream>
#include <fstream>
#include <string>

int solicita_input_usuario(string mensagem, int menor_valor, int maior_valor)
{
    int input_usuario;

    do
    {
        cout << mensagem;
        cin >> input_usuario;
        system("clear"); // Mudar comando de acordo com OS. Para windows é cls
    } while (input_usuario < menor_valor || input_usuario > maior_valor);

    return input_usuario;
}

void ler_csv(string caminho_csv)
{
    fstream arquivo;
    arquivo.open(caminho_csv, ios_base::in);

    if (!arquivo.is_open())
    {
        cout << "Não foi possível abrir o arquivo desejado\n";
    };

    // TODO: Terminar essa função
    // Ler o arquivo e retornar todos os dados, pode ser em uma matriz

    arquivo.close();
};