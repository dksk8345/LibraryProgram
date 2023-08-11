#include "stdafx.h"

void printmenu()
{
    printf("**********************\n");
    printf("1. 책 목록 보기\n");
    printf("2. 책 대출\n");
    printf("3. 책 반납\n");
    printf("4. 나가기\n");
    printf("**********************\n");
    printf("원하는 작업 번호 : ");
    scanf("%d", &selected);
}

// int selectedmenu()
// {
//     scanf("%d",&selected);

//     return selected;
// }

void Anykey()
{
    printf("아무키나 입력하면 화면 이동\n");
    system("read");
    system("clear");
}