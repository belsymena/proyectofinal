//hecho por belsy jhossira mena renteria y karen medina
#include <iostream>
#include <string.h>
using namespace std;

int DiasDelMes (int mes,int a);
bool Bisiesto(int a);
int zeller(int ano,int mes, int dia);

int DiasDelMes (int mes,int a)
    {
    
    if ( mes == 1||mes == 3|| mes == 5|| mes == 7|| mes == 8||mes == 10||mes == 12)
    return 31;
    if (mes == 2){
    if(Bisiesto (a) == true)
    return 29;
    else return 28;
    
    }
    return 30;
    
}


bool Bisiesto(int a){
    if(a%4 != 0) return false;
    else if(a%100 != 0) return true;
    else if(a%400 != 0) return false;
    return true;

}

int zeller(int ano,int mes, int dia)
{
    int a = (14-mes)/12;
    int y = ano - a;
    int m = mes + 12*a - 2;

    int d = (dia + y+ y/4 - y/100 + y/400 + (31*m)/12)%7;
    return d;
}

int main()
{
    int dia;
    int a;
    cout<<" digite la temporada "<<endl<<"ejemplo: 2020 = ";
    cin>>a;
    string m[] = {"enero","febrero","marzo","abril","mayo","junio",
    "julio","agosto","septiembre","octubre","noviembre","diciembre "};
    for (int mes=1; mes<=12; mes++)
    {
        cout<<endl;
        cout<<"mes: "<<m[mes-1]<<endl;
        cout<<"dom lun mar mie jue vie sab "<<endl;
        int x = zeller(a,mes,1);
        for(int i = 0 ;i < x ;i++)
        {
            cout<<"    ";
        }
        int dias_mes_actual = DiasDelMes(mes,a);
        for (int dia=1;dia<=dias_mes_actual;dia++)
        {
            if (dia<10)cout<<dia<<"   ";
            else cout<<dia<<"  ";
            x++;
            if (x %7 == 0)cout<<endl;
            
        }
        
    }cout<<endl<<endl;
    
  

  
   struct calendario
{
    string mes;
    string dia;
    string texto;
}
;



    
    struct calendario e;
    cout<<" digite el mes ";
    cin>>e.mes;
    cout<<"digite el dia ";
    cin>>e.dia;
    cout<<"escriba la actividad que desea realizar en esta fecha "<<endl<<"por favor separe las palabras con guiones (-): ";
    cin>>e.texto;

    cout << "la temporada ingresada es= " << a << endl;
    cout << "el mes ingresado es= " << e.mes << endl;
    cout << "El dia ingresado es= " << e.dia << endl;
    cout << "la actividad ingresada es= " << e.texto << endl;
  
int x;    
cout<< "Desea continuar con el programa"<<endl;
cout<< "ingrese \n 1. SI  	\n 2. NO"<<endl;
cin>> x;  

if (x==1)
{
while (x==1)
{
struct calendario e;
    cout<<" digite el mes: ";
    cin>>e.mes;
    cout<<"digite el dia: ";
    cin>>e.dia;
    cout<<"escriba la actividad que desea realizar en esta fecha "<<endl<<"por favor separe las palabras con guiones (-): ";
    cin>>e.texto;

    cout << "la temporada ingresada es= " << a << endl;
    cout << "el mes ingresado es= " << e.mes << endl;
    cout << "El dia ingresado es= " << e.dia << endl;
    cout << "la actividad ingresada es= " << e.texto << endl;	
	cout<< "Desea continuar con el programa"<<endl;
cout<< "ingrese \n 1. SI  	\n 2. NO"<<endl;
cin>> x;  
}
if(x==2)
{
	cout <<"fin del programa"<<endl;
	
}

}
return 0;
}
  

