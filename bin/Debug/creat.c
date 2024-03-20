#include "head.h"

/*创建储存用户账号密码的文件*/
void Create_File()
{
    FILE *fp;
    if ((fp = fopen("users.txt","rb"))==NULL)     /*如果此文件不存在*/
    {
        if ((fp = fopen("users.txt","wb+"))==NULL)
        {
            printf("无法建立文件！\n");
            exit(0);

        }
    }
}


