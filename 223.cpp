#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cout<<"mutqagreq zangvaci tarreri qanaky: "<<endl;
	cin>>n;
        if(n<=0){
		cout<<"zangvaci tarreri qanaky petq e lini drakan";
	}
	int* X=new int[n];
	int* ptr=X;
	cout<<"mutqagreq zangvaci tarrery: ";
	for(int i=0;i<n;i++){
		cin>>*(ptr+i);
	}int sum=0,count =0;
	for(int* ptr=X;ptr<X+n;ptr++){
		if(*ptr<0){
			sum+=*ptr * *ptr;
			count++;
		}
	}if(count>0){
		int average=sqrt(sum/count);
		cout<<"average="<<average<<endl;
	}else{
		cout<<"bacasakan tarrer chkan";
	}delete[] X;
	return 0;
}
