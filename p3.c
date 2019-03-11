#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

Nod *nynod(char name[30] , int tel){
  Nod * ny = malloc(sizeof(Nod));
  ny -> tel = tel;
  ny -> next = NULL;
  strcpy(ny -> name ,name);
  return ny;
  }
int main(){

  printf("%s\n","Start inserting Nod" );

  Nod * root = NULL;
  Nod * x1;
  x1 = nynod("Viktor",12345);
  insertnod(&root, x1);

  Nod * x2;
  x2 = nynod("kalle",56789);
  insertnod(&root, x2);

  Nod * x3;
  x3 = nynod("lucas",31415);
  insertnod(&root, x3);


  Nod * searchnod = search(root,12345);
  printf("%s\n","Printlist searched nod" );
  printnod(searchnod);


  printf("%s\n","Removed Nod x3" );
  removenod(&root,x3);


  printf("%s\n","Printing list" );
  printlist(root);

  clear_list(&root);

}
