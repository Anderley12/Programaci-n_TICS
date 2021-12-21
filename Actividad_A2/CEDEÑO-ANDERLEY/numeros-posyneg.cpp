/*Anderley Cedeño Castro*/

#include <iostream>
using namespace std;

	int main()

	{
	
	float x,c=0,l,s=0,si=0,se=0;
	cout<<" Cuantos son los  valores a ingresar : ";
	cin>>l;

	do{

	cout<<" Ingrese los valores : ";
	cin>>x;
	
		c=c+1;
		s=s+x;                                                            
		if(x>0)
		{
			si=si+x;
		}else{
			se=se+x;
		}
	}while(c<l);

	cout<<" El saldo que tuvo de egresos es : "<<se<<endl;

	cout<<" El saldo que tuvo ingresos es : "<<si<<endl;

	cout<<" El saldo que tiene en total es : "<<s<<endl;

	return (0);

	}
