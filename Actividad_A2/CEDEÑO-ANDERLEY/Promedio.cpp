
//Anderley Arturo Cedeño Castro//

#include <iostream>
  using namespace std;
  int main()
	{
	float x,c=0,l=30,ca=0,cr=0;

	do
	{
      cout<<"Ingrese el promedio de los estudiantes"<<c+1<<" : ";
     	cin>>x;
        c=c+1;
	if(x>7)
	{
           ca=ca+1;
	}else{

        if(x<5){

                cr=cr+1; }
	}	
	
	}while(c<l);
	
	cout<<"Cantidad de estudiantes que aprueban : "<<ca<<endl;
	
       cout<<"Cantidad de estudiantes que reprueban : "<<cr<<endl;

	return (0);
	
	}

