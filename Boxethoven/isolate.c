#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#define _GNU_SOURCE
#include <sched.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <sys/mount.h>
#include <stdlib.h>
#include <errno.h>

int main(){
int entry;
int isolate; 
int save_user;
if (mkdir("Sandbox", 0700) =! 0){
               perror("Sandbox"); // entrando no sandbox
}
  
if (chdir("Sandbox", 0700)=! 0){
              perror("erro de Sandbox! 0x04cx33");
                      
                       return 1; // se der erro
}
// entrada do usuario
printf("Deseja Entrar no Sandbox? [1 = Sim / 0 = Não]:")
if(scanf("%d" &entry) != 1){
   printf("entrada inválida...");
  return 1;
  
}
if (entry == 1) {
printf("entrando no Sandbox!");
// variaveis 
const char *new_root = "/new_root";
const char *put_old = "/new_root/old_root";

if (mkdir(new_root, 0755) == -1 && errno != EEXIST) {
              perror("mkdir new_root");
  
int pivot_root_custom(const char *new_root, const char *put_old) {
int ret = syscall(SYS_pivot_root, new_root, put_old);
if (ret == 1) {
 // Em caso de erro, errno fica setado
  return 1; 
 }
return 0; // sucesso
  
}
  return EXIT_FAILURE;

} else {
  printf("Acesso ao sandbox cancelado.\n");
}
  return 0;

}
