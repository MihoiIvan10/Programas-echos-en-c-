#include <iostream>
 
using namespace std;
 
long double calcular(int personas)
{
   long double p=1;
   for(int i=0;i<personas;i++)
   {
      p=p*(365-i)/365;
   }
   p=100*(1-p);
   return p;
}
 
int main() 
{
  int grupo;
  long double probabilidad;
  cout << "Introduce cuántas personas tiene el grupo : ";
  cin >> grupo;
  probabilidad = calcular(grupo);
  cout << "La probabilidad de que en un grupo de " << grupo << " personas, dos cumplan años el mismo día es de un " << probabilidad
  << "%" << endl;
  return 0;
}
