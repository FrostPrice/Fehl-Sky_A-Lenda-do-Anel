#include "../Headers/Inventario.h"
#include "./item.cpp"

using namespace std;
#include <iostream>

Inventario::Inventario()
{
    capacidade = 10;
    numero_de_Item = 0;
    Item Item_no_inventario;
};

// Métodos
void Inventario::inicializa()
{
    for (int i = 0; i < 10; i++)
    {
        cout << Item_no_inventario[i].get_nome();
    };
};