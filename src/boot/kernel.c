#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char strSplit(char str[], char delim[]) {
	int init_size = strlen(str);

	char *ptr = strtok(str, delim);
	
	while(ptr != NULL){
		printf("'%s'\n", ptr);
		ptr = strtok(NULL, delim);
	}

	/* This loop will show that there are zeroes in the str after tokenising */
	for (int i = 0; i < init_size; i++){
		printf("%d ", str[i]); /* conver the char to int, in this cse the character's ASCII equivelent*/
	}

	printf("\n");
	return 0;
}
int main() {
//system("./app")
	char inp[] = "asdasd";
	while (1){
		printf("\n>");
		scanf("%s", inp);
			
		char text[] = "command arg1 arg2 arg3 arg4";
		char delim[] = " ";
		
		strSplit(text, delim);
		char command[] = "";
		char args[22] = {"a"};
		
		char filename[] = "../bin/";
		strcat(filename, inp);

		if (strcmp(inp, "exit") == 0){
			printf("Exiting!");
			return(0);
		}
		else 
		if ( access( filename,  F_OK ) ) {
			// run file
			printf("%s", filename);
		}
		//printf("%s", inp);
	}
	return(0);
}
