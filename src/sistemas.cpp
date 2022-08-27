// Esse arquivo vai conter as funções gerais de funcionalidade do jogo (como por exemplo, começar jogo)
#include <iostream>
#include <fstream>
using namespace std;

class Sistemas
{
    void menu_principal()
    {
        cout << "Bem-Vindo ao\n";
    };

public:
    void ler_db_csv()
    {
        ifstream db;
        db.open("db.csv", ios_base::in);

        // TODO: Ler dados do db.csv e retonar as informações relevantes

        db.close();
    };
};