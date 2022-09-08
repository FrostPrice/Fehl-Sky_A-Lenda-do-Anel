using namespace std;
#include <iostream>

#include "../Headers/Inventario.h"
#include "../Headers/Item.h"

Inventario::Inventario()
{
    capacidade = 10;
    numero_de_items = 0;
    Item item_no_inventario;
};

// Métodos
void Inventario::inicializa()
{
    // Adiciona 3 poções de cura no inventário do Player
    for (int i = 0; i < 3; i++)
    {
        Item item;
        item.pocao_cura();
        adiciona_item(item);
    }
};

void Inventario::adiciona_item(Item &item)
{
    if (numero_de_items <= capacidade)
    {
        item_no_inventario[numero_de_items] = item;
        numero_de_items++;
    }
    else
    {
        cout << "+-------------------------------------------------------+\n";
        cout << "| Você não possui mais espaço no inventário             |";
        cout << "+-------------------------------------------------------+\n";
    }
};

void Inventario::remove_item() // Como possuímos somente 1 item criado, não há necessidade de criar um algoritmo complexo
{
    Item item_vazio;
    item_no_inventario[numero_de_items - 1] = item_vazio; // Altera o último item para um item vazio
    numero_de_items--;
};