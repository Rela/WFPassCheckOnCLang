//
//  main.c
//  WFPassCheckOnCLang
//
//  Created by 山本 諒 on 13/10/23.
//  Copyright (c) 2013年 Walkin. All rights reserved.
//

#include <stdio.h>

#define ARRAYLENGTH 100

//#inclide <string.h>
int main(int argc, const char * argv[])
{

    int number = 0;
    int numberLength;
    //boolean型が無いのでint型を利用する。
    int hasInputNotASCII;
    //イテレータ
    int i,j;
    //入力データ
    char inputChar;
    char inputCharArray[ARRAYLENGTH];
    
    
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("Password? > ");
    
    while(number != 880) {

        //lengthと真偽値を初期化
        numberLength = 0;
        hasInputNotASCII = 0;

        //入力文字をgetcharを利用して改行コードまで1文字ずつ取得する
        //取得した入力文字が半角数字の0~9であるかどうかを判定。
        //さらに文字列の長さを計る
        while ((inputChar = getchar()) != '\n') {
            
            //printf("in while, inputChar = %c.inputCharNumber = %d \n",inputChar,inputChar);
            
            if ((inputChar < '0' || inputChar > '9')) {
                //入力値が半角数字以外だった場合
                hasInputNotASCII = 1;
            }else{
                inputCharArray[numberLength] = inputChar;
                //printf("inputCharArray[%d] = %c \n",numberLength,inputCharArray[numberLength]);
                numberLength++;
            }
        }
        
        //printf("whileによる文字読み取り終了\n");
        
        //if文の条件にhasInputNotASCIIの判定を追加
        if((inputCharArray[0] == '8' && inputCharArray[1] == '8' && inputCharArray[2] == '0') && hasInputNotASCII == 0) {
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
            
            
            
            
        }else{
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            //半角数字以外が入力値にあった場合の挙動
            if (hasInputNotASCII==1) {
                printf("WARNING:INPUT ONLY ASCII CODE!!!\n");
            }
            printf("Error.Password? > ");
        }
    }
    return 0;
}

