#include "head.h"

/*ע���˺�*/
void registers()  //���ṹ��Ĵ�С��һ��д����߶���1���ṹ���С
{
         int flag=0;
         users a,b;//�ṹ�� the_users
         users* z;
         z=&a;
         FILE *fp1,*fp2;
         printf("\t\t************��ӭ����ע�����************\n");
         fp1 = fopen("D:\\CodeBlocks\\all of work\\users.txt","r");
         fp2 = fopen("D:\\CodeBlocks\\all of work\\users.txt","a");
         fscanf(fp1, "%s",b.id); //����һ��ID��b
         printf("�����������˺ţ�\n");
         scanf("%s",a.id);
         while(1)
         {
             if (strcmp(a.id, b.id)) /*������������*/
             {
                 if (!feof(fp1))    /*���δ���ļ�β*/
                 {
                     fscanf(fp1, "%s",b.id); //����һ��ID��b����ֹһ���˺ű�����û�ʹ��
                 }
                 else
                     break;
             }
             else

             {
                 printf("���û����Ѵ��ڣ�������ע�ᣡ\n");
                 flag=1;
                 Sleep(500);
                 fclose(fp1);
                 break;
             }
         }
         if(!flag)
         {
             printf("�������������룺\n");
         scanf("%s",a.password);
         printf("��ȷ�����룺\n");
         scanf("%s",a.make_sure);
		 do{
         	if(!strcmp(a.password,a.make_sure)){
		         fclose(fp1);
				 break;
			 }else{
			 	printf("�������벻ƥ�䣬������������������= =\n");
		         scanf("%s",a.password);
		         printf("��ȷ������\n");
		         scanf("%s",a.make_sure);
			 }
		 }while(1);
		 printf("�������ܱ�����\n");
		 scanf("%s",a.question);
		 printf("�������ܱ���\n");
         scanf("%s",a.answer);
         fprintf(fp2,"%s %s %s %s\n",z->id,z->password,z->question,z->answer);
         printf("�˺�ע��ɹ���\n\n");
         Sleep(500);
         fclose(fp2);
         yesorno();
         flag=0;
         }
         else {flag=0; create();}
}

