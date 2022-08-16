#include<iostream>

#include<string>


using namespace std;

#include "Ex9.h"   //interface a ser implementada





		
//metodo construtor

    Caneta:: Caneta(string c, string t, float p){ seCor(c); seTipo(t); sePeso(p);}
     
	 //setter
	 
    void Caneta:: seCor(string c){ cor=c;}
    
    
   void Caneta:: seTipo(string t){ tipo=t;}
    
   void Caneta:: sePeso(float p){ peso=p;}
    
	//getter
	
    string Caneta::geCor(){ return cor; }
    
    string Caneta::geTipo(){ return tipo; }
    
    float Caneta::gePeso(){ return peso; }
    

    
//fim das implementações

