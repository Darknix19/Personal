#include <stdio.h>
#include <string.h>

int main(){
	char name[] = "Khunais";
	char Lname[] = "Baig";
	
	//strlen
	printf("%s length is %d\n",name,strlen(name));
	
	//strcat
	printf("%s\n", strcat(name,Lname));
	
	//strncat
	printf("%s\n", strncat(name,Lname,3));
	
	//strcpy
	/*char myName[] = "sana";
	char yourName[] = "hamza";
	
	//strcpy(myName,yourName);
	//printf("%s\n", myName);
	
	//strncpy
	strncpy(myName,yourName,2);
	printf("%s\n", myName);*/
	
	//strcmp (case sensitive)
	char dbPassword[] = "khunais123";
	char userPassword[] = "khunaisbaig";
	
	printf("%d\n", strcmp(dbPassword,userPassword));
	if(strcmp(dbPassword,userPassword)==0){
		printf("Matched\n");
	}
	else{
		printf("Wrong\n");
	}
	
	//strcmpi (not case sensitive)
	if(strcmpi("Apple","apple")==0){
		printf("Matched\n");
	}
	else{
		printf("Wrong\n");
	}
	
	//strstr
	char data[] = "hello this is my friend khunais, me and khunais have a decade long friendship";
	if(strstr(data,"khunais")){
		printf("Found\n");
	}
	else{
		printf("Not Found\n");
	}
	
	//strchr
	char characterMatch[] = "Hello";
	char match = 'e';
	
	if(strchr(characterMatch,match)){
		printf("Character Found");
	}
	else{
		printf("Character Not Found");
	}
	
	return 0;
}
