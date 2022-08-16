

/*

 Escrever um programa em C++ utilizando a classe Produto da lista do
exercício 8 como uma superclasse. Acrescentar duas subclasses de
produtos quaisquer, com pelo menos dois atributos cada. Desenhar o UML
incluindo também as interfaces de objetos e os construtores. Escrever o
código das classes. No main(), criar dois objetos passando valores quaisquer
para seus atributos através do método construtor e em seguida os imprimir.




*/


/*
        //Desenho


                     ///////////////////////
                     //       Produto     //
                     ///////////////////////
					 // - nome : string   // 
                     // - preco: float    //
    ///////////////////////////////////////////////////////////////
    //                                                           //
    // +  <<create>> Produto(c: int, n: string, preco: float)   //
    /////////////////////////////////////////////////////////////// 
                                 /                                \
             ///////////////    /                                  \     //////////////          
             //   Fruta.h //   /                                    \    //  Carro.h // 
                     |        /                                      \        |
               ////////////////////                                 //////////////
               //   Fruta        //                                 //  Carro   //
               ////////////////////                                 //////////////////////                 
       ////////////////////////////////////                         // - tanque: float  //
       // - duracao: int                 //                         // - portas: int    //
       // - peso: float                  //                         ///////////////////////////////////////////////////////////////////////////////// 
 ///////////////////////////////////////////////////////////////    // + <<create>>  Carro(port: int, tan: float, c: int, nom: string, pre: float) //
 //                                                           //    /////////////////////////////////////////////////////////////////////////////////
 //                                                            /////////////////   
 // + <<create>>   Fruta(d: int, pes: float, c: int, nom: string, pre: float) //
 ///////////////////////////////////////////////////////////////////////////////
                     

*/



#include <iostream>
#include <string>
using namespace std;
#include "Produto.h"
#include "Carro.h"
#include "Fruta.h"

int main()
{

 Carro carro(4, 35.1, 123, "Hyundai HB20", 60000);
 Fruta fruta(5, 0.144, 321,"Laranja", 0.25);
 
 cout << "\n\nFruta:"
 << "\n:Nome: " << fruta.getNome()
 << "\nCódigo: " << fruta.getCod()
 << "\nDuração da fruta em dias: " << fruta.getDuracao()
 << "\nPeso: " << fruta.getPeso()
 << "\nPreço: " << fruta.getPreco()
 << "\nPreço final: " << carro.CalcPrecoFinal()
 << endl;
 
 
 
 cout << "\n\nCarro:"
 << "\n:Nome: " << carro.getNome()
 << "\nCódigo: " << fruta.getCod()
 << "\nQuantidade de portas: " << carro.getPortas()
 << "\nTanque em litros: " << carro.getTanque()
 << "\nPreço: " << carro.getPreco()
 << "\nPreço final: " << carro.CalcPrecoFinal()
 << endl;
 
 
}
