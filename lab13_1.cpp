#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	int ABC , P;
	for(int m = 0; m < N;m++){
		ABC =d[m];
		for(int o = 0; o < N;o++){
			if(o == 1) cout <<"[" << d[o] << "] ";
			else cout << d[o] << " ";
		}
	P = m -1;
	SOS = m;
	while(P >= 0 && d[P] < ABC){
		swap(d,P,P+1);
		P--;
	}
	d[P+1] = ABC;
	cout << " >= ";
	for(int q = 0; q < N; q++){
		if(q == SOS) cout << "[" << d[q] <<"]";
		else cout << d[q] << " ";
	}
		cout <<"\n";
	}

}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
