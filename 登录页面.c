#include "head.h"

/*登录系统*/
void Input_login()
{
    int wr=0; //密码错误次数
    users a,b;//定义结构体the_users别名
    FILE *fp;
    printf("欢迎来到登录界面！\n");
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
	           if (!strcmp(a.id, b.id))         //如果有此用户名
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
       printf("请输入密码\n");
       	scanf("%s",a.password);
    do{

		if (strcmp(a.password, b.password)==0)            /*如果密码匹配*/

	       {
	          fclose(fp);
	          printf("登录成功,欢迎使用!\n");
	          Sleep(500);
	          return;
	          }
	       else
	       {
                printf("您输入的密码错误，请重新输入= =\n");
	       		scanf("%s",a.password);
	       }
	}while(!strcmp(a.password, b.password));
}

