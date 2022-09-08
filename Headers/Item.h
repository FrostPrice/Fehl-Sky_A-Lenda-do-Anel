// Classes contendo informações dos Item
#ifndef ITEM_H // Se o arquivo não está definido. Usado para impedir conflito de arquivos
#define ITEM_H

using namespace std;
#include <string>

class Item
{
private:
    string nome;
    int valor;

public:
    Item();

    // Métodos
    void pocao_cura();

    // Getters
    string get_nome()
    {
        return nome;
    };
    int get_valor()
    {
        return valor;
    };

    // Setters
};

#endif // ITEM_H