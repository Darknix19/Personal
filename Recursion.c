#include <stdio.h>
#include <stdbool.h>

int sumNat(int num){
	if(num==0){
		return 0;
	}else{
		return num + sumNat(num-1);
	}
}

int factorial(int num){
	if(num==0){
		return 1;
	}else{
		return factorial(num-1) * num;
	}
}

int main(){
	int num;
	
	printf("Enter number to get info: ");
	scanf("%d", &num);
	
	printf("Sum of natural numbers: %d\n", sumNat(num));
	printf("Factorial: %d\n", factorial(num));
	
	return 0;
}
