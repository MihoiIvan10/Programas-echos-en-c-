#include <iostream>
using namespace std;
int main()
{
	float u[10],v[10];
	float punto[10]={0};
	float total=0;
	int n,m;
 	cout<<"valor del primer vector\n";
	cin>>n;
	cout<<"valor del segundo vector\n";
	cin>>m;
    if(n!=m)
    {
		cout<<"deben ser vectores del mismo tama�o\n";
 	}
	else{
		cout<<"llenado de vector 1\n";
		for(int i=0;i<n;i++)
		    cin>>u[i];
		cout<<"llenado de vector 2\n";
		for(int j=0;j<m;j++)
		   cin>>v[j];
 	}
 	for(int l=0; l<m;l++)	{
			punto[l]=u[l]*v[l];
    //cout<<"resultado:  "<<punto[l];
	total+=punto[l];
	}
 	cout<<endl;
	cout<<" producto punto: "<<total<<endl;
 }
