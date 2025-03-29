#include <iostream>
using namespace std;
int main(){
	int k;
	cout<<"mutqagreq k tivy: ";
	cin>>k;
	int count=0;
	for(int i=10;i<=99;i++){
		if(i%k==0){
			count++;
		}
	}int* Y=new int[count];
	int index=0;
	for(int i=10;i<=99;i++){
		if(i%k==0){
			*(Y+index)=i;
			index++;
		}
	}for(int i=0;i<count;i++){
		cout<<*(Y+i)<<" ";
	}cout<<endl;
	delete[] Y;
	return 0;
}
