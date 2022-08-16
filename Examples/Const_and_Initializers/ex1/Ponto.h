#include<iostream>
using namespace std;
class Ponto{
	private:
		const float y;
		const float x;
		
	public:
		Ponto(float,float);
		
		~Ponto();
		
		float getX() const;
		float getY() const;
		void setX(float);
		void setY(float);
		float CalcDist() const;
	};
