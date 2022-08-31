#ifndef FUNCOES_H // Se o arquivo não está definido. Usado para impedir conflito de arquivos
#define FUNCOES_H

using namespace std;
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

int solicita_input_usuario(string mensagem, int menor_valor, int maior_valor)
{
    int input_usuario;

    do
    {
        cout << mensagem;
        cin >> input_usuario;
    } while (input_usuario < menor_valor || input_usuario > maior_valor);

    return input_usuario;
}

void ler_texto_de_arquivo(string caminho_arquivo)
{
    ifstream arquivo;

    arquivo.open(caminho_arquivo, ios_base::in);

    if (!arquivo.is_open())
    {
        cout << "Não foi possível abrir o arquivo desejado\n";
    }
    else
    {
        string str_arquivo;
        ostringstream string_arquivo;

        string_arquivo << arquivo.rdbuf();
        str_arquivo = string_arquivo.str();

        cout << str_arquivo;
    };
};

#endif // FUNCOES_H