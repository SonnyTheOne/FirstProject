#include "head.h"

/*�һ�����*/
void reback()  //���ṹ��Ĵ�С��һ��д����߶���1���ṹ���С
     {
         users a,b;//�ṹ�� The_users ����������
         FILE *fp;
         char temp[20];
         int count = 0;
         printf("��ӭ�����һ�������棡\n");
         Sleep(500);
         fp = fopen("D:\\CodeBlocks\\all of work\\users.txt","r");
    	fscanf(fp, "%s",b.id); //�������Ǵ��ļ��ж�ȡһ���û���Ϣ���ṹ��b��
        fscanf(fp, "%s",b.password);
        fscanf(fp, "%s",b.question);
        fscanf(fp, "%s",b.answer);
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
                        fscanf(fp, "%s",b.id); //�������Ǵ��ļ��ж�ȡһ���û���Ϣ���ṹ��b��
                        fscanf(fp, "%s",b.password);
                        fscanf(fp, "%s",b.question);
                        fscanf(fp, "%s",b.answer);
	               }

	               else
	               {
	                   printf("���û��������ڣ����������룡\n");
					   Sleep(500);
	                   fclose(fp);
					   create();
	               }
	           }
       }
       printf("�����������õ��ܱ����⣺");
         printf("%s\n",b.question);
        printf("��ش��ܱ�����\n");
        scanf("%s",a.answer);
        int wr=0; //�ش�������
        do
        {
            if(!strcmp(a.answer,b.answer))
            {
                printf("���������ǣ�%s\n",b.password);
                break;
            }
            else
            {
                wr++;
                if(wr==3) break;
                printf("���Ĵ���������������,�����������λ�ǿ���˳�Ŷ= =\n");
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

