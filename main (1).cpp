#include <iostream>
using namespace std;

void suma(int n,int m,double A[][3],double B[][3],double D[][3]){
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			D[i][j]=A[i][j]+B[i][j];
}
void resta(int n,int m,double A[][3],double B[][3],double D[][3]){
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			D[i][j]=A[i][j]-B[i][j];
}
void multiplicar_escalar(int n,int m,double A[][3],double k,double D[][3]){
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			D[i][j]=A[i][j]*k;
}
void multiplicar_matriz(int n,int m,double A[][3],double B[][3],double D[][3]){
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			D[i][j]=A[i][j]*B[i][j];
}
void imprimir(int n, int m, double D[][3]){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cout<<D[i][j]<<" ";
		cout<<endl;
	}
}
int main(){
	int n=2;//numero de filas
	double A[n][3]={{1,2,3},{4,5,6}};
	double B[n][3]={{6,5,4},{3,2,1}};
	int m=3;
	double C[m][2]={{1,2},{3,4},{5,6}};
	double k=2.5;
	//salida
	double D[n][3];
	//Mostramos en pantalla las matrices:
	cout<<"A=";
	imprimir(n,m,A);
	cout<<"B=";
	imprimir(n,m,B);
	cout<<"C=";
	imprimir(m,n,C);
	//Suma
	cout<<"Suma de A y B"<<endl;
	suma(n,m,A,B,D);
	imprimir(n,m,D);
	//Resta
  resta(n,m,A,B,D);
	//Multiplicación por escalar
  multiplicar_escalar(n,m,A,k,D);
	//Multiplicación de matrices
  multiplicar_matriz(n,m,A,B,D);
	return 0;
}