#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int create(FILE *file, FILE *old, int argc, char *argv[]);

int main (int argc, char *argv[]){

    FILE *filename[10];
    FILE *dirname[10];
    FILE *oldFile[10];
  

/*This will continuously loop until the user inputs an argument within the correct
 range*/
    
 do{
    printf("Please input a proper command.\n");
 }while (argc == 1 || argc >= 5);
 
    /*If the argument input is the correct amount, now work with the input themselves.*/
    
    if (argc >= 3 && strcmp(argv[0], "create") == 0){
        if (strcmp(argv[1], "-f")==0){
            filename = strdup(argv[2]);
            create(filename, filename, 3, argv[1]);
        }else if (strcmp(argv[1], "-d")==0){
            dirname = strdup(argv[2]);
            create(dirname, dirname, 3, argv[1]);
        }else if (strcmp(argv[1], "-h")==0){
            oldFile = strdup(argv[2]);
            filename = strdup(argv[3]);
            create(filename, oldFile, 4, argv[1]);
        }else if (strcmp(argv[1], "-s")==0){
            oldFile = strdup(argv[2]);
            filename = strdup(argv[3]);
            create(filename, oldFile, 4, argv[1]);
        }
        
    }
}

