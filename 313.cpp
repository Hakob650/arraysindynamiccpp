#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"mutqagreq n tivy: ";
	cin>>n;
	int count=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}int* Y=new int[count];
	int index=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			*(Y+index)=i;
			index++;
		}
	}for(int i=0;i<count;i++){
		cout<<*(Y+i)<<" ";
	}cout<<endl;
	delete[] Y;
	return 0;
}

