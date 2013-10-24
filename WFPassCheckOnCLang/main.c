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
    int numberLength = 0;
    //イテレータ
    int i,j;
    //入力データ
    char inputChar[ARRAYLENGTH]="123456789";
    //char inputSting[];
    
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    
    while(number != 880) {
        printf("Password? > ");
        //scanf("%c", &inputChar);
        fgets(inputChar, ARRAYLENGTH, stdin);
         //文字列からintに変更する
        numberLength = sizeof(inputChar);
        for (i = 0; i < numberLength; i++) {
            printf("inputChar[%d] = %d\n",i,inputChar[i] );
        }
        for (i = 0; i < numberLength; i++) {
            printf("initialNumberArray[%d] = %d\n",i,numberArray[i] );
        }

        
        for (i = 0; i < numberLength; i++) {
            //charからintへキャスト
            
            numberArray[i] = inputChar[i];
            printf("numberArray[%d]=%d\n",i,numberArray[i]);
        }
        
        
        if(numberArray[0] == 57 && numberArray[1] == 57 && numberArray[2] == 10) {
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

