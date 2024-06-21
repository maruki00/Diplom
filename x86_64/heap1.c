#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*   Автор   : Abdellah Oulahyane
*   Код цели: Дипломное задание
*/

struct heapStructure {
    int priority;
    char *name;
};

void winner() {
    char *buffer = "Поздравляем, вы успешно эксплуатируете переполнение кучи";
    printf("\n%s\n", buffer);
}

int main(int argc, char **argv) {
    struct heapStructure *i1, *i2;
    i1 = malloc(sizeof(struct heapStructure));
    i1->priority = 1;
    i1->name = malloc(8);
    i2 = malloc(sizeof(struct heapStructure));
    i2->priority = 2;
    i2->name = malloc(8);
    strcpy(i1->name, argv[1]);
    strcpy(i2->name, argv[2]);
    puts("Done!");
	exit(0);
}
