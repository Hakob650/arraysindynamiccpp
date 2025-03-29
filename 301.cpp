#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"mutqagreq zangvaci tarreri qanaky: ";
	cin>>n;
	if(n<=0){
	    cout<<"zangvaci tarreri qanaky petq e lini drakan"<<endl;
	}cout<<"mutqagreq zangvaci tarrery: ";
	int* X=new int[n];
	int* ptrX=X;
	for(int i=0;i<n;i++){
		cin>>*(ptrX+i);
	}int neg_count=0;
	for(int* ptrX=X;ptrX<X+n;ptrX++){
		if(*ptrX<=0){
			neg_count++;
		}
	}int* Y=new int[neg_count];
	int* ptrY=Y;
	for(int* ptrX=X;ptrX<X+n;ptrX++){
		if(*ptrX<=0){
		  *ptrY++=*ptrX;
		}
	}ptrY=Y;
	for(int* ptr=Y;ptr<Y+neg_count;ptr++){
		cout<<*ptr<<" ";
	}cout<<endl;
	delete[] X;
	delete[] Y;
	return 0;
}
		
