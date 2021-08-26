#include <iostream> // Arquivo padrão de todo codigo CPP.
#include <fstream> // Arquivo que permite o CPP criar arquivos.

using namespace std; //Definição de string para todo o arquivo.

int main() {
  // Criação do arquivo README.md e abertura dele para que o CPP edite somente o arquivo abaixo.
  // A extensão pode ser qualquer, assim como que nele será escrito.
  ofstream Readme("README.md");

  // Define o que será escrito no arquivo.
  string Words0 = "# C++ ![image](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white) \n Este é um repositorio, com alguns conceitos basicos de CPP(C++)";
  string Words1 = "com alguns codigos simples e funcionais que demonstram o funcionamento da ";
  string Words2 = "linguagem \n ## Utilização \n primeiro compile o arquivo desejado e em seguida";
  string Words3 =" execulte-o no terminal como por exemplo \n ```BASH ./inheritance``` \n ## License ";
  string Words4 = "\n None, espero que possa ser util para você 😃";
  string Words = ( Words0 + Words1 + Words2 + Words3 + Words4); //Concatenação fiz assim pois o texto era muito grande 
  // assim tornei ele mais legivel

  Readme << Words;
 

  // Fecha o arquivo, ou seja o CPP não modificará mais o README.md.
  Readme.close();

  //Sendo assim é possivel criar outro arquivo totalmente diferente.

  // Criação do arquivo index.py.

  ofstream HelloWorld("index.py");

  // Define o que será escrito no arquivo, nesse caso um Hello World.
  HelloWorld << "print('Hello World')";

  // Fecha o arquivo, ou seja o CPP não modificará mais o index.py.
  HelloWorld.close();
}