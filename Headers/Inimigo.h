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
    void spawnar_inimigo();
    void spawnar_mago();
    void spawnar_golem();
    void spawnar_chefao_final();

    // Getters
    string get_nome()
    {
        return nome;
    };

    // Setters
};

#endif // INIMIGO_H