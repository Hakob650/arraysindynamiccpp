#include <iostream>
using namespace std;
int main(){
        
	int count=0;
	for(int i=10;i<=99;i++){
		int tens=i/10;
		int ones=i%10;
		if((tens+ones)>5){
			count++;
		}
	}int* Y=new int[count];
	int index=0;
	for(int i=10;i<=99;i++){
		int tens=i/10;
		int ones=i%10;
		if((tens+ones)>5){
			*(Y+index)=i;
			index++;
		}
	}for(int i=0;i<count;i++){
		cout<<*(Y+i)<<" ";
	}cout<<endl;
	delete[] Y;
	return 0;
}
