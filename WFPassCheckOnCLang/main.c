//
//  main.c
//  WFPassCheckOnCLang
//
//  Created by 山本 諒 on 13/10/23.
//  Copyright (c) 2013年 Walkin. All rights reserved.
//

#include <stdio.h>

#define ARRAYLENGTH 10

//#inclide <string.h>
int main(int argc, const char * argv[])
{

    int number = 0;
    int numberLength;
    //イテレータ
    int i,j;
    
    //入力データ
    char inputChar;
    char inputCharArray[ARRAYLENGTH];
    //char inputSting[];
    
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    /*
    printf("EOF = %d \n",EOF);
    printf("'0' = %d \n",'0');
    printf("'9' = %d \n",'9');
    */
    while(number != 880) {
        printf("Password? > ");

        //入力文字をgetcharを利用して1文字ずつ取得する
        //入力文字が半角数字の0~9でなければエラーを返して、入力し直すよう出力。
        //さらに文字列の長さを計る
        
        //以下のwhileを実行する前にlengthを初期化
        numberLength = 0;
        
        //TODO:ループ判定に改行コードを使用しているので複数の数字以外文字列を入力した時にエラーが起こる
        //　　　ループ判定部分に変更を加える事
        while ((inputChar = getchar()) != '\n') {
            
            printf("in while, inputChar = %c.inputCharNumber = %d \n",inputChar,inputChar);
            
            if (inputChar < '0' || inputChar > '9') {
                printf("入力可能な文字列は半角数字のみです\n");
                //このbreakがうまく働いていない
                break;
            }else{
                inputCharArray[numberLength] = inputChar;
                printf("inputCharArray[%d] = %c \n",numberLength,inputCharArray[numberLength]);
                numberLength++;
            }
        }
        
        printf("whileによる文字読み取り終了");
        
        if(inputCharArray[0] == '8' && inputCharArray[1] == '8' && inputCharArray[2] == '0') {
            for (i=0; i<200; i++) {
                for (j=0; j<250; j++) {
                    if (i < 50) {
                        printf("0");
                    } else if (160 < i) {
                        printf("1");
                        usleep(100);
                    } else if ((j-i+1001)%4 == 0) {
                        printf("1");
                        usleep(100);
                    } else if ((j-i+1001)%3 == 0) {
                        printf("1");
                        usleep(100);
                    } else {
                        printf("0");
                    }
                }
                
            }
            number = 880;
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n　　　　　　　　　　　　　　　　　　　　　　　　　　　Security clear.\n　　　　　　　　　　　　　　　　　　　　　　セキュリティレベルが下がりました。 \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            
            
            
            
        } else {
            printf("\nError. ");
                   //\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n
                   
        }
    }
    return 0;
}

