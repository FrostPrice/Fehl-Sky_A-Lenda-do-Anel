// Funções genéricas usadas em qualquer programa
#ifndef HELPERS_H // Se o arquivo não está definido. Usado para impedir conflito de arquivos
#define HELPERS_H

using namespace std;
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

class Helpers
{
public:
    static int solicita_input_usuario(string mensagem, int maior_valor) // o static permite tornar a função Global, acessada usando NomeClasse::funcão()
    {
        int input_usuario;
        do
        {
            cout << mensagem;
            cin >> input_usuario;
        } while (input_usuario < 1 || input_usuario > maior_valor);

        return input_usuario;
    };

    static void ler_arquivo_inteiro(string caminho_arquivo) // o static permite tornar a função Global, acessada usando NomeClasse::funcão()
    {
        ifstream arquivo;

        arquivo.open(caminho_arquivo, ios_base::out); // Abre o arquivo somente para leitura (ios_base::out)

        if (!arquivo.is_open()) // Verifica se o arquivo foi corretamente aberto
        {
            cout << "Não foi possível abrir o arquivo desejado\n";
        }
        else
        {
            string str_arquivo;
            ostringstream buffer_arquivo; // Define o buffer de ostringstream (buffer vai ser usado pra armazenar os dados temporariamente), ou seja, para ler o arquivo corremente e usar as funções de string

            buffer_arquivo << arquivo.rdbuf();  // rdbuf devolve o ponteiro ao buffer, e insere todo o conteudo do arquivo no buffer usando <<
            str_arquivo = buffer_arquivo.str(); // Convertemos o buffer para uma string, que é armazenado na variável do tipo string

            system("clear");
            cout << str_arquivo;
        };
    };
};

#endif // HELPERS_H