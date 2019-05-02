#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	char order[50],att[50],newatt[50],command[150];
	printf("Please enter the command you want to be executed: ");
	gets(order);
	printf("Please enter the attributes for the command: ");
	gets(att);
	if(strcmp(order, "chdir") == 0){
		strcpy(command, "pwd ");
		strcat(command, att);
		system(command);
	}
	if(strcmp(order, "cd") == 0){
		strcpy(command, "cd ");
		strcat(command, att);
		system(command);
	}
	if(strcmp(order, "dir") == 0){
		strcpy(command, "ls ");
		if(strcmp(att, "/a")==0){
			strcpy(newatt, "-a");
		}
		else if(strcpy(att, "d*.*") == 0){
			strcpy(newatt, "/user/bin/d*");
		}
		strcat(command, newatt);
		system(command);
	}
	if(strcmp(order, "type") == 0){
		strcpy(command, "cat ");
		strcat(command, att);
		system(command);
	}
	if(strcmp(order, "copy") == 0){
		strcpy(command, "cd ");
		strcat(command, att);
		system(command);
	}
	if(strcmp(order, "rename") == 0 || strcmp(order, "ren") == 0 || strcmp(order, "remove") == 0){
		strcpy(command, "rm ");
		strcat(command, att);
		system(command);
	}
	if(strcmp(order, "md") == 0){
		strcpy(command, "mkdir ");
		strcat(command, att);
		system(command);
	}
	if(strcmp(order, "rd") == 0 || strcmp(order, "rmdir") == 0){
		strcpy(command, "rmdir ");
		strcat(command, att);
		system(command);
	}
	return 0;
}
