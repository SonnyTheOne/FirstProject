
#include "head.h"

/*��¼ϵͳ*/
void Input_login()
{
    users a,b;//����ṹ��the_users����

    FILE *fp;
    printf("��ӭ������¼���棡\n");
    Sleep(1000);
    fp = fopen("users.txt","a+");
    fread(&b, sizeof(users), 1, fp); //����һ���ṹ���ַ��� д��b
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
	                   fread(&b, sizeof(users), 1, fp);
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
	          printf("��¼�ɹ�,��ӭʹ��!");
	          Sleep(500);
	          return;
	          }
	       else
	       {    printf("���벻��ȷ!��������������\n");
	       		scanf("%s",a.password);
	       }
	}while(!strcmp(a.password, b.password));

}
