#include <unistd.h> // Para poder usar a função sleep

#include "../Headers/Helpers.h"
#include "../Headers/Sistemas.h"
#include "../Headers/Combate.h"
#include "../Headers/Player.h"
#include "../Headers/Inimigo.h"

Combate::Combate(){}; // Só para instanciar essa classe

int Combate::calc_dano(int forca, int dano_arma, int sorte)
{
    int dano_final = 0;
    dano_final = forca + dano_arma;

    int chance_critico = Sistemas::roda_d20(sorte);
    if (chance_critico >= 19)
    {
        dano_final *= 2;
    }

    return dano_final;
};

void Combate::combate(Player &jogador, Inimigo inimigo, bool pode_fugir)
{
    bool em_combate = true;
    while (jogador.get_vitalidade() > 0 && inimigo.get_vitalidade() > 0 && em_combate == true)
    {
        mostrar_status_combate(jogador, inimigo);

        int input_usuario;
        input_usuario = Helpers::solicita_input_usuario("Escolha entre 1, 2 ou 3: ", 3);

        switch (input_usuario)
        {
        case 1:
            atacar(jogador, inimigo); // Jogador Ataca

            if (inimigo.get_vitalidade() <= 0)
            {
                break; // Sair do loop antes que o inimigo morto possa atacar
            }

            cout << "+-------------------------------------------------------+\n";
            cout << "| O seu oponente está atacando. Aguarde...              |\n";
            cout << "+-------------------------------------------------------+\n";
            sleep(1);                 // Para a execução do programa em 1 segundo
            atacar(inimigo, jogador); // Inimigo Ataca

            break;
        case 2:
            usar_item(jogador); // Usa item de cura

            break;

        case 3:
            if (pode_fugir)
            {
                fugir(jogador, inimigo, em_combate); // Jogador tenta fugir
            }
            else
            {
                cout << endl;
                cout << "+-------------------------------------------------------+\n";
                cout << "| Você não pode fugir desta luta!                       |\n";
                cout << "+-------------------------------------------------------+\n";

                cout << "+-------------------------------------------------------+\n";
                cout << "| O seu oponente está atacando. Aguarde...              |\n";
                cout << "+-------------------------------------------------------+\n";
                sleep(1);
                atacar(inimigo, jogador); // Inimigo Ataca
            }

            break;
        }
    }

    if (inimigo.get_vitalidade() <= 0)
    {
        chance_item(jogador);
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
    cout << "|  O que você quer fazer?                                \n";
    cout << "|  1 - Atacar                                            \n";
    cout << "|  2 - Usar Item de Cura"
         << " (" << jogador.get_inventario().get_numero_de_items() << ")"
         << "\n";
    cout << "|  3 - Fugir                                             \n";
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
        int dano_final = calc_dano(atacante.get_forca(), atacante.get_dano(), atacante.get_sorte());
        defensor.set_vitalidade(defensor.get_vitalidade() - dano_final);

        cout << endl;
        cout << "+-------------------------------------------------------+\n";
        cout << "| O " << defensor.get_nome() << " recebeu " << dano_final << " de dano" << endl;
        cout << "+-------------------------------------------------------+\n";
        cout << endl;

        break;
    }
    sleep(2); // Para a execução do programa em 2 segundos
};

void Combate::usar_item(Player &jogador)
{
    Inventario inventario = jogador.get_inventario();
    if (inventario.get_numero_de_items() <= 0)
    {
        system("clear");
        cout << "+-------------------------------------------------------+\n";
        cout << "| Você não possui nenhum item no inventario!            |\n";
        cout << "+-------------------------------------------------------+\n";
        sleep(2);
    }
    else
    {
        int item_valor = inventario.get_item_no_inventario(inventario.get_numero_de_items() - 1).get_valor();
        jogador.set_vitalidade(jogador.get_vitalidade() + item_valor);
        inventario.remove_item();
        jogador.set_inventario(inventario);
    }
};

void Combate::fugir(Player &jogador, Inimigo &inimigo, bool &em_combate)
{
    int jogador_dado = Sistemas::roda_d20(jogador.get_sorte());
    if (jogador_dado >= 18)
    {
        system("clear");
        cout << endl;
        cout << "+-------------------------------------------------------+\n";
        cout << "| Você conseguiu fugir com sucesso                      |\n";
        cout << "+-------------------------------------------------------+\n";
        cout << endl;
        sleep(2); // Para a execução do programa em 2 segundo

        em_combate = false;
    }
    else
    {
        system("clear");
        cout << endl;
        cout << "+---------------------------------------------------------+\n";
        cout << "| Você esbarra e cai no chão...                           |\n";
        cout << "| Não conseguiu fugir da luta :(                          |\n";
        cout << "+---------------------------------------------------------+\n";

        cout << "+-------------------------------------------------------+\n";
        cout << "|  O seu oponente está atacando. Aguarde...             |\n";
        cout << "+-------------------------------------------------------+\n";
        sleep(1);                 // Para a execução do programa em 1 segundo
        atacar(inimigo, jogador); // Inimigo Ataca
    }
};

void Combate::chance_item(Player &jogador)
{
    int jogador_dado = Sistemas::roda_d20(jogador.get_sorte());

    if (jogador_dado >= 0)
    {
        Inventario inventario = jogador.get_inventario();

        Item item;
        item.pocao_cura();

        inventario.adiciona_item(item);
        jogador.set_inventario(inventario);

        system("clear");
        cout << "+-------------------------------------------------------+\n";
        cout << "| Após derrotar seu oponente, Você achou...             |\n";
        cout << "| - 1 Poção de Cura                                     |\n";
        cout << "+-------------------------------------------------------+\n";
        sleep(2);
    }
}