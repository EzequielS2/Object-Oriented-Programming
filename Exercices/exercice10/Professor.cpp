#include <iostream>
#include<string>


using namespace std;

#include "Pessoa.h"

#include "Professor.h"


using namespace std;

		Professor::Professor(float sl, int si, string n, string f):
		Pessoa(n, f){setSal(sl); setSi(si);}
			
		float Professor::getSal(){return sal;}
		
		int Professor::getSi(){return siape;}
		
			
		void Professor::setSal(float sl){sal=sl;}
		
		void Professor::setSi(int si){siape=si;}
		
