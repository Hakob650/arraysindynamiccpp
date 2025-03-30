#include <iostream>
using namespace std;
int main(){
	int m,a,b;
	cout<<"mutqagreq matrici chapy: ";
	cin>>m;
	cout<<"mutqagreq [a,b] mijakayqy: ";
	cin>>a>>b;
	double** matrix=new double*[m];
	for(int i=0;i<m;i++){
		matrix[i]=new double[m];
	}cout<<"mutqagreq matrici tarrery: ";
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cin>>*(*(matrix+i)+j);
		}
	}double *X=new double[m*m];
	int Xsize=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			double value=*(*(matrix+i)+j);
			double square=value*value;
			if(square>=a&&square<=b){
				X[Xsize++]=value;
			}
		}
	}cout<<"X vektor@";
	for(int i=0;i<Xsize;i++){
		cout<<*(X+i);
	}cout<<endl;
       	delete[] X;
	for(int i=0;i<m;i++){
		delete[] *(matrix+i);
	   }delete[] matrix;
	return 0;
}
