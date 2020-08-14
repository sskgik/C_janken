#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
    //A君とB君のじゃんけんのプログラム
    //グー＝0  パー=1  チョキ=2
    srand((unsigned int)time(NULL));
    int i=1;
    int numA = 0;
    int numB = 0;
    do{
       printf("%d回目の勝負は", i );
     int A =rand() % 3;
     int B =rand() % 3;

     if(A == B){
         if(A ==0){
            printf("A君はグーでB君もグーで    アイコ\n"); 
         }
         else if(A == 1){
             printf("A君はパーでB君もパーで    アイコ\n");
         }
         else {
             printf("A君はチョキでB君もチョキで    アイコ\n");
         }
     }
     else if(A == 0){
         if (B == 1){
             numA  = 0;
             numB += 1;
             printf("A君はグーでB君はパーで     A君の負け\n");
         }
         else {
             numA += 1;
             numB = 0;
             printf("A君はグーでB君はチョキで    A君の勝ち\n");
         }
     }
     else if(A ==1){
         if(B==0){
             numA += 1;
             numB  = 0;
             printf("A君はパーでB君はグーで    A君の勝ち\n");
         }
         else{
             numA  = 0;
             numB += 1;
             printf("A君はパーでB君はチョキで    A君の負け\n");
         }
     }
     else if(A == 2){
         if(B == 0){
             numA  = 0;
             numB += 1;
             printf("A君はチョキでB君はグーで    A君の負け\n");
         }
         else{
             numA += 1;
             numB  = 0;
             printf("A君はチョキでB君はパーで    A君の勝ち\n");
         }
     }
     i++;
    } 
    while(numA<3);//条件が正の間はループ
   
    printf("A君が3勝したので処理を終了\n");
    return 0;
}