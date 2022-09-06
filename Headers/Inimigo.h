// Todas as funcões e Item relacionados com os inimigos
#ifndef INIMIGO_H // Se o arquivo não está definido. Usado para impedir conflito de arquivos
#define INIMIGO_H

using namespace std;
#include <string>

class Inimigo
{
private:
    string nome;
    int vitalidade, forca, stamina, inteligencia, sorte;
    int dano, defesa;

public:
    Inimigo();

    // Métodos
    void spawnar_inimigo_aleatorio();
    void spawnar_mago();
    void spawnar_ladrao_de_tumulos();
    void spawnar_bandido_chefe();
    void spawnar_golem();
    void spawnar_chefao_final();

    // Getters
    string get_nome()
    {
        return nome;
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
    // Setters
    void set_vitalidade(int nova_vitalidade)
    {
        vitalidade = nova_vitalidade;
    };
};

#endif // INIMIGO_H