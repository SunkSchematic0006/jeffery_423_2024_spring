#include <stdio.h>
#include <string.h>

void VGoFileChecker(char** files){
    int i = 1;
    char * copy;
    do{
        copy = files[i];
        if (strstr(copy,".go") == NULL){
            strcat(files[i], ".go" );
        }else{
            
        }
        i++;
       

    } while ( files[i] != '\0' );


}


int main(int argc, char** argv){
    char *p;
    for(int cnt=1; cnt < argc; ++cnt)
    {
        p = argv[cnt];
        printf("%d = [%s]\n", cnt, p);
    }

    VGoFileChecker(argv);

    for(int cnt=1; cnt < argc; ++cnt)
    {
        p = argv[cnt];
        printf("%d = [%s]\n", cnt, p);
    }
    return 0;
}