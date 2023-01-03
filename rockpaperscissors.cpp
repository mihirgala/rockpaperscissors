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

int main(){
    SetConsoleTitle("Rock Paper Sissors v0.5");
    system("cls");
    bool loop=true;
    do{
        system("cls");
        putDash(100);
        //loop=endloop();
    }while(loop==true);
    
    
    
    return 0;
}