#include "head.h"

void update()
{
    void operate_teacher();
    void operate_student();
    int d; //操作数
    system("cls");
    printf("\t\t************欢迎来到操作主界面************\n");
    printf("请输入您的身份:\n");
    printf("1.管理员\n");
    printf("2.学生\n");
    scanf("%d",&d);
    if(d==1)
    {
        operate_teacher();
    }
    if(d==2)
    {
        search();
    }
}

void operate_teacher()
{
    system("cls");
    printf("\t\t************欢迎来到管理员界面************\n");
    printf("\t\t\t   请输入您的操作：\n");
    printf("\t\t\t   1.添加\n");
    printf("\t\t\t   2.修改\n");
    printf("\t\t\t   3.删除\n");
    printf("\t\t\t   4.排序\n");
    int k;
    scanf("%d",&k);
    if(k==1)
        add();
}
    /*
    if(k==2)
    {
        change();
    }
    if(k==3)
    {
        delete1();
    }
    if(k==4)
    {
        rank();
    }
}

void operate_student()
{
    search();
}

*/

