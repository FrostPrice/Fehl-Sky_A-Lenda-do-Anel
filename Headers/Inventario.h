// Classes contendo informações dos INVENTARIO
#ifndef INVENTARIO_H // Se o arquivo não está definido. Usado para impedir conflito de arquivos
#define INVENTARIO_H

#include "Item.h"

class Inventario
{
private:
    int capacidade;
    int numero_de_Item;
    Item Item_no_inventario[10];

public:
    Inventario();

    // Métodos
    void inicializa();

    // Getters

    // Setters
};

#endif // INVENTARIO_H