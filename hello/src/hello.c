
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    const char* env_var1 = getenv("VAR1"); // getenv декларирован в stdlib
    const char* env_var2 = getenv("VAR2"); 

    fprintf(stderr,"* Starting process\n");
    fprintf(stderr,"  Args: %i %s %s\n", argc, argv[0], argv[1]);
    fprintf(stderr,"  Envs: %s %s\n", env_var1, env_var2);    
    return EXIT_SUCCESS;
}
