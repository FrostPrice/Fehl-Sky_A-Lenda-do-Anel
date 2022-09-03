#include "../Headers/Funcoes.h"
#include "../Headers/Player.h"
#include "../Headers/Caminhos.h"

#include "inimigo.cpp"

Caminhos::Caminhos(){};

// Métodos
void Caminhos::inicio(Player jogador)
{
    int escolha_usuario;
    ler_texto_de_arquivo("historia/ato1.txt");
    escolha_usuario = solicita_input_usuario("O que você quer fazer? [1]: ", 1, 1);

    ato_2(jogador);
};

void Caminhos::ato_2(Player jogador)
{
    int escolha_usuario;
    ler_texto_de_arquivo("historia/ato2.txt");
    escolha_usuario = solicita_input_usuario("O que você quer fazer? [1-2]: ", 1, 2);

    switch (escolha_usuario)
    {
    case 1:
        ato_3_a(jogador);
        break;

    case 2:
        ato_3_b(jogador);
        break;
    }
};

void Caminhos::ato_3_a(Player jogador)
{
    int escolha_usuario;
    ler_texto_de_arquivo("historia/ato3A.txt");
    escolha_usuario = solicita_input_usuario("O que você quer fazer? [1]: ", 1, 1);

    switch (escolha_usuario)
    {
    case 1:
        ato_3_a_boss(jogador);
        break;
    }
};

void Caminhos::ato_3_a_boss(Player jogador)
{
    int escolha_usuario;
    ler_texto_de_arquivo("historia/ato3ABoss.txt");
    escolha_usuario = solicita_input_usuario("O que você quer fazer? [1-2]: ", 1, 2);

    switch (escolha_usuario)
    {
    case 1:
        ato_4_a(jogador);
        break;
    case 2:
        ato_4_b(jogador);
        break;
    }
};

void Caminhos::ato_3_b(Player jogador)
{
    int escolha_usuario;
    ler_texto_de_arquivo("historia/ato3B.txt");
    escolha_usuario = solicita_input_usuario("O que você quer fazer? [1-2] ", 1, 2);

    switch (escolha_usuario)
    {
    case 1:
        ato_4_b(jogador);
        break;

    case 2:
        ato_3_b_boss(jogador);
        break;
    }
};

void Caminhos::ato_3_b_boss(Player jogador)
{
    int escolha_usuario;
    ler_texto_de_arquivo("historia/ato3BBoss.txt");
    escolha_usuario = solicita_input_usuario("O que você quer fazer? [1]: ", 1, 1);

    switch (escolha_usuario)
    {
    case 1:
        ato_4_b(jogador);
        break;
    };
}
void Caminhos::ato_4_a(Player jogador)
{
    int escolha_usuario;
    ler_texto_de_arquivo("historia/ato4A.txt");
    escolha_usuario = solicita_input_usuario("O que você quer fazer? [1-2]: ", 1, 1);

    switch (escolha_usuario)
    {
    case 1:
        ato_final(jogador);
        break;
    }
};

void Caminhos::ato_4_b(Player jogador)
{
    int escolha_usuario;
    ler_texto_de_arquivo("historia/ato4B.txt");
    escolha_usuario = solicita_input_usuario("O que você quer fazer? [1]: ", 1, 1);

    switch (escolha_usuario)
    {
    case 1:
        ato_5_a(jogador);
        break;
    };
}

void Caminhos::ato_4_c(Player jogador)
{
    int escolha_usuario;
    ler_texto_de_arquivo("historia/ato4C.txt");
    escolha_usuario = solicita_input_usuario("O que você quer fazer? [1]: ", 1, 1);

    switch (escolha_usuario)
    {
    case 1:
        ato_5_b(jogador);
        break;
    };
}

void Caminhos::ato_5_a(Player jogador)
{
    int escolha_usuario;
    ler_texto_de_arquivo("historia/ato5A.txt");
    escolha_usuario = solicita_input_usuario("O que você quer fazer? [1]: ", 1, 1);

    switch (escolha_usuario)
    {
    case 1:
        ato_5_a_boss(jogador);
        break;
    };
}

void Caminhos::ato_5_a_boss(Player jogador)
{
    int escolha_usuario;
    ler_texto_de_arquivo("historia/ato5ABoss.txt");
    escolha_usuario = solicita_input_usuario("O que você quer fazer? [1]: ", 1, 1);

    switch (escolha_usuario)
    {
    case 1:
        ato_final(jogador);
        break;
    };
}

void Caminhos::ato_5_b(Player jogador)
{
    int escolha_usuario;
    ler_texto_de_arquivo("historia/ato5B.txt");
    escolha_usuario = solicita_input_usuario("O que você quer fazer? [1]: ", 1, 1);

    switch (escolha_usuario)
    {
    case 1:
        ato_5_b_boss(jogador);
        break;
    };
}

void Caminhos::ato_5_b_boss(Player jogador)
{
    int escolha_usuario;
    ler_texto_de_arquivo("historia/ato5BBoss.txt");
    escolha_usuario = solicita_input_usuario("O que você quer fazer? [1]: ", 1, 1);

    switch (escolha_usuario)
    {
    case 1:
        ato_final(jogador);
        break;
    };
}

void Caminhos::ato_final(Player jogador)
{
    int escolha_usuario;
    ler_texto_de_arquivo("historia/batalhafinal.txt");
    escolha_usuario = solicita_input_usuario("O que você quer fazer? [1]: ", 1, 1);

    switch (escolha_usuario)
    {
    case 1:
        ato_epilogo(jogador);
        break;
    };
}

void Caminhos::ato_epilogo(Player jogador)
{
    int escolha_usuario;
    ler_texto_de_arquivo("historia/epilogo.txt");
    escolha_usuario = solicita_input_usuario("O que você quer fazer? [1]: ", 1, 1);

    switch (escolha_usuario)
    {
    case 1:
        system("clear");
        cout << "Você Finalizou o jogo!\n";
    };
}