#include <stdio.h>

main() {
    int a, b ,n ,i;
    
    printf("Enter the first number: ");
    scanf("%d", &a);
    
    printf("Enter the second number: ");
    scanf("%d", &b);
    
    int leapYears[100];     
    int count = 0;
    
    for ( n = a; n <= b; n++) {
        if (n % 4 == 0) {
            leapYears[count] = n;
            count++;
        }
    }
    
    printf("Leap years between %d and %d:\n", a, b);
    
   	for ( i = 0; i < count; i++) {
      	printf("The array is : %d\n", leapYears[i]);
    }
    

}
