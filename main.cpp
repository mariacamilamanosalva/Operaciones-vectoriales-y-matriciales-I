#include <iostream>
using namespace std;
void suma(int n, double A[], double B[], double C[]){
  //cout<<"(";
  for (int i=0;i<n;i++)
    C[i]=A[i]+B[i];
}
  //cout>>")";
void resta(int n, double A[], double B[], double C[]){
  //cout<<"(";
  for (int i=0;i<n;i++)
    C[i]=A[i]-B[i];
  }
  //cout>>")";
void producto_por_escalar(int n, double A[], double k, double C[]){
  //cout<<"(";
  for (int i=0;i<n;i++)
    C[i]=k*A[i];
}
  //cout>>")";
void producto_interno(int n, double A[], double B[]){
  //cout<<"(";
  double d=0;
  for (int i=0;i<n;i++)
    d+=A[i]*B[i];
  }
  //cout>>")";
void imprimir(int n, double C[]){
  //cout<<"(";
  for (int i=0;i<n;i++)
    cout<<C[i]<<",";
  //cout<<")";  
}
void ortogonalidad(int n, double A[], double B[]){
  //producto_interno(n,A,B);
  d= producto_interno(n,A,B);
  if (d!=0)
    cout<<"no son ortogonales"<<endl;
  else
    cout<<"si son ortogonales"<<endl;
}
int main(){
  int n=3; //tamaño de arrays
  double k=2.5; //escalar
  //dos arrays de entrada
  double A[3]={1,2,3};
  double B[3]={3,4,5.};
  //donde se guardan los resultados
  double C[3]={0,0,0};
  double d=0;
  //llamar las funciones
  suma(n,A,B,C);
  imprimir(3,C);
  resta(n,A,B,C);
  imprimir(3,C);
  cout<<"Producto de A*B "<<producto_interno(n,A,B)<<endl;
  ortogonalidad(n,A,B);
  return 0;  
  }