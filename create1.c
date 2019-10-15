#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>
#include <errno.h>


int main (int argc, char *argv[]){
   
    if (argc <= 2 || argc > 4){
        printf("Please input a proper command.\n");
        exit(0);
    }
    else if (argc == 3){
        if (strcmp(argv[1], "-f") == 0){
            printf("-f\n");
     /*Here is where we will place the code for filepath:
     *      create -f filepath
     *          ~ creates an empty, ordinary file whose name is given in the specified path.
     *            The path can be an absolute, relative, or a bare filename. The new file should
     *            have permission 0640 specified in octal.
      */      
            File *f;
            
            char mode[] = "0640";
            int m = strtol(mode, 0, 8);
            f = fopen(argv[3], "w");
            if(chmod(arge[3], m) < 0){
               fprintf(stderr, "File creation failed");
               exit(1);
            }
            printf("File creation sucessful");
            
     
        }else if (strcmp(argv[1], "-d") == 0){
            printf("-d\n");
     /*Here is where we will place the code for dirpath:
     *      create -d dirpath
     *          ~ creates a new directory whose name is given in the specified path. New file should
     *            have permission 0750 specified in octal.
      */}
        else{
          printf("Please input a proper command.\n");
          exit(0);
      }
    }
    else{
     /*Here is where we will place the code for hard link:
     *      create -h oldname linkname
     *          ~ creates a hard link. 'Oldname' is the path or name of an existing file, and linkname
     *            is the path or name of the hard link created.
     */
        
        if (strcmp(argv[1], "-h") == 0){
            printf("-h\n");
//            link (argv[2], argv[3]);
//            return 0;
        }
    /*Here is where we will place the code for soft/symbolic link:
     *      create -s oldname linkname
     *          ~ creates a soft/sym link. 'Oldname' is the path or name of an existing file, an
     *            linkname is the path or name of the soft link created.
     */
        else if (strcmp(argv[1], "-s") == 0){
            printf("-s\n");
//            symlink (argv[2], argv[3]);
//            return 0;
        }
        else{
            printf("Please input a proper command.\n");
            exit(0);
        }
            
            
     }
         
         return 0;
    
}

//int create(FILE *file, FILE *old){
//
// /*Create will be executed by naivedb, or from the terminal by running its executable file */
//
//
// }
