#include <stdio.h>

/*int main(){
	int num, num1;
	FILE *fptr;
	
	fptr = fopen("D:\\data.txt", "w"); //file open for write
	printf("%p\n", fptr);
	
	if(fptr==NULL){
		printf("error to open");
		return 1;
	}
	
	printf("Enter Number\n");
	scanf("%d", &num);
	
	fprintf(fptr, "%d\n", num);
	
	printf("Enter Number 2\n");
	scanf("%d", &num1);
	
	fprintf(fptr, "%d\n", num1);
	
	fclose(fptr);
	
	return 0;
}*/


//Creating a user defined file and inputing their full name
/*main(){
	char FName[50], Input[50];
	
	printf("Enter file name: ");
	scanf("%s", FName);
	
	FILE *fptr;
	fptr = fopen(FName, "w");
	
	printf("Enter your name: ");
	scanf(" %[^\n]s", &Input);
	
	fprintf(fptr, "%s\n", Input);
	
	fclose(fptr);
	
	return 0;
}*/



/*int main() {
	char filename[100];
	FILE *fptr;
	char userData[100];
	
	// Get file name from user
	printf("Enter the file name to create (example: test.txt, code.c, report.docx):\n");
	scanf("%s", filename);
	
	getchar();
	
	// Open file for writing
	fptr = fopen(filename, "w");
	
	if (fptr == NULL) {
		printf("Error creating the file!\n");
		return 1;
	}
	
	printf("File '%s' created successfully!\n", filename);
	// Optional: write something inside
	
	
	fprintf(fptr, "This file was created by the program. \n");
	
	printf("Enter Data ");
	
	fgets(userData, sizeof(userData), stdin);
	
	fputs(userData, fptr);
	fclose(fptr);
	
	return 0;
}*/

main(){
	FILE *fptr ;
	char userData[500] ;
	fptr = fopen("abc.txt","r");
	if(fptr == NULL){
		printf("Error");
		return 1 ;
	}
	
	while(fgets(userData,500, fptr) != NULL){
	
	printf("%s" , userData);
	}
	
	fclose(fptr);
}
