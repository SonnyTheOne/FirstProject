
#include "head.h"

void create()
{
    void Create_File();
    void registers();
    void Input_login();
    void reback();
    void update();
    Create_File();
    printf("\t\t************学生成绩管理系统************\n");
    printf("\t\t\t   1.注册\n");
    printf("\t\t\t   2.登陆\n");
    printf("\t\t\t   3.找回密码\n");
    printf("请输入指令:\n");
    int k;
    scanf("%d",&k);
    if(k==1)
    {
        registers();
        create();
    }
    if(k==2)
    {
        Input_login();
    }
    if(k==3)
    {
        reback();
    }
}
