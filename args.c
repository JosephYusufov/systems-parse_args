#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char ** parse_args( char * line ){
  char **to_return; //check
  int i = 0;
  while( *line != NULL ){ 
    to_return[i] = strsep( &line, " \t\n" );
    i++;
  }
  to_return[i] = NULL;
  return to_return;
}

int main (){
  char *argv[10];
  parse_args( "ls all all all" );
  return 0;
}
