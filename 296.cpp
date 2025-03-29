#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"mutqagreq zangvaci tarreri qanaky: "<<endl;
	cin>>n;
	if(n<=0){
		cout<<"zangvaci tarreri qanaky petq e lini drakan"<<endl;
	}cout<<"mutqagreq zangvaci tarrery: ";
	int*  X=new int[n];
	int* ptrX=X;
	for(int i=0;i<n;i++){
		cin>>*(ptrX+i);
	}int even_count=0;
	for(int* ptr=X;ptr<X+n;ptr++){
		if(*ptr%2==0){
			even_count++;
		}
	}int* Y=new int[even_count];
	int* ptrY=Y;
        int index=0;
	for(int* ptr=X;ptr<X+n;ptr++){
		if(*ptr%2==0){
			*ptrY++=*ptr;

		}
	}for(int* ptr=Y;ptr<Y+even_count;ptr++){
		cout<<*ptr<<" ";
	}cout<<endl;
	delete[] X;
	delete[] Y;
	return 0;
}

