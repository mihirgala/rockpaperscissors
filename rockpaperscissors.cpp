#include<iostream>
#include<conio.h>
#include<time.h>
#include<windows.h>
using namespace std;

void putDash(int size){
    for(int i=0;i<size;i++)
    if(i<size-1)
    cout<<"-";
    else
    cout<<"-"<<endl;
}

int endLoop(int *uscore,int *cscore){
    char c;
    cout<<"\n\nWould you like to continue\n[y] YES  [n] NO (Exit game)\n\n-> : ";
    cin>>c;
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
        cout<<"Error Invalid Arguments";
        endLoop(uscore,cscore);
    }
}

class rockpaperscissors{
    private:

    int userScore=0;
    int compScore=0;

    public:

    int *uS=&userScore;
    int *cS=&compScore;
    void putScore(){
        cout<<"Your score is :"<<*uS<<endl;
        cout<<"Computer's score is :"<<*cS<<endl;
    }
    void rps(int choice,int *uscore,int *cscore){
        srand(time(NULL));
        int compgen=((rand() % 3)+1);
        if(compgen==1){
        if(choice==1){
            cout<<"Its a draw! The computer picked rock aswell.."
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
};

int main(){
    SetConsoleTitle("Rock Paper Sissors v0.5");
    system("cls");
    bool loop=true;
    do{
        system("cls");
        rockpaperscissors rps;
        rps.putScore();
        putDash(100);
        loop=endLoop(rps.uS,rps.cS);
    }while(loop==true);
    
    
    
    return 0;
}