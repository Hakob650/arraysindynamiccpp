#include <iostream>
using namespace std;
int main(){
	int count=0;
	for(int i=100;i<=999;i++){
		int hundreds=i/100;
		int tens=(i/10)%10;
		int ones=i%10;
		if((hundreds+tens+ones)==9){
			count++;
		}
	}int *Y=new int[count];
	int index=0;
	for(int i=100;i<=999;i++){
		int hundreds=i/100;
		int tens=(i/10)%10;
		int ones=i%10;
		if((hundreds+tens+ones)==9){
			*(Y+index)=i;
			index++;
		}
	}for(int i=0;i<count;i++){
		cout<<*(Y+i)<<" ";
	}cout<<endl;
	delete[] Y;
	return 0;
}
