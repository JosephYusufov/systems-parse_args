#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char ** parse_args( char line[100] ){
  char *cursor = line;
  char *token = NULL;
  while(cursor != NULL){
    token = strsep(&cursor, " ");
    printf("\nToken: [%s]\tCursor: [%s]", token, cursor);
  }
  return NULL;
}

int main (){
  parse_args("ls all all all");
  return 0;
}
