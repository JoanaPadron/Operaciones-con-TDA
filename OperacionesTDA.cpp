#include <iostream>
using namespace std;
class operaciones{
 public:
 double numero1,numero2, resultado;
 operaciones(){//constructor
 numero1=0;
 numero2 =0;
 resultado=0;
 }//cierra constructor
 void Bienvenida();
 void Opciones(double,double);
 void Pedir();
 double Suma(double, double);
 double Resta(double,double);
 double Multiplicacion(double,double);
 double Division(double,double);
};

void operaciones::Bienvenida(){
 cout<<"Bienvenido (a) a la calculadora de operaciones basicas"<<endl;
 Pedir();
}

void operaciones::Pedir(){
 cout<<"Teclee el primer numero: "<<endl;
 cin>>numero1;
 cout<<"Teclee el segundo numero: "<<endl;
 cin>>numero2;
 Opciones(numero1,numero2);
}

void operaciones::Opciones(double num1,double num2){
 int opc;
 cout<<"Teclee el numero de la opcion que desee"<<endl;
 cout<<"******* 1. Suma *******"<<endl;
 cout<<"******* 2. Resta *******"<<endl;
 cout<<"******* 3. Multiplicacion *******"<<endl;
 cout<<"******* 4. Division *******"<<endl;
 cin>>opc;
 
 switch(opc){
 case 1:
 resultado = Suma(num1,num2); // invocacion de suma
 cout<<"el resultado es: "<<resultado<<endl;
 break;
 
 case 2:
 resultado = Resta(num1,num2);
 cout<<"El resultado es: "<<resultado<<endl;
 break;
 
 case 3:
 resultado = Multiplicacion(num1,num2);
 cout<<"El resultado es: "<<resultado<<endl;
 break;
 
 case 4:
 resultado = Division(num1, num2);
 cout<<"El resultado es: "<<resultado<<endl;
 break;
 }
}

double operaciones::Suma(double n1, double n2){
 return n1+n2;
}
double operaciones::Resta(double n1,double n2){
 return n1-n2;
}
double operaciones::Multiplicacion(double n1,double n2){
return n1 * n2;
}
double operaciones::Division(double n1,double n2){
return n1 / n2;
}
int main(){
 operaciones *obj = new operaciones();
 obj->Bienvenida();
 return 0;
}
