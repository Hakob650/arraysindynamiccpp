#include <iostream>
using namespace std;
int main(){
	int m;
	cout<<"mutqagreq matrici chapy: ";
	cin>>m;
	double** X=new double*[m];
	for(int i=0;i<m;i++){
		X[i]=new double[m];
	}cout<<"mutqagreq matrici tarrery: ";
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cin>>(*(*(X+i)+j));
		}
	}double* B=new double[m];
	for(int i=0;i<m;i++){
		*(B+i)=(*(*(X + i) + 0) * *(*(X + i) + 0)) + (*(*(X + i) + m - 1) * *(*(X + i) + m - 1));
	}for(int i=0;i<m;i++){
		cout<<*(B+i)<<" ";
	}cout<<endl;
	delete[] B;
	for(int i=0;i<m;i++){
		delete[] *(X+i);
	}delete[] X;
	return 0;
}

