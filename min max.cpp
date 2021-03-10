#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		}
	
	for(int i = 1; i < n; i++){
		int max = a[0];
		if(a[i] > max) max = a[i];
		cout << "Max: "<< max<< endl;
	}
	for(int i = 1; i < n; i++){
		int min = a[0];
		if(a[i] < min) min = a[i];
		cout << "Min: "<< min <<endl;
	}
			int sum = 0;
		int count = 0;
	for(int i = 0; i< n; i++){

		if(i % 2==0){
			sum += a[i];
		}
		else{
			count++;
		}
	}
	cout <<"Sum of odd number: "<< sum << endl<<"even number: "<< count;
	return 0;	
}
