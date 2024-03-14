#include<iostream>
using namespace std;

int main () {
	int i = 0, n = 0, j = 0, temp ,a[100];
	
	cout<<"Enter the numbers you want in your array: \n"<<endl;
	cin>>n;
	
	cout<"Enter the numbers: \n";
	for(i = 0; i<n; i++) {
		cin>>a[i];
	}
	
	for(i = 0; i < n; i++)  {
		temp = a[i];
		j = i-1;
		while(j>=0 && a[j]>temp) {
			a[j+1] = a[j];
			j = j-1;
		}
		
		a[j+1] = temp;
	}
	
	cout<<"The sorted array in the ascending order is: ";
	for(i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
	
	return 0;
}
