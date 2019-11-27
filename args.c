#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main (){
  char **argV = parse_args("ls all all all")
  return 0;
}


char ** parse_args( char line[100] ){
  char *cursor = line;
  char *token;
  char **args;
  int i = 0;
  while(cursor != NULL){
    token = strsep(&cursor, " ");
    printf("\nToken: [%s]\tCursor: [%s]", token, cursor);
	*(args + i) = 
	i++;
  }
  return NULL;
}

int main (){
  parse_args("ls all all all");
  return 0;
}
