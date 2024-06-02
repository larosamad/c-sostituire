/* Chiedi all'utente due parole inserite da tastiera. Ciascuna parola contiene massimo 30 caratteri. Il programma deve sostituire ogni occorrenza della seconda parola nella prima parola con una sequenza di *
stampa a video la parola

es: 
utente inserisce come prima parola: capodanno
come seconda parola: danno
stampare a video: capo***** 
*/

#include <stdio.h>
#include <string.h>
#define MAX 30

char parola1[MAX+1]; //capodanno //a posizione 2
char parola2[MAX+1]; //anno
int i, y, x, lunghezza1, lunghezza2, check;

int main(void){
    printf("Inserisci la prima parola ");
    scanf("%s", parola1);

    printf("Inserisci la seconda parola ");
    scanf("%s", parola2);

    if (strstr(parola1, parola2)!=0){

        lunghezza1=(int)strlen(parola1);
        lunghezza2=(int)strlen(parola2); 

        y=0;
        while(y<lunghezza1){
            x=0;
            check=0;

            while((x<lunghezza2)&&(check!=1)){
                if (parola1[y+x]==parola2[x]){
                    x++;
                } else {
                    check=1;
                }
            }

            if(check==0){
                for(i=0;i<lunghezza2;i++){
                    parola1[y+i]='*';
                }
            }else{
                    y++;
                }
            }
        }
    
    printf("%s", parola1);
    return 0;
}
