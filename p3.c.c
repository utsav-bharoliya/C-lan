#include<stdio.h>

main(){
 	
	int n;
	
	printf("Enter array size : ");
	scanf("%d",&n);
	
	int a[n];
	int i;
	int sum=0;

	for(i = 0; i < n; i++){
		
		printf("Enter array elements a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i = 0; i < n; i++){
		
		sum=a[i]*a[i];
		printf("The squares are : %d \n" ,sum);
		
	}
}

