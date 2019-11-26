#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main (){
  parse_args("ls all all all")
  return 0;
}


char ** args = parse_args( char* line ){
  char foo[100] = "echo I am the Big Hancho";
  char *cursor = foo;
  char *token;
  while(cursor != NULL){
    token = strsep(&curr, " ");
    printf("\nToken: [%s]\tCursor: [%s]", token, cursor);
  }
  return NULL;
}
