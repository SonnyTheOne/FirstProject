
#include "head.h"

/*�һ�����*/
void reback()  //���ṹ��Ĵ�С��һ��д����߶���1���ṹ���С
     {
         users a,b;//�ṹ�� The_users ����������
         FILE *fp;
         char temp[20];
         int count = 0;
         printf("��ӭ�����һ�������棡\n");
         Sleep(1000);
         fp = fopen("users.txt","r");
    	fread(&b, sizeof(users), 1, fp); //����һ���ṹ���ַ��� д��b
    	printf("�������˺�\n");
    	scanf("%s",a.id);
             while (1)
           {
	           if (strcmp(a.id, b.id)==0)         //����д��û���
	           {
	               break;
	           }

	           else
	           {
	               if (!feof(fp))  //����ļ�û�ж���

	               {
	                   fread(&b, sizeof(users), 1, fp);
	               }

	               else
	               {
	                   printf("���û��������ڣ����������룡\n");
					   Sleep(500);
	                   fclose(fp);
					   return;
	               }
	           }
       }
         printf("%s\n",b.question);
        printf("��ش��ܱ�����\n");
        scanf("%s",a.answer);
        do
        {
            if(!strcmp(a.answer,b.answer))
            {
                printf("���������ǣ�%s\n",b.password);
                break;
            }
            else
            {
                printf("���Ĵ���������������\n");
                getchar();
                scanf("%s",a.answer);
            }
        }while(1);
        Sleep(5000);
}
