

/*

Escrever um programa em C++ utilizando uma superclasse e duas
subclasses com pelo menos dois atributos cada. Criar um tema para as
classes e desenhar o UML incluindo também as interfaces de objetos e os
construtores. Escrever o código das classes. No main(), criar dois objetos
passando valores quaisquer para seus atributos através do método
construtor e em seguida os imprimir.





*/


/*
        //Desenho


                     //////////////////////
                     //       Livro      //
                     ///////////////////////
					 // - nome : string   // 
                     // - quantidade: int //
    ///////////////////////////////////////////////////////////////
    //                                                           //
    // +  <<create>> Livro(n: string, q: int)                    //
    /////////////////////////////////////////////////////////////// 
                                 /                                \
             ///////////////    /                                  \     //////////////          
             // Romance.h //   /                                    \    // Ficcao.h // 
                     |        /                                      \        |
               ////////////////////                                 //////////////
               //   Romance      //                                 //  Ficcao  //
               ////////////////////                                 //////////////////////                 
       ////////////////////////////////////                         // - codi: int      //
       // - codigo: int                  //                         // - prec: float    //
       // - preco: float                 //                         ////////////////////////////////////////////////////////////// 
 ///////////////////////////////////////////////////////////////    // + <<create>> Ficcao(c: int, p: float, n: string, q: int) //
 //                                                           //    //////////////////////////////////////////////////////////////
 // + <<create>> Romance(c: int, p: float, n: string, q: int) //
 ///////////////////////////////////////////////////////////////
                     

*/



#include <iostream>
#include <string>
using namespace std;
#include "Livro.h"
#include "Romance.h"
#include "Ficcao.h"

main()
{

 Ficcao ficcao(1370, 29.90, "A cabana", 30);
 Romance romance(123, 21.50, "A Culpa É das Estrelas", 5);
 
 cout << "\n\nLivros\n\n";
 
 cout << "\n\nFicção:"
 << "\nCódigo: " << ficcao.getC()
 << "\nNome: " << ficcao.getNome()
 << "\nPreço: " << ficcao.getP()
 << "\nQuantidade em estoque do livro: " << ficcao.getQuant()
 << endl;
 
 
 
 cout << "\n\nRomance:"
 << "\nCódigo: " << romance.getCod()
 << "\nNome: " << romance.getNome()
 << "\nPreço: " << romance.getPr()
 << "\nQuantidade em estoque do livro: " << romance.getQuant()
 << endl;
 
 
}
