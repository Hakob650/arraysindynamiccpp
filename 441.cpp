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
			cin>>*(*(X+i)+j);
		}
	}double* B=new double[m];
	for(int i=0;i<m;i++){
		*(B+i)=(*(*(X + i) + i) + *(*(X + i) + (m - i - 1)))/2.0;
	}for(int i=0;i<m;i++){
		cout<<*(B+i)<<" ";
        }cout<<endl;
	for(int i=0;i<m;i++){
		delete[] *(X+i);
	}delete[] X;
	return 0;
}
