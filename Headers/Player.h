#ifndef PLAYER_H // Se o arquivo não está definido. Usado para impedir conflito de arquivos
#define PLAYER_H

using namespace std;
#include <string>

#include "Inventario.h"

class Player
{
private:
    string nome;
    string classe;
    int vitalidade, forca, stamina, inteligencia, sorte;
    int dano, defesa;
    Inventario inventario;

public:
    Player();

    // Métodos
    void criacao_player();

    // Getters
    string get_nome()
    {
        return nome;
    };
    string get_classe()
    {
        return classe;
    };
    int get_vitalidade()
    {
        return vitalidade;
    };
    int get_forca()
    {
        return forca;
    };
    int get_stamina()
    {
        return stamina;
    };
    int get_inteligencia()
    {
        return inteligencia;
    };
    int get_sorte()
    {
        return sorte;
    };
    int get_dano()
    {
        return dano;
    };
    int get_defesa()
    {
        return defesa;
    };
    Inventario get_inventario()
    {
        return inventario;
    }

    // Setters
    void set_nome(string novo_nome)
    {
        nome = novo_nome;
    };
    void set_vitalidade(int nova_vitalidade)
    {
        vitalidade = nova_vitalidade;
    };
    void set_inventario(Inventario novo_inventario)
    {
        inventario = novo_inventario;
    }
};

#endif // PLAYER_H