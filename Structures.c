#include <stdio.h>

int main(){
	struct student {
		char Name[50];
		int stId;
		char course[50];
		float marks;
	};
	
	struct student stArray[2] = {{"Alice", 123, "Computer Science", 89.4},{"Bob", 124, "Software Engineering", 92.3}};

	printf("Name\tStudent ID\tCourse\t\t\tMarks\n");
	for (int i=0; i<2; i++){
		printf("%s\t%d\t\t%s\t%.2f\n",stArray[i].Name, stArray[i].stId, stArray[i].course, stArray[i].marks);
	}
}
