#include <iostream>
using namespace std;
int main(){
	int count=0;
	for(int i=1000;i<=9999;i++){
		if(i%5==0&&i%3==0){
			count++;
		}
	}int* Y=new int[count];
	int index=0;
	for(int i=1000;i<=9999;i++){
		if(i%5==0&&i%3==0){
			*(Y+index)=i;
		        index++;
		}
	}for(int i=0;i<count;i++){
		cout<<*(Y+i)<<" ";
	}cout<<endl;
	delete[] Y;
	return 0;
}
