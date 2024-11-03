#include<stdio.h>

int main(void) {

    int a, b;
    for(a=1; a<=7; a++) {
        for(b=1; b<=9; b++) {
            if(a==1|| a==7) {
                if (b==1|| b==2|| b==3) {
                    printf("#");
                }
                else {
                    printf(" ");
                }
            }
            else if (a==2||a==3||a==4||a==5||a==6) {
                if(b==2) {
                    printf ("#");
                }
                else {
                    printf(" ");
                }
            }
        }
    printf("\n");}
    printf("\n\n");



    int c, d;
    for(c=1; c<=7; c++) {
        for(d=1; d<=9; d++) {
            if (c==1) {
                if(d==2||d==4||d==6||d==8)
                {
                    printf("#");
                }
                else {
                    printf(" ");
                }
            }
            else if (c==2) {
                if(d==1||d==5||d==9) {

                    printf("#");
                }
                else {
                    printf(" ");
                }

            }
            else if (c==3) {

                if (d==1||d==9) {
                    printf("#");
                }
                else {
                    printf(" ");
                }
            }

            else if (c==4) {
                if(d==2||d==8) {
                    printf("#");
                }
                else {
                    printf(" ");
                }
            }

            else if(c==5) {
                if( d==3||d==7) {
                    printf("#");
                }
                else {
                    printf(" ");
                }
            }
            else if (c==6) {
                if(d==5) {
                    printf("#");
                }
                else {
                    printf(" ");
                }
            }
        }

        printf("\n");
    }
    printf("\n\n");

    int e, f;
    for(e=1; e<=7; e++) {
        for(f=1; f<=9; f++) {
            if(e==1||e==2||e==3||e==4||e==5) {
                if(f==1||f==9) {
                    printf("#");
                }
                else {
                    printf(" ");
                }
            }
            else if(e==6) {
                      if( f==2||f==8) {
                        printf("#");
                             }
                             else {
                             printf(" ");
                             }
                           }
            else if(e==7) {
                if (f==3||f==5||f==7) {
                    printf("#");
                }
                else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    
    return 0;
}
