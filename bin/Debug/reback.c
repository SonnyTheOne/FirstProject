
#include "head.h"

/*找回密码*/
void reback()  //按结构体的大小，一次写入或者读入1个结构体大小
     {
         users a,b;//结构体 The_users 重命名定义
         FILE *fp;
         char temp[20];
         int count = 0;
         printf("欢迎来到找回密码界面！\n");
         Sleep(1000);
         fp = fopen("users.txt","r");
    	fread(&b, sizeof(users), 1, fp); //读入一个结构体字符块 写入b
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
	                   fread(&b, sizeof(users), 1, fp);
	               }

	               else
	               {
	                   printf("此用户名不存在，请重新输入！\n");
					   Sleep(500);
	                   fclose(fp);
					   return;
	               }
	           }
       }
         printf("%s\n",b.question);
        printf("请回答密保问题\n");
        scanf("%s",a.answer);
        do
        {
            if(!strcmp(a.answer,b.answer))
            {
                printf("您的密码是：%s\n",b.password);
                break;
            }
            else
            {
                printf("您的答案有误，请重新作答\n");
                getchar();
                scanf("%s",a.answer);
            }
        }while(1);
        Sleep(5000);
}
