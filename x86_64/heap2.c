#include <err.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
//   Автор   : Abdellah Oulahyane
//   Код цели: Дипломное задание

struct Command {
  char name[32];
  int auth;
};

int main(int argc, char **argv) {
    struct Command *command;
    const char *pwd = "4-mda-9_pass";
    char *service;
    char pass[20];
    char line[128];
  while (1) {
    printf("# ");
    if (fgets(line, sizeof(line), stdin) == NULL) break;
    if (strncmp(line, "auth ", 5) == 0) {
      command = malloc(sizeof(struct Command));
      memset(command, 0, sizeof(struct Command));
      if (strlen(line + 5) < 31) strcpy(command->name, line + 5);
    }
    else if (strncmp(line, "reset", 5)   == 0)  free(command);
    else if (strncmp(line, "service", 6) == 0)  service = strdup(line + 7);
    else if (strncmp(line, "login", 5)   == 0) {
      if (command && command->auth)  printf("вы уже вошли в систему!\n");
      else {
        printf("пожалуйста, введите пароль!\npass : ");
        if (fgets(pass, sizeof(pass), stdin) == NULL) break;
        if (strncmp(pass, pwd, 12) != 0)  printf("Неавторизованный!\n");
      }
    }
    else if (strncmp(line, "exit", 4) == 0) break;
    else printf("Недопустимая команда\n");
}}