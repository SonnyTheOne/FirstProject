#include "head.h"

/*找回密码*/
void reback()  //按结构体的大小，一次写入或者读入1个结构体大小
     {
         users a,b;//结构体 The_users 重命名定义
         FILE *fp;
         char temp[20];
         int count = 0;
         printf("欢迎来到找回密码界面！\n");
         Sleep(500);
         fp = fopen("D:\\CodeBlocks\\all of work\\users.txt","r");
    	fscanf(fp, "%s",b.id); //这四行是从文件中读取一个用户信息到结构体b中
        fscanf(fp, "%s",b.password);
        fscanf(fp, "%s",b.question);
        fscanf(fp, "%s",b.answer);
    	printf("请输入账号\n");
    	scanf("%s",a.id);
             while (1)
           {
	           if (strcmp(a.id, b.id)==0)         //如果有此用户名
	           {
	               break;
	           }

	           else
	           {
	               if (!feof(fp))  //如果文件没有读完

	               {
                        fscanf(fp, "%s",b.id); //这四行是从文件中读取一个用户信息到结构体b中
                        fscanf(fp, "%s",b.password);
                        fscanf(fp, "%s",b.question);
                        fscanf(fp, "%s",b.answer);
	               }

	               else
	               {
	                   printf("此用户名不存在，请重新输入！\n");
					   Sleep(500);
	                   fclose(fp);
					   create();
	               }
	           }
       }
       printf("这是您所设置的密保问题：");
         printf("%s\n",b.question);
        printf("请回答密保问题\n");
        scanf("%s",a.answer);
        int wr=0; //回答错误次数
        do
        {
            if(!strcmp(a.answer,b.answer))
            {
                printf("您的密码是：%s\n",b.password);
                break;
            }
            else
            {
                wr++;
                if(wr==3) break;
                printf("您的答案有误，请重新作答,连续错误三次会强制退出哦= =\n");
                scanf("%s",a.answer);
            }
        }while(1);
        Sleep(500);
        if(wr<3)
        {
            yesorno();
            wr=0;
        }
        else {system("cls"); wr=0; create();}
}

