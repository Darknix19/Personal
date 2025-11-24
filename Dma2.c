#include <stdio.h>
#include <stdlib.h>

main(){
	int i, n;
	char (*ptr)[20]; //pointing to an array of 20 characters
	
	printf("Enter number of values\n");
	scanf("%d", &n);
	
	ptr = malloc(n * sizeof(*ptr));
	if(ptr == NULL){
		printf("Error in memory allocation");
	}
	
	printf("Enter values: ");
	for(i=0;i<n;i++){
		scanf("%s", (ptr+i));
	}
	
	printf("Your values are in:\n");
	for(i=0;i<n;i++){
		printf("%s\n", *(ptr+i));
	}
	
	return 0;
}
