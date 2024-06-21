//complie command
//gcc -z exestack -fno-stack-protector -o bof01 bof01.c -D_FORTIFY_SOURCE=0
#include <stdio.h>
#include <string.h>
void win( char *buff){
        char *flag="ctf{hello_wprld}";
        char buf[200];
	//scanf("%s",buf);
        strcpy(buf,buff);
        printf(buf);
}
int main(int argc,char *argv[]){
        if(argc<=1) {printf("Usage ./program parm\n");}
        else{ win(argv[1]);}
        //win();
	return 0;
}
