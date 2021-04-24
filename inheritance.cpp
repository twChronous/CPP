#include <iostream> // Arquivo padrão de todo codigo CPP.

using namespace std;//Definição de string para todo o arquivo.

// Classe base
class MyClass {
  public: // Retorna uma função publica.
    void myFunction() { 
      cout << "lorem yepslum. \n" ;
    }
};

// Outra classe base.
class MyOtherClass {
  public: // Retorna uma função publica também.
    void myOtherFunction() {
      cout << "lorem yepslum mais uma vez. \n" ;
    }
};

// Classe derivada MyChildClass.
class MyChildClass: public MyClass, public MyOtherClass {
};

// Classe derivada MyGrandChild.
class MyGrandChild: public MyChildClass {
};


int main() {
  // Pega a classe derivada MyGrandChild
  MyGrandChild myObj;
  // Pega a função dá classe MyClass por meio do processo de inheritance, "Passar de pai para filho".
  myObj.myFunction();

  // Pega a função dá classe MyOtherClass por meio do processo de inheritance também.
  myObj.myOtherFunction();

  return 0;
}