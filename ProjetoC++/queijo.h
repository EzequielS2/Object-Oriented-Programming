#ifndef QUEIJO_H
#define QUEIJO_H

class Queijo
{	protected:
		float peso;
	
	public:
		Queijo(float);
		~Queijo();
		
		float getPeso() const;
		void setPeso(float);
		
		//sobrecarga
		float calcTotal(float embalagem, float entrega) const;
		
		friend class Presunto; //classe amiga: manipulação livre dos métodos de Presunto e Salame
		friend class Salame;
};

#endif
