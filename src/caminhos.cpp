#include <unistd.h> // Para poder usar a função sleep

#include "../Headers/Helpers.h"
#include "../Headers/Sistemas.h"
#include "../Headers/Player.h"
#include "../Headers/Caminhos.h"
#include "../Headers/Inimigo.h"
#include "../Headers/Combate.h"

Caminhos::Caminhos()
{
    caminho_atual = 1;
    int index_caminhos_possiveis[17][3];
    string caminhos_possiveis[17];
};

// Métodos
void Caminhos::historia(Player jogador)
{
    Combate combate;
    int proximos_caminhos[2];
    do
    {
        // Eventos para os caminhos
        Inimigo inimigo;
        switch (caminho_atual)
        {
        case 4:
            inimigo.spawnar_mago();
            combate.combate(jogador, inimigo, false);

            break;
        case 9:
            inimigo.spawnar_ladrao_de_tumulos();
            combate.combate(jogador, inimigo, false);

            break;
        case 11:
            inimigo.spawnar_bandido_chefe();
            combate.combate(jogador, inimigo, false);

            if (jogador.get_vitalidade() > 0) // Se o jogador ganhar a luta, recebe 10 a mais de vitalidade
                jogador.set_vitalidade(jogador.get_vitalidade() + 10);

            break;
        case 13:
            inimigo.spawnar_golem();
            combate.combate(jogador, inimigo, false);

            if (jogador.get_vitalidade() > 0) // Se o jogador ganhar a luta, recebe 10 a mais de vitalidade
                jogador.set_vitalidade(jogador.get_vitalidade() + 10);

            break;
        case 15:
            inimigo.spawnar_chefao_final();
            combate.combate(jogador, inimigo, false);

            break;
        case 1:
        case 16:
        case 17:
            // Para não fazer nada nesses "caminhos específicos"
            break;
        default: // Define evento aleatório
            int valor_dado = Sistemas::roda_d20(jogador.get_sorte());

            if (valor_dado > 16)
            {
                inimigo.spawnar_inimigo_aleatorio();
                combate.combate(jogador, inimigo, true);
            }
            break;
        }

        if (jogador.get_vitalidade() <= 0 && caminho_atual > 0 && caminho_atual != 16 && caminho_atual != 17) // Jogador morre em algum ponto da história
        {
            set_caminho_atual(16); // Mostra a tela de morte
        }

        // Mostra os textos da histórias e as opçõoes de escolha
        define_proximos_caminhos(proximos_caminhos);
        set_caminho_atual(define_caminho(proximos_caminhos[0], proximos_caminhos[1]));

    } while (caminho_atual > 0 && caminho_atual <= 17);
};

string Caminhos::pesquisa_caminho_atual()
{
    for (int i = 0; i < 17; i++)
    {
        int index_local;
        index_local = index_caminhos_possiveis[i][0];

        if (caminho_atual == index_local)
        {
            return caminhos_possiveis[i];
        }
    }

    return caminhos_possiveis[0]; // Para evitar função sem retorno, esse item serve como uma segurança, retornando o jogador pro início da história
};

int Caminhos::define_caminho(int proximo_caminho_1, int proximo_caminho_2)
{
    int escolha_usuario, max_input_numero;
    string mensagem_input;

    if (proximo_caminho_2 == 0)
    {
        mensagem_input = "Escolha [1]: ";
        max_input_numero = 1;
    }
    else
    {
        mensagem_input = "Escolha [1-2]: ";
        max_input_numero = 2;
    }

    Helpers::ler_arquivo_inteiro("historia/ato" + pesquisa_caminho_atual() + ".txt");
    escolha_usuario = Helpers::solicita_input_usuario(mensagem_input, max_input_numero);

    switch (escolha_usuario)
    {
    case 1:
        return proximo_caminho_1;
        break;
    case 2:
        return proximo_caminho_2;
        break;
    default:
        cout << "Isso não era pra acontecer :(";
        return 1;
        break;
    };
};

void Caminhos::define_proximos_caminhos(int proximos_caminhos[2])
{
    for (int i = 0; i < 17; i++)
    {
        int index_local;
        index_local = index_caminhos_possiveis[i][0];

        if (caminho_atual == index_local)
        {
            for (int j = 1; j < 3; j++)
            {
                proximos_caminhos[j - 1] = index_caminhos_possiveis[i][j];
            }
        }
    }
};
