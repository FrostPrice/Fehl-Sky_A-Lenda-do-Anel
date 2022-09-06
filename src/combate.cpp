#include <unistd.h> // Para poder usar a função sleep

#include "../Headers/Helpers.h"
#include "../Headers/Sistemas.h"
#include "../Headers/Combate.h"
#include "../Headers/Player.h"
#include "../Headers/Inimigo.h"

Combate::Combate(){}; // Só para instanciar essa classe

int Combate::calc_dano(int forca, int dano_arma)
{
    int dano_final = 0;
    dano_final = forca + dano_arma;
    return dano_final;
};

void Combate::combate(Player jogador, Inimigo inimigo)
{
    while (jogador.get_vitalidade() > 0 && inimigo.get_vitalidade() > 0)
    {
        mostrar_status_combate(jogador, inimigo);

        int input_usuario;
        input_usuario = Helpers::solicita_input_usuario("Escolha entre 1, 2 ou 3: ", 3);

        switch (input_usuario)
        {
        case 1:
            atacar(jogador, inimigo); // Jogador Ataca
            break;
        }

        cout << "+-------------------------------------------------------+\n";
        cout << "|  O seu oponente está atacando. Aguarde...             |\n";
        cout << "+-------------------------------------------------------+\n";
        atacar(inimigo, jogador); // Inimigo Ataca
    }
};

void Combate::mostrar_status_combate(Player jogador, Inimigo inimigo)
{
    system("clear");
    cout << "[Em Combate]\n\n";
    cout << "+-------------------------------------------------------+\n";
    cout << "| Herói: " << jogador.get_nome() << "\t\t|\tInimigo: " << inimigo.get_nome() << endl;
    cout << "| Classe: " << jogador.get_classe() << "\t|\t" << endl;
    cout << "| Vitalidade: " << jogador.get_vitalidade() << "\t|\tVitalidade: " << inimigo.get_vitalidade() << endl;
    cout << "| Força: " << jogador.get_forca() << "\t\t|\tForça: " << inimigo.get_forca() << endl;
    cout << "| Stamina: " << jogador.get_stamina() << "\t\t|\tStamina: " << inimigo.get_stamina() << endl;
    cout << "| Inteligência: " << jogador.get_inteligencia() << "\t|\tInteligência: " << inimigo.get_inteligencia() << endl;
    cout << "| Sorte: " << jogador.get_sorte() << "\t\t|\tSorte: " << inimigo.get_sorte() << endl;
    cout << "+-------------------------------------------------------+\n";

    cout << "+-------------------------------------------------------+\n";
    cout << "|  O que você quer fazer?                               |\n";
    cout << "|  1 - Atacar                                           |\n";
    cout << "|  2 - Usar Item                                        |\n";
    cout << "|  3 - Fugir                                            |\n";
    cout << "+-------------------------------------------------------+\n";
};

template <class Atancante, class Defensor>                    // Usa tempalte só para definir que as classes são "genéricas"
void Combate::atacar(Atancante &atacante, Defensor &defensor) // Necessário passar via referência, já que uma classe é cópiada quando passada o parâmetro por valor
{
    int atacante_dado = Sistemas::roda_d20(atacante.get_sorte());
    int defensor_dado = Sistemas::roda_d20(defensor.get_sorte());

    int resultado = Sistemas::compara_dados(atacante_dado, defensor_dado);
    switch (resultado)
    {
    case 0:
        cout << endl;
        cout << "+-------------------------------------------------------+\n";
        cout << "| O " << defensor.get_nome() << " se esquivou ataque\n";
        cout << "+-------------------------------------------------------+\n";
        cout << endl;
        break;
    case 1:
        int dano_final = calc_dano(atacante.get_forca(), atacante.get_dano());
        defensor.set_vitalidade(defensor.get_vitalidade() - dano_final);

        cout << endl;
        cout << "+-------------------------------------------------------+\n";
        cout << "| O " << defensor.get_nome() << " recebeu " << dano_final << " de dano" << endl;
        cout << "+-------------------------------------------------------+\n";
        cout << endl;

        break;
    }
    sleep(3);
};
