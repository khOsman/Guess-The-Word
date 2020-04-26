#include<iostream>
#include<string.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int static chance=3;
int main(){
    srand(time(0));
    string vocabulary[] = {"analysis","benefit","distribution","established","function","income","legal","method","policy","research","developer","hello","ball","programmer","software"};
    string guess="";
    char letter;
    int points=0;
    int s1,option,randWord ;
    randWord = rand()%10;
    cout<<"\n\n\tAuthor : Khan Osman, Chot-khato Programmer(o~o),Software Developer ! ! !\n";
    cout<<"\tLinkedIn : https://www.linkedin.com/in/md-osman-haruni-shin-32127818b/ \n\n";
    cout<<"\n\n\t**Let's Play**\n";
    cout<<"\t--GUESS THE WORD--\n\n";
    cout<<"\n\tPress 1 to start the game\n\tPress 2 to know about the game\n\tPress 0 to quit the game\n";
    cout<<"\tEnter: ";
    cin>>option;
    cin.ignore();
    if(option == 1){
            int numberOfWords;
            cout<<"\n\tChoose a limit between 3 to 15 : ";
            cin>>numberOfWords;
             cin.ignore();
            if(numberOfWords>=3 && numberOfWords<=15){
                      for(int i= 0; i<numberOfWords;i++){
                        cout<<"\n\tLifeline : "<<chance<<"\n";
                        cout<<"\n\tGuess the vocabulary : ";
                        s1 = 0;
                        int wordLength =vocabulary[randWord].length();

                            for(int p=0;p<wordLength;p++){
                                    if(p==0){
                                        cout<<vocabulary[randWord][s1];
                                    }
                                    else if(p%2==0){

                                        cout<<vocabulary[randWord][s1];
                                    }else{
                                        cout<<"*";
                                    }
                                    s1++;
                            }
                            cout<<"\n";
                            cout<<"\n\tEnter your guessed letters  : ";
                            for(int j=0;j<vocabulary[randWord].length();j++){
                                 cin>>letter;
                                 guess+=letter;
                            }
                            if(guess == vocabulary[randWord]){
                                cout<<"\n\tYou are amazing !!!\n";
                                points++;
                                cout<<"\tScore : "<<points<<"\n\n";
                            }else{
                                ;
                                cout<<"\n\tLifeLine : "<<--chance<<endl;
                                cout<<"\tYou were so close... !!!\n";
                                cout<<"\tTry again... Don't be dumb (-_-)\n\n";
                            }
                            if(chance == 0){
                                break;
                            }
                            randWord = rand()%15;
                            if(vocabulary[randWord] == guess){
                                randWord = rand()%6;
                            }
                            guess="";
                }//game over
            if(chance==0){
                cout<<"\n\tI know you are winner, don't be upset\n\tYou can enrich your vocabulary\n\tKeep trying!!!\n\tB E S T  O F  L U C K !!!";
            }
            if(points == numberOfWords){
                cout<<"\n\t\tHello Top-Scorer (o_o)\n";
                cout<<"\tC O N G R A T S ! ! ! I knew it... Your vocabulary knowledge is amazing!!!\n";
            }
        }//limit
        else{
            cout<<"\n\tDon't try to act smart --- Please, enter the correct limit !!!\n\n ";
        }
    }//if end
    else if(option == 2){
        cout<<"\n\tGame Rule :\n";
        cout<<"\tYou have to guess the word and then input the letters one by one\n";
        cout<<"\tExample - *el*o\n\tYou have input the letters in this way- hello then press enter\n\n";
    }
    else if(option == 0){
            cout<<"\t(^_^) Try to Play Next Time ! ! !\n";
            return 0;
    }
    else{
        cout<<"\n\tDon't try to act smart --- Please, enter the correct option !!!\n\n ";
    }
main();
return 0;
}
