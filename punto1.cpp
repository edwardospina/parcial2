#include <iostream>
#include <math.h>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
	int n,p;
	
	cout<<"Calculo del promedio de dos valores de una matriz nxn de su numero mayor y menor"<<endl;
	cout<<"********************************************************************************"<<endl<<endl;
    cout<<"tenga en cuenta que los valores saldran aleatoriamente"<<endl<<endl;
    cout<<"por favor ingrese el valor n que desea de la matriz"<<endl;
	cin>>n;
	
	int promedio[n][n], M=0, m=0;
	
	for(int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			promedio[i][j] = 2 + rand() % 20;
		}
	}
	
	cout<<endl;
	
	for(int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			cout<<setw(3)<<promedio[i][j]<<" ";
		}cout<<endl;
	}
	
	cout<<endl;
	
	M=promedio[0][0];
	for(int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if(M<promedio[i][j])
			{
				M=promedio[i][j];
			}
		}
	}
			
	cout<<"el numero mayor de la matriz es: "<<M<<endl<<endl;
		
	m=promedio[0][0];
	for(int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if(m>promedio[i][j])
			{
				m=promedio[i][j];
			}
		}
	}
			
	cout<<"el numero menor de la matriz es: "<<m<<endl<<endl;
	
	p=(M+m)/2;
	
	cout<<"el promedio de estos dos numeros es: "<<p<<endl<<endl;	
		
	system("pause");	
	return 0;
}