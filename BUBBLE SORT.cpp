//Program for the Bubble Sorting

#include<stdio.h>
int main () {
	int i = 0, j = 0, n = 0, a[100];
	
	printf("Enter how many number you want in your array to sort?\n");
	scanf("%d", &n);
	
	printf("Enter the numbers: \n");
	for(i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	
	for(i = 0; i<n; i++) {
		for(j = 0; j<n-i-1; j++) {
			if(a[j] > a[j+1]) {
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			} 
		}
	}
	
	printf("The sorted array in ascending order is: \n");
	for(i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
	
	return 0;
}
