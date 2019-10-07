#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

 int create(int argc, char *argv[]){
 
 /*Create will be executed by naivedb, or from the terminal by running its executable file */ 
     
if (argc == 1 || argc > 4){
    printf("Please input a proper command.\n");
    exit(0);
}else if (argc == 3){
 /*Here is where we will place the code for filepath:
 *      create -f filepath
 *          ~ creates an empty, ordinary file whose name is given in the specified path.
 *            The path can be an absolute, relative, or a bare filename. The new file should
 *            have permission 0640 specified in octal.
 */
 
 /*Here is where we will place the code for dirpath:
 *      create -d dirpath
 *          ~ creates a new directory whose name is given in the specified path. New file should  
 *            have permission 0750 specified in octal.
 */
}else if (argc == 4){
 /*Here is where we will place the code for hard link:
 *      create -h oldname linkname
 *          ~ creates a hard link. 'Oldname' is the path or name of an existing file, and linkname
 *            is the path or name of the hard link created.
 */
    
    if (strcmp(argv[1], '-h') == 0){
        link (argv[2], argv[3]);
        return 0;
    }
/*Here is where we will place the code for soft/symbolic link:
 *      create -s oldname linkname
 *          ~ creates a soft/sym link. 'Oldname' is the path or name of an existing file, an
 *            linkname is the path or name of the soft link created.
 */
    else if (strcmp(argv[1], '-s') == 0){
        symlink (argv[2], argv[3]);
        return 0;
    }
        
        
 }
     
     return 0;
 }

