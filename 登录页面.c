#include "head.h"

/*��¼ϵͳ*/
void Input_login()
{
    int wr=0; //����������
    users a,b;//����ṹ��the_users����
    FILE *fp;
    printf("��ӭ������¼���棡\n");
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
	           if (!strcmp(a.id, b.id))         //����д��û���
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
       printf("����������\n");
       	scanf("%s",a.password);
    do{

		if (strcmp(a.password, b.password)==0)            /*�������ƥ��*/

	       {
	          fclose(fp);
	          printf("��¼�ɹ�,��ӭʹ��!\n");
	          Sleep(500);
	          return;
	          }
	       else
	       {
                printf("������������������������= =\n");
	       		scanf("%s",a.password);
	       }
	}while(!strcmp(a.password, b.password));
}

