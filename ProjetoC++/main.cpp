#include<iostream>
using namespace std;

#include "produto.h"
#include "presunto.h"
#include "queijo.h"
#include "salame.h"


float calcPrecoFinal(Produto prod)  //método friend
{ return prod.preco*1.4; }

main()
{	
	//bloco limitador 1
	{ 
		Produto p1 (111, "Camisa", 29.99); //Iniciando
		
		p1.mostraProduto();
		cout << "Preço Final: R$ " << calcPrecoFinal(p1) << endl;
	}
	//bloco limitador 2
	{ 
		Queijo q1 (0.5); //Iniciando
		Presunto *pr1= new Presunto("Sadia", 123, "Presunto", 9.5); // alocando memória para ponteiro tipo classe presunto	
		pr1->setPeso( pr1->calcPeso(q1) );
		
		pr1->mostraProduto();
		cout << "\nPreço Final: R$ " << calcPrecoFinal(*pr1)
		      << "\nTotal com embalagem: " << q1.calcTotal(2.35,3.5) << endl;	//usando a sobrecarga
		
		delete pr1;
	}
	//bloco limitador 3
	{
		Queijo q2 (0.9); //Iniciando
		Salame *s1= new Salame("Sadia", 1234, "Salame", 17.5);
		s1->setPeso( s1->calcPeso(q2) );
		
		s1->mostraProduto();
		cout	<< "\nPreço Final: R$ " << calcPrecoFinal(*s1) << endl;
		
		delete s1;
	}
}
