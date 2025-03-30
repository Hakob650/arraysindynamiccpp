#include <iostream>
using namespace std;

int main() {
    int m, a, b;
    cout << "Mutqagreq matrici chapy: ";
    cin >> m;
    cout << "Mutqagreq [a, b] mijakayqy: ";
    cin >> a >> b;
    double** X = new double*[m];
    for (int i = 0; i < m; i++) {
        X[i] = new double[m];
    }cout << "Mutqagreq matrici tarrery: ";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> *(*(X + i) + j);
        }
    }double* B = new double[m];
    for (int i = 0; i < m; i++){
	    double  first=*(*(X+i)+0);
            double  middle=*(*(X+i)+m/2);
            double  last=*(*(X+i)+m-1);	    
    if (first>=a&&first<=b&&middle>=a&&middle<=b&&last>=a&&last<=b){
           *(B + i)=first+middle+last;
    } else {
           *(B + i) = 0;             
    }
    }cout << "B vektor@: ";
    for (int i = 0; i < m; i++) {
        cout << *(B + i) << " ";
    }
    cout << endl;
    delete[] B;
    for (int i = 0; i < m; i++) {
        delete[] *(X + i);
    }
    delete[] X;
    return 0;
}
	
