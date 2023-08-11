#include "stdafx.h"

int main(void){
    init();

    while(1)
    {
        while(1)
        {
            printf("****도서 관리 프로그램****\n");
            getAdminID();
            getAdminPW();
            if(login() == 1)
            {
                printf("로그인 성공\n");
                break;
            }
            else
            {
                printf("로그인 실패, 다시 시도하세요.\n");
            }

        }
        while(1)
        {
            printmenu();
            if( selected == 1)
            {
                system("clear");
                PrintBooks();
                Anykey();
                continue;
            }
            else if(selected == 2)
            {
                system("clear");
                Bookloan();
                Anykey();
                continue;
            }
            else if(selected == 3)
            {
                system("clear");
                ReturnBook();
                Anykey();
                continue;
            }
            else if(selected == 4)
            {
                printf("프로그램을 종료합니다.\n");
                exit(0);
            }
        }
    }
    // close();
    return 0;
}