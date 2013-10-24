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
    int numberArray[ARRAYLENGTH]={1,2,3,4,5,6,7,8,9};
    int length = 0;
    //イテレータ
    int i,j;
    //入力データ
    char inputCharArray[ARRAYLENGTH]="123456789";
    
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("Password? > ");
    //while(number != 880) {
    
    while(fgets(inputCharArray, ARRAYLENGTH, stdin) != NULL) {
        //printf("Password? > ");
        //scanf("%c", &inputChar);
        
        
        //入力された文字数をカウントしてlengthに代入
        //MARK:lengthがARRAYLENGTHで固定されている。
        length = sizeof(inputCharArray);
        printf("length = %d \n",length);
        //文字列判定をする
        //文字列が数字でなければエラーをはく
        //しかし未実装
        
        
        

        
        //デバッグ用コンソール出力
        for (i = 0; i < length; i++) {
            printf("inputCharArray[%d] = %d\n",i,inputCharArray[i] );
        }
        for (i = 0; i < length; i++) {
            printf("NumberArray[%d] = %d\n",i,numberArray[i] );
        }

        
        for (i = 0; i < length-1; i++) {
            //charからintへキャスト
            numberArray[i] = inputCharArray[i];
            printf("CastedNumberArray[%d]=%d\n",i,numberArray[i]);
        }
        
        
        if(numberArray[0] == 56 && numberArray[1] == 56 && numberArray[2] == 48) {
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
            printf("\nError. Password? > ");
                   //\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n
                   
        }
    }
    return 0;
}

