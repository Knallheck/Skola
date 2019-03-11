#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

// Nod *nynod(char name[30] , int tel){
//   Nod * ny = malloc(sizeof(Nod));
//   ny -> tel = tel;
//   ny -> next = NULL;
//   strcpy(ny -> name ,name);
//   return ny;
// }

void insertnod(Nod ** padr, Nod * tobeadded){
  // insertnod(Nod ** padr, Nod * tobeadded){
    Nod * Previousfist = *padr ;
    tobeadded->next = Previousfist;
    if (Previousfist!=NULL){
      Previousfist->prev = tobeadded;
    }
    tobeadded->prev = NULL;
    *padr = tobeadded;

  };


  void removenod(Nod ** padr, Nod * toberemoved){
    // ta bort den enda i listan
    // removenod(Nod ** padr, Nod * toberemoved){
      if(toberemoved -> prev == NULL && toberemoved -> next == NULL){
        *padr = NULL;
        free(toberemoved);
        return;
      }
      if(toberemoved -> prev ==NULL){
        //tar bort forsta i listan
        *padr = toberemoved -> next;
        toberemoved -> next ->prev = NULL;
        free(toberemoved);
        return;
      }

      if(toberemoved -> next != NULL){
        // sista i kön
        toberemoved -> prev -> next = NULL;
        free(toberemoved);
      }
      // mitt i någonstans
      toberemoved -> prev -> next = toberemoved -> next;
      toberemoved -> next -> prev = toberemoved ->prev;
      free(toberemoved);
    };


    void printnod(Nod * p){
      // printnod(Nod * p){
        if (p==NULL){
          printf("Not found");
          return ;
        }
        printf("%s\t%d\n",p->name,p->tel );
      };


      void printlist(Nod * p){
        // printlist(Nod * p){
          while (p!=NULL){
            printnod(p);
            p=p->next;
          }
        };


        Nod * search(Nod * p, int tel){
          // search(Nod ** padr, int tel){
            // Nod * p = *padr;
            // printf("%d\n",1 );
            while (p->tel != tel){
              p= p->next;
              if (p==NULL) return NULL;
              // printf("%d\n",2 );
            };
            return p;
            // printf("%d\n",3 );


          };

          void clear_list(Nod ** padr){
            // clear_list(Nod ** padr){
              Nod * currentnod = *padr;
              while (currentnod != NULL){
                Nod * next_nod = currentnod -> next;
                free(currentnod);
                currentnod=next_nod;
              };
            };
