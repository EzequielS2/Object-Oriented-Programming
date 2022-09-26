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
		
		friend class Presunto; //classe amiga: manipula��o livre dos m�todos de Presunto e Salame
		friend class Salame;
};

#endif
