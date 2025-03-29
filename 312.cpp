#include <iostream>
using namespace std;
int main(){
	int count=0;
	for(int i=100;i<=999;i++){
		if(i%5==2){
			count++;
		}
	}int* Y=new int[count];
	int index=0;
	for(int i=100;i<=999;i++){
		if(i%5==2){
			*(Y+index)=i;
			index++;
		}
	}for(int i=0;i<count;i++){
		cout<<*(Y+i)<<" ";
	}cout<<endl;
	delete[] Y;
	return 0;
}
