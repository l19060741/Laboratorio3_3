#ifndef ADC_HPP
#define ADC_HPP
#include<iostream>
#include <string>
#include <stdlib.h>
using namespace std;
/************************************************
*                 CLASE
************************************************/
class ADC{
	private:
  
		int _num;		
		int _resolution;
		int _Fs;
		float _lectura;
		float _lectura_v;
		
	public:
		int _canal;
		int _numeroCanales;

		ADC(int, int, int, float, float, int, int);	// CONSTRUCTOR1
		ADC();										// CONSTRUCTOR2
		//GETTERS
		int getNumCanales();
		int getResolution();
		int getFs();
				
		//METODOS
		void Captura();	
		void MostrarDatos();			
};
#endif
