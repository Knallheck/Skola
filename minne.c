#include <stdlib.h>
#include <stdio.h>
#include <string.h>

long foo(void * a) {
    long offset = 4196518;
    long adr = (long) a;
    return adr - offset;
}

int main(int argc, char * argv[]) {
    int a = 1;
    char tkn = 't';
    int v[] = {1, 3, 5};

    int * vdyn = malloc(sizeof(int) * 2);
    vdyn[0] = 7;
    vdyn[1] = 4;

    char * staticstr = "Hej";

    char * sv = malloc(sizeof(char) * 11);
    strcpy(sv, staticstr);    // kopierar sträng se frl-anteckningar

    printf("variabel        adress            värde\n");
    printf("---------------------------------------\n");
    printf("a               %p      %d\n"      , &a        , a);
    printf("variabel        adress            värde\n");
    printf("---------------------------------------\n");
    printf("a               %p      %d\n"      , &a        , a);
    printf("tkn             %p      %c\n"      , &tkn      , tkn);
    printf("v               %p      %d \n"     , v         , *v);
    printf("v[1]            %p      %d \n"     , (v + 1)     , *(v + 1));
    printf("v[2]            %p      %d \n"     , (v + 2)     , *(v + 2));
    printf("vdyn            %p      %d \n"     , vdyn     , *vdyn);
    printf("vdyn            %p      %d \n"     , (vdyn +1)     , *(vdyn + 1));
    printf("Staticstr       %p      %c \n"     ,staticstr  , *staticstr);
    printf("sv              %p      %c \n"     ,sv     , *sv);
    printf("foo             %p      \n"        , &foo);

}
