
#include "head.h"

/*ע���˺�*/
void registers()  //���ṹ��Ĵ�С��һ��д����߶���1���ṹ���С
{

         users a,b;//�ṹ�� the_users
         FILE *fp;
         printf("\t\t************��ӭ����ע�����************\n");
         fp = fopen("users.txt","wb");
         fread(&b, sizeof(users), 1, fp); //����һ���ṹ���ַ��鵽b
         printf("�����������˺ţ�\n");
         scanf("%s",a.id);
         while(1)
         {
             if (strcmp(a.id, b.id)) /*������������*/
             {
                 if (!feof(fp))    /*���δ���ļ�β*/
                 {
                     fread(&b, sizeof(users), 1, fp);
                 }
                 else
                     break;
             }
             else

             {
                 printf("���û����Ѵ��ڣ�������ע�ᣡ\n");
                 Sleep(1000);
                 fclose(fp);
                 return;
             }
         }
         printf("�������������룺\n");
         scanf("%s",a.password);
         getchar();
         printf("��ȷ�����룺\n");
         scanf("%s",a.make_sure);
		 do{
         	if(!strcmp(a.password,a.make_sure)){
		         fclose(fp);
				 break;
			 }else{
			 	printf("�������벻ƥ�䣡���������룡\n");
		         scanf("%s",a.password);
		         printf("��ȷ������\n");
		         scanf("%s",a.make_sure);
			 }
		 }while(1);
		 printf("�������ܱ�����\n");
		 scanf("%s",a.question);
		 getchar();
		 printf("�������ܱ���\n");
         scanf("%s",a.answer);
         fwrite(&a,sizeof(users),1,fp);
         printf("�˺�ע��ɹ���\n\n");
         Sleep(500);
         fclose(fp);
}
