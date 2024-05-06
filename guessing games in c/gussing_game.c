#include<stdio.h>
#include<math.h>
#include<string.h>
     
       // GUesing game  //

int main(){
    printf("\n");
    printf("\t\t\t\t!!WELCOME to GUESSING GAME!!\n");
    printf("\n");
    int playerOneNumber;
    int N=3;                                                       //maximum chancess for gussing.
    int n1,n2,n3;                                                  // for showing how many times left
    printf("\t\tP1-->> CHOOSE YOUR NUMBER :: ");
    scanf("%d",&playerOneNumber);
    int gv1,gv2,gv3;     
    printf("\n");                                                  // gv= guesses value
    printf("\t\tP2-->> ENTER YOUR 1st CHOICE :: ");
    scanf("%d",&gv1);
    if(gv1== playerOneNumber){   
         printf("\n");
        printf("\t\t\t\tRight, Player-2 wins!\n");
    }else {
        n1=N-1;
        printf("\n");
        printf("\t\tWrong, %d Chance(s) Left!\n",n1);
        printf("\n");
        printf("\t\tP2-->> ENTER YOUR 2nd CHOICE :: ");
        scanf("%d",&gv2);
        if(gv2==playerOneNumber){
            printf("\n");
            printf("\t\t\t\tRight, Player-2 wins!\n");
        }else{
            n2=N-2;
            printf("\n");
        printf("\t\tWrong, %d Chance(s) Left!\n",n2);
        printf("\n");
        printf("\t\tP2-->> ENTER YOUR 3rd CHOICE :: ");
        scanf("%d",&gv3);
        if(gv3==playerOneNumber){
            printf("\n");
            printf("\t\t\t\tRight, Player-2 wins!\n");
        }else{
            printf("\n");
            printf("\t\t\t\tPlayer-1 wins!\n");
        }
    }
    }
    
    printf("\n");
   return 0;
}