#include <iostream> // Arquivo padrão de todo codigo CPP.

using namespace std; //Definição de string para todo o arquivo.

int main()
{
    int Ano;
    cout << "Digite o ano em que você nasceu: \n";
    cin >> Ano;
    if (Ano < 1930) {
        cout << "Você precisa inserir o ano no formato YYYY, por exemplo 1964\n";
        return 0;
    }
    cout << "Você tem " << 2021 - Ano << " anos de idade! \n";
    cout << "Você irá fazer 100 anos em: " << Ano + 100 << endl;
    if (Ano >= 1965 && Ano <= 1984)
        cout << "Você pertence à Geração X \n";
    else if (Ano >= 1985 && Ano <= 1999)
        cout << "Você pertence à Geração Y \n";
    else if (Ano >= 2000 && Ano <= 2010)
        cout << "Você pertence à Geração Z \n";
    else if (Ano >= 2011 && Ano <= 2020)
        cout << "Você pertence à Geração Alpha/Millenials \n";
    else
        cout << "Sua geração é desconhecida \n";

    cout << "Para ter uma vida saudavél é importante realizar exercicios diariamente e ter uma alimentação saudavel\n";
}