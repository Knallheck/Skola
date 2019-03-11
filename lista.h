#ifndef LISTA_H
#define LISTA_H

 struct nod {
    char name[30];
    int tel;
    struct nod * next;
    struct nod * prev;
};

typedef struct nod Nod;
 // struct foo {
   // int member;




     void insertnod(Nod ** padr, Nod * tobeadded);
     void removenod(Nod ** padr, Nod * toberemoved);
     void printnod(Nod * p);
     void printlist(Nod * p);
     Nod * search(Nod * p, int tel);
     void clear_list(Nod ** padr);
     
// struct foo {
#endif /* GRANDPARENT_H */
//     int member;
// void insertnod(Nod ** padr, Nod * tobeadded);
// };
// #endif /* GRANDPARENT_H */
//
// struct foo {
//     int member;
// void removenod(Nod ** padr, Nod * toberemoved);
// };
// #endif /* GRANDPARENT_H */
//
// struct foo {
//     int member;
// void printnod(Nod * p);
// };
// #endif /* GRANDPARENT_H */
//
// struct foo {
//     int member;
// void printlist(Nod * p);
// };
//
// #endif /* GRANDPARENT_H */
//
// struct foo {
//     int member;
// Nod * search(Nod * p, int tel);
// };
// #endif /* GRANDPARENT_H */
//
// void insertnod(Nod ** padr, Nod * tobeadded){
//   Nod * Previousfist = *padr ;
//   tobeadded->next = Previousfist;
//   if (Previousfist!=NULL){
//     Previousfist->prev = tobeadded;
//   }
//   tobeadded->prev = NULL;
//   *padr = tobeadded;
//
// };
//
// void removenod(Nod ** padr, Nod * toberemoved){
//   // ta bort den enda i listan
//   if(toberemoved -> prev == NULL && toberemoved -> next == NULL){
//     *padr = NULL;
//     free(toberemoved);
//     return;
//   }
//   if(toberemoved -> prev ==NULL){
//     //tar bort forsta i listan
//     *padr = toberemoved -> next;
//     toberemoved -> next ->prev = NULL;
//     free(toberemoved);
//     return;
//     }
//
//   if(toberemoved -> next != NULL){
//     // sista i kön
//     toberemoved -> prev -> next = NULL;
//     free(toberemoved);
//   }
// // mitt i någonstans
// toberemoved -> prev -> next = toberemoved -> next;
// toberemoved -> next -> prev = toberemoved ->prev;
// free(toberemoved);
// };
//
//
// void printnod(Nod * p){
//   if (p==NULL){
//       printf("Not found");
//       return ;
//     }
//   printf("%s\t%d\n",p->name,p->tel );
// };
//
//
// void printlist(Nod * p){
//   while (p!=NULL){
//     printnod(p);
//     p=p->next;
//   }
// };
//
//
// Nod * search(Nod ** padr, int tel){
//   Nod * p = *padr;
//   // printf("%d\n",1 );
//   while (p->tel != tel){
//     p= p->next;
//     if (p==NULL) return NULL;
//       // printf("%d\n",2 );
//   };
//   return p;
//   // printf("%d\n",3 );
//
//
// };
//
// void clear_list(Nod ** padr){
//   Nod * currentnod = *padr;
//   while (currentnod != NULL){
//     Nod * next_nod = currentnod -> next;
//     free(currentnod);
//     currentnod=next_nod;
//   };
// };
