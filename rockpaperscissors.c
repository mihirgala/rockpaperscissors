#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

void rps(int ,int *,int *);
void putDash(int);
void putScore(int *,int *);
int endLoop();

void main(){
    char choice;
    int data,loop,uscore=0,cscore=0;
    do{
        system("cls");
        putDash(100);
        printf("First to 10 wins\n\n");
        putScore(&uscore,&cscore);
        printf("\n\nEnter Choice\n1. [r] Rock\n2. [p] Paper\n3. [s] Scissors\n\n");
        printf("->");
        scanf("%s",&choice);
        putDash(100);
        if(choice=='r' || choice=='R'){
            rps(1,&uscore,&cscore);
        }
        else if(choice=='p' || choice=='P'){
            rps(2,&uscore,&cscore);
        }
        else if(choice=='s' || choice=='S'){
            rps(3,&uscore,&cscore);
        }
        else{
            printf("Invalid option");
        }
    loop=endLoop(&uscore,&cscore);
    }while(loop!=0);
    system("cls");
    printf("Thanks for playing\n\n");
    if(uscore==10){
        printf("You won the game!");
    }
    else if(cscore==10){
        printf("You lost the game...");
    }
    putScore(&uscore,&cscore);
    getch();
}

void rps(int choice,int *uscore,int *cscore){
    srand(time(NULL));
    int compgen=((rand() % 3)+1);
    if(compgen==1){
    if(choice==1){
        printf("Its a draw! The computer picked rock aswell..");
    }
    else if(choice==2){
        printf("You won! The computer picked rock.");
        *uscore=*uscore+1;
    }
    else if(choice==3){
        printf("You lost! The computer picked rock :c");
        *cscore=*cscore+1;
    }
    }
    if(compgen==2){
    if(choice==1){
        
        printf("You lost! The computer picked paper :c");
        *cscore=*cscore+1;
    }
    else if(choice==2){
        printf("Its a draw! The computer picked paper aswell..");
    }
    else if(choice==3){
        printf("You won! The computer picked paper.");
        *uscore=*uscore+1;
    }
    }
    if(compgen==3){
    if(choice==1){
        
        printf("You won! The computer picked scissors.");
        *uscore=*uscore+1;
    }
    else if(choice==2){
        printf("You lost! The computer picked scissors :c");
        *cscore=*cscore+1;
    }
    else if(choice==3){
        printf("Its a draw! The computer picked scissors aswell..");
    }
    }
    
}

void putDash(int size){
    for(int i=0;i<size;i++)
    if(i<size-1)
    printf("-");
    else
    printf("-\n");
}

void putScore(int *uscore, int *cscore){
    printf("Your Score is : %d\n",*uscore);
    printf("Computer Score is : %d\n",*cscore);
}

int endLoop(int *uscore,int *cscore){
    char c;
    printf("\n\nWould you like to continue\n[y] YES  [n] NO (Exit game)\n\n-> : ");
    scanf("%s",&c);
    if(*uscore>=10 || *cscore>=10){
        return 0;
    }

    else if( c =='n' || c == 'N'){
        return 0;
    }
    else if( c =='y' || c =='Y'){
        return 1;
    }
    else{
        printf("Error Invalid Arguments");
        endLoop(uscore,cscore);
    }
}