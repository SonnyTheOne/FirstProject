
#include "head.h"

/*登录系统*/
void Input_login()
{
    users a,b;//定义结构体the_users别名

    FILE *fp;
    printf("欢迎来到登录界面！\n");
    Sleep(1000);
    fp = fopen("users.txt","a+");
    fread(&b, sizeof(users), 1, fp); //读入一个结构体字符块 写入b
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
	                   fread(&b, sizeof(users), 1, fp);
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
	          printf("登录成功,欢迎使用!");
	          Sleep(500);
	          return;
	          }
	       else
	       {    printf("密码不正确!请重新输入密码\n");
	       		scanf("%s",a.password);
	       }
	}while(!strcmp(a.password, b.password));

}
