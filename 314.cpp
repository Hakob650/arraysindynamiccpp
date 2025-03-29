#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"nermuceq n tivy: ";
	cin>>n;
	int count=0;
	for(int i=1;i<=n;i++){
		if(n%i==2){
			count++;
		}
	}int* Y=new int[count];
	int index=0;
	for(int i=1;i<=n;i++){
		if(n%i==2&&i!=0){
			*(Y+index)=i;
		}
	}for(int i=0;i<count;i++){
		if(*(Y+i)!=0){
		cout<<*(Y+i);
	}
	}cout<<endl;
	delete[] Y;
	return 0;
}
