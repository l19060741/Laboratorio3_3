#include <iostream>
#include <string>
#include <stdlib.h>

#include "adc_h.hpp"

using namespace std;
/************************************************
*                 MAIN
************************************************/
int main(int argc, char** argv) {
	int i;
	
	cout<<"ARQUITECTURA DE PROGRAMACIÓN PARA HARDWARE"<<endl;
	cout<<"LABORATORIO 3"<<endl;
	cout<<"ANAHI GONZALEZ HOLGUIN"<<endl;
	cout<<"CONFIGURACION DEL ADC"<<endl;
	
	int numeroCanales;
	val2:
	cout<<"Introduzca el numero de canales (Opciones: 1-32)"<<endl;
    cin>>numeroCanales;
    if(numeroCanales>32||numeroCanales<1)
	{
        cout<<"Error. Ingresa un numero de canales valido"<<std::endl;
      	goto val2;
    }
    
    cout<<"Se activaron "<<numeroCanales<<" canales"<<endl;	
	ADC *adc1 = new ADC[numeroCanales];
	
	//CAPTURA DE LOS DATOS
	for (i=0;i<numeroCanales;i++)
	{
		cout<<"Canal numero "<<i+1<<endl;
		adc1[i].Captura();
	}
	  
	//SALIDA DE LOS DATOS  
	  for (int i=0;i<numeroCanales;i++)
	{	
		cout<<"Canal numero "<<i+1<<endl;
		adc1[i].MostrarDatos();
    }
	
	delete [] adc1;	
	
	return 0;
}

