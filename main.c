
#include "./vector/vector.h"
#include <stdlib.h>
#include <string.h>

#include <stdio.h>

int main(){

    //TODO do some test to determine that this shit works

    printf("start\n");
    Vector vec = makeVector(sizeof(char*));

    char** strptr = malloc(sizeof(char*));//pointers are always same len so size of does not matter i think


    char* asd="asdfasdf";

    *strptr=asd;

    pushVector(&vec, strptr);

    printf("done assigning;\n");
    
    printf("%s\n",*(char**)vec.elements);




    return 0;
}
