#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"mutqagreq zangvaci tarreri qanaky: ";
	cin>>n;
	if(n<=0){
	    cout<<"zangvaci tarreri qanaky petq e lini drakan";
	}int* X=new int[n];
        int* ptrX=X;
	cout<<"mutqagreq zangvaci tarrery: ";
        for(int i=0;i<n;i++){
	     cin>>*(ptrX+i);
	}int newsize=(n+1)/2;
        int* Y=new int[newsize];
        int* ptrY=Y;
        for(int i=0,j=0;i<n;i++){
	       if(i%2!=0){
	          *(ptrY+j)=*(ptrX+i);
                  j++;
	       }
	}for(int i=0;i<newsize;i++){
                 cout<<*(Y+i)<<" ";
	}cout<<endl;
         delete[] X;
         delete[] Y;
         return 0;
}	 
