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
    printf("\t\t\t   4.帮助\n");
    printf("请输入指令:\n");
    int k;
    scanf("%d",&k);
    if(k==1)
        registers();
    if(k==2)
        Input_login();
    if(k==3)
        reback();
    if(k==4)
        help();
}

//帮助函数
void help()
{
	system("cls");
	printf("\t\t\t************************************************\n");
	printf("\t\t\t*                    使用说明                  *\n");
	printf("\t\t\t************************************************\n");
	printf("\t\t\t*              欢迎使用学生管理系统            *\n");
	printf("\t\t\t************************************************\n");
	printf("\t\t\t*  学生管理系统是一款为师生设计的系统，为成绩的*\n");
	printf("\t\t\t*管理，查询，统计，备份等提供了方便快捷的方式  *\n");
	printf("\t\t\t************************************************\n");
	printf("\t\t\t*   使用提示及注意事项                         *\n");
	printf("\t\t\t* 1.学生姓名输入时请不超过六个汉字             *\n");
	printf("\t\t\t* 2.学生民族输入时请不超过五个汉字             *\n");
	printf("\t\t\t* 3.学生学号输入时请不超过八个数字             *\n");
	printf("\t\t\t************************************************\n");
	printf("\t\t\t*名称:  学生成绩管理系统                       *\n");
	printf("\t\t\t*作者:  王奕博、李佳昊                         *\n");
	printf("\t\t\t*版本:  2021.4.2                               *\n");
	printf("\t\t\t*邮箱:  1186671075@qq.com                      *\n");
	printf("\t\t\t************************************************\n");
	printf("\t\t\t* 祝您使用愉快！                               *\n");
	printf("\t\t\t* 如有建议请发送邮件至作者的邮箱               *\n");
	printf("\t\t\t* 期待您的反馈                                 *\n");
	printf("\t\t\t************************************************\n");
	printf("\t\t\t请按任意键返回主页面");
	getch();
	system("cls");
	create();
}


void yesorno()
{
    printf("\n\n操作已完毕，需要直接登录吗？\n");
    printf("登录请输入1，回到主页面请输入0\n");
    int op;
    scanf("%d",&op);
    if(!op)  create();
}

