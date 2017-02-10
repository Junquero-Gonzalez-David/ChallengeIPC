#include<stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
board();
return(0);
}

void board(){
    int num;
    int entered=0;
    char buf[8];

    bool marks[] = {false,false,false,false,false,false,false,false,false};
    printf("Enter the board's values (digits from 1 to 9)(no caràcters)\n");
    while (entered<9){
        scanf("%d",&num);
        if(!marks[num]){
            marks[num]=true;
            entered++;
        }
        else printf("Entrada invàlida \n");
    }
}
