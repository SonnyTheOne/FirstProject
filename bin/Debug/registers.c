
#include "head.h"

/*注册账号*/
void registers()  //按结构体的大小，一次写入或者读入1个结构体大小
{

         users a,b;//结构体 the_users
         FILE *fp;
         printf("\t\t************欢迎来到注册界面************\n");
         fp = fopen("users.txt","wb");
         fread(&b, sizeof(users), 1, fp); //读入一个结构体字符块到b
         printf("请输入您的账号：\n");
         scanf("%s",a.id);
         while(1)
         {
             if (strcmp(a.id, b.id)) /*如果两串不相等*/
             {
                 if (!feof(fp))    /*如果未到文件尾*/
                 {
                     fread(&b, sizeof(users), 1, fp);
                 }
                 else
                     break;
             }
             else

             {
                 printf("此用户名已存在！请重新注册！\n");
                 Sleep(1000);
                 fclose(fp);
                 return;
             }
         }
         printf("请输入您的密码：\n");
         scanf("%s",a.password);
         getchar();
         printf("请确认密码：\n");
         scanf("%s",a.make_sure);
		 do{
         	if(!strcmp(a.password,a.make_sure)){
		         fclose(fp);
				 break;
			 }else{
			 	printf("两次密码不匹配！请重新输入！\n");
		         scanf("%s",a.password);
		         printf("请确认密码\n");
		         scanf("%s",a.make_sure);
			 }
		 }while(1);
		 printf("请输入密保问题\n");
		 scanf("%s",a.question);
		 getchar();
		 printf("请输入密保答案\n");
         scanf("%s",a.answer);
         fwrite(&a,sizeof(users),1,fp);
         printf("账号注册成功！\n\n");
         Sleep(500);
         fclose(fp);
}
