#ifndef FUNCOES_H // Se o arquivo não está definido. Usado para impedir conflito de arquivos
#define FUNCOES_H

using namespace std;
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

// region: Combate
int roda_d20()
{
    return rand() % 20;
};

int compara_dados(int valor_dado_a, int valor_dado_b)
{
    if (valor_dado_a > valor_dado_b)
        return 1;
    else if (valor_dado_b > valor_dado_a)
        return 0;
    else
        return 0; //  Se o valor dos dados foram iguais, a defesa ganha
};

int calc_dano(int forca, int dano_arma)
{
    int dano_final = 0;
    dano_final = forca + dano_arma;
    return dano_final;
};
// endregion: Combate

// FIXME: Ajustar o erro de input para string
int solicita_input_usuario(string mensagem, int menor_valor, int maior_valor)
{
    int input_usuario;

    do
    {
        cout << mensagem;
        cin >> input_usuario;
    } while (input_usuario < menor_valor || input_usuario > maior_valor);

    return input_usuario;
};

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

        system("clear");
        cout << str_arquivo;
    };
};

#endif // FUNCOES_H