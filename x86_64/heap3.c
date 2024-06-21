#include <err.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
//   Автор   : Abdellah Oulahyane
//   Код цели: Дипломное задание



int main(int argc, char **argv) {
  
  void *a = malloc(8);
  free(a);
  free(a);




  void *b = malloc(8);
  void * c = malloc(8);
  /* b и c указывают на один и тот же адрес */

  return 0;
}