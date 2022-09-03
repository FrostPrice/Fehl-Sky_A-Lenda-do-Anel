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
    // TODO: Refatorar
    void excalibur();
    void cajado();
    void arco();
    void anel();

    // Getters
    string get_nome()
    {
        return nome;
    };

    // Setters
};

#endif // ITEM_H