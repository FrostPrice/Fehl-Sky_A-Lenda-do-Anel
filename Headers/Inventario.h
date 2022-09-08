// Classes contendo informações dos INVENTARIO
#ifndef INVENTARIO_H // Se o arquivo não está definido. Usado para impedir conflito de arquivos
#define INVENTARIO_H

#include "Item.h"

class Inventario
{
private:
    int capacidade;
    int numero_de_items;
    Item item_no_inventario[10];

public:
    Inventario();

    // Métodos
    void inicializa();
    void adiciona_item(Item &item);
    void remove_item();

    // Getters
    int get_numero_de_items()
    {
        return numero_de_items;
    };
    Item get_item_no_inventario(int index)
    {
        return item_no_inventario[index];
    };

    // Setters
};

#endif // INVENTARIO_H