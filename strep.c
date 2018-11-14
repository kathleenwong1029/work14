#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args( char * line ){
  char * arg = malloc(sizeof(line));
  strcpy(arg,line);
  char ** args = calloc(5, sizeof(line));
  int i = 0;
  while(i<5){
    args[i] = strsep(&arg," ");
    i++;
  }
  return args;
}

int main(){
  // char line[100] = "woah-this-is-cool";
  // char *s1 = line;
  // printf("[%s]\n", strsep( &s1, "-" ));
  // printf("[%s]\n", s1);
  char * line = "ls -a -l";
  char ** args = parse_args( line );
  execvp(args[0], args);
  return 0;
}
