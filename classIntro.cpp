#include <iostream> // Arquivo padrão de todo codigo CPP.

using namespace std; //Definição de string para todo o arquivo.

class Car {        // A classe.
  public:          // Especificador de acesso (Public, Private e Protected).
    string marca;  // Atributos.
    string modelo;  
    int ano;      
    Car(string x, string y, int z) { // Constructor com  alguns parametros.
      marca = x;
      modelo = y;
      ano = z;
    }
};
/**
 * Outra maneira de se fazer uma classe, porem com o constructor fora dela.
    public:        //  Especificador de acesso (Public, Private e Protected).
    string marca;  // Atributos.
    string modelo;  
    int ano;      
    Car(string x, string y, int z); // Declaração do constructor.
};

// Definição do constructor, porem fora da classe.
Car::Car(string x, string y, int z) {
  marca = x;
  modelo = y;
  ano = z;
}
*/

int main() {
  string Marca, Modelo; // Definindo as variaveis.
  int Ano;

  //Pegando as informações que vem do terminal.
  cout << "Diga qual é a marca do carro: \n";
  getline (cin, Marca); // Pegando a informação que o usuario deu e atribuindo as variaveis definidas acima.
  cout << "Diga qual é o modelo do carro: \n";
  getline (cin, Modelo); // Pegando a informação que o usuario deu e atribuindo as variaveis definidas acima.
  cout << "Diga qual é o ano do carro: \n";
  cin >> Ano; // Pegando a informação que o usuario deu e atribuindo as variaveis definidas acima,
  // porém somente  a primeira palavra, nesse caso numero

  // Criando o objeto carObject.
  Car carObject(Marca, Modelo, Ano);

  // Escrevendo no terminal os atributos do objeto.
  cout << "O carro é um: \n" << carObject.marca << " " << carObject.modelo << " " << carObject.ano << "\n";
}