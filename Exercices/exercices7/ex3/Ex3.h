#include<iostream>

using namespace std;

class Operacao
{
	private:
	
	int a, b;

	public:
	
	
	
	Operacao(int k, int n){setAB(k,n);}
	
	
	
	void setAB(int NewA, int NewB){a=NewA;b=NewB;}
	
	
	
		
	int soma()
	{
	
	
		return a+b;
	}


	int subtracao()
	{
		
	
		return a-b;
	}


	int multiplicacao()
	{
		
	
		return a*b;
	}

	int divisao()
	{
		

		return a/b;
	}
	
	int Op()
	{
		return(soma()+subtracao() - (multiplicacao()+divisao()));
	}
};

