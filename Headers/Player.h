#ifndef PLAYER_H // Se o arquivo não está definido. Usado para impedir conflito de arquivos
#define PLAYER_H

#include "./Inventario.h"

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
    // region: Atributos do Personagem
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
    // endregion: Atributos do Personagem

    // Setters
    void set_nome(string nome)
    {
        this->nome = nome;
    };
};

#endif // PLAYER_H