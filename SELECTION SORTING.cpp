//Program for the Selection  Sorting

#include<stdio.h>

int main () {
	int i=0, n=0, p=0, a[100], j=0;
	
	printf("Enter how many numbers you want in your array to sort: \n");
	scanf("%d", &n);
	
	printf("Enter the numbers: \n");
	for(i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i<n; i++) {
		p = i;
		for(j=i+1; j<n; j++) {
				if(a[j] < a[p]) {
					p = j;
				}
		}
			int temp = a[i];
			a[i] = a[p];
			a[p] = temp;
	}
	
	printf("The sorted array in the ascending order is: \n");
	for(i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
