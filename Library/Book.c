#include "stdafx.h"

void init()
{
    FILE * file1 = fopen("BookList.txt","wb");
    fputs("Toeic 3\nApple 1\nEnglish 9\nMath 14\nSpeak 5",file1);
    fclose(file1);
    
    FILE * file2 = fopen("BookList.txt","rb");
    fscanf(file2,"%s %d %s %d %s %d %s %d %s %d",Book1,&Toeic,Book2,&Apple,Book3,&English,Book4,&Math,Book5,&Speak);
    fclose(file2);
}

void BookSet()
{
    FILE * file = fopen("BookList.txt", "wb");
    fprintf(file,"%s %d\n%s %d\n%s %d\n%s %d\n%s %d",Book1,Toeic,Book2,Apple,Book3,English,Book4,Math,Book5,Speak);
    fclose(file);
}

void PrintBooks()
{
    system("clear");
    FILE * file = fopen("BookList.txt","rb");
    printf("********************\n");
    printf("****책 목록 화면****\n");
    printf("책이름 대출가능권수\n");
    printf("********************\n\n");
    while(fgets(line,MAX,file)!= NULL)
    {
        printf("%s",line);
    }
    printf("\n\n");
}

void Bookloan()
{
    printf("********************\n");
    printf("****책 대출 화면*****\n");
    printf("********************\n");
    char BookName[MAX];
    printf("대출할 책 이름 : ");
    scanf("%s",BookName);
    if(strcmp(BookName,Book1) == 0)
    {
        if(Toeic > 0)
        {
            Toeic --;
            printf("대출이 완료되었습니다.\n\n");
            BookSet();
        }
        else
        {
            printf("현재 %s 책은 재고가 없습니다.\n\n",BookName);    
        }

    }
    if(strcmp(BookName,Book2) == 0)
    {
        if(Apple > 0)
        {
            Apple --;
            printf("대출이 완료되었습니다.\n");
            BookSet();
        }
        else
        {
            printf("현재 %s 책은 재고가 없습니다.\n",BookName);
        }
    }
    if(strcmp(BookName,Book3) == 0)
    {
        if(English > 0)
        {
            English --;
            printf("대출이 완료되었습니다.\n");
            BookSet();
        }
        else
        {
            printf("현재 %s 책은 재고가 없습니다.\n",BookName);
        }
    }
    if(strcmp(BookName,Book4) == 0)
    {
        if(Math > 0)
        {
            Math --;
            printf("대출이 완료되었습니다.\n");
            BookSet();
        }
        else
        {
            printf("현재 %s 책은 재고가 없습니다.\n",BookName);
        }
    }
    if(strcmp(BookName,Book5) == 0)
    {
        if(Speak > 0)
        {
            Speak --;
            printf("대출이 완료되었습니다.\n");
            BookSet();
        }
        else
        {
            printf("현재 %s 책은 재고가 없습니다.\n",BookName);
        }
    }
}

void ReturnBook()
{
    printf("********************\n");
    printf("****책 반납 화면****\n");
    printf("********************\n");
    char BookName[MAX];
    printf("반납할 책 이름 : ");
    scanf("%s",BookName);
    if(strcmp(BookName,Book1) == 0)
    {
        Toeic ++;
        printf("반납이 완료되었습니다.\n\n");
        BookSet();
    }
    if(strcmp(BookName,Book2) == 0)
    {
        Apple ++;
        printf("반납이 완료되었습니다.\n\n");
        BookSet();
    }
    if(strcmp(BookName,Book3) == 0)
    {
        English ++;
        printf("반납이 완료되었습니다.\n\n");
        BookSet();
    }
    if(strcmp(BookName,Book4) == 0)
    {
        Math ++;
        printf("반납이 완료되었습니다.\n\n");
        BookSet();
    }
    if(strcmp(BookName,Book5) == 0)
    {
        Speak ++;
        printf("반납이 완료되었습니다.\n\n");
        BookSet();
    }
}
