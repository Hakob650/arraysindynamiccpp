#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"mutqagreq zangvaci tarreri qanaky: ";
	cin>>n;
	if(n<=0){
		cout<<"zangvaci tarreri qanaky petq e lini drakan"<<endl;
	}int* X=new int[n];
	int* ptrX=X;
	cout<<"mutqagreq zangvaci tarrery";
        for(int i=0;i<n;i++){
		cin>>*(ptrX+i);
	}int pos_count=0;
	for(int* ptrX=X;ptrX<X+n;ptrX++){
		if(*ptrX>0){
			pos_count++;
		}
	}int* Y=new int[pos_count];
	int* ptrY=Y;
        for(int*  ptrX=X;ptrX<X+n;ptrX++){
	       if(*ptrX>0){
		       *ptrY++=*ptrX;
	       }
       }for (int* ptrY=Y;ptrY<Y+pos_count;ptrY++){
	       cout<<*ptrY<<" ";
       }cout<<endl;
       delete[] X;
       delete[] Y;
       return 0;
}



