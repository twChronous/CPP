#include <iostream> // Arquivo padrão de todo codigo CPP.

using namespace std; //Definição de string para todo o arquivo.

// Classe animal
class Animal {
  public:
    void animalSound() {
    cout << "Qee som os animais fazem? \n" ;
  }
};

// Classe derivada (Pig).
class Pig : public Animal {
  public:
    void animalSound() {
    cout << "O porco faz: honk honk \n" ;
   }
};

// Classe derivada (Dog).
class Dog : public Animal {
  public:
    void animalSound() {
    cout << "O cachorro faz: bow wow \n" ;
  }
};

int main() {

  // Cria objetos das respectivas classes 
  Animal myAnimal;
  Pig myPig;
  Dog myDog;

 // Execulta funçoes das respectivas classes
  myAnimal.animalSound();
  myPig.animalSound();
  myDog.animalSound();
  return 0;
}