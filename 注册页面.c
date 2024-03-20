#include "head.h"

/*注册账号*/
void registers()  //按结构体的大小，一次写入或者读入1个结构体大小
{
         int flag=0;
         users a,b;//结构体 the_users
         users* z;
         z=&a;
         FILE *fp1,*fp2;
         printf("\t\t************欢迎来到注册界面************\n");
         fp1 = fopen("D:\\CodeBlocks\\all of work\\users.txt","r");
         fp2 = fopen("D:\\CodeBlocks\\all of work\\users.txt","a");
         fscanf(fp1, "%s",b.id); //读入一个ID到b
         printf("请输入您的账号：\n");
         scanf("%s",a.id);
         while(1)
         {
             if (strcmp(a.id, b.id)) /*如果两串不相等*/
             {
                 if (!feof(fp1))    /*如果未到文件尾*/
                 {
                     fscanf(fp1, "%s",b.id); //读入一个ID到b，防止一个账号被多个用户使用
                 }
                 else
                     break;
             }
             else

             {
                 printf("此用户名已存在！请重新注册！\n");
                 flag=1;
                 Sleep(500);
                 fclose(fp1);
                 break;
             }
         }
         if(!flag)
         {
             printf("请输入您的密码：\n");
         scanf("%s",a.password);
         printf("请确认密码：\n");
         scanf("%s",a.make_sure);
		 do{
         	if(!strcmp(a.password,a.make_sure)){
		         fclose(fp1);
				 break;
			 }else{
			 	printf("两次密码不匹配，请重新输入您的密码= =\n");
		         scanf("%s",a.password);
		         printf("请确认密码\n");
		         scanf("%s",a.make_sure);
			 }
		 }while(1);
		 printf("请输入密保问题\n");
		 scanf("%s",a.question);
		 printf("请输入密保答案\n");
         scanf("%s",a.answer);
         fprintf(fp2,"%s %s %s %s\n",z->id,z->password,z->question,z->answer);
         printf("账号注册成功！\n\n");
         Sleep(500);
         fclose(fp2);
         yesorno();
         flag=0;
         }
         else {flag=0; create();}
}

