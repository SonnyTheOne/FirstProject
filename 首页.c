#include "head.h"

void create()
{
    void Create_File();
    void registers();
    void Input_login();
    void reback();
    void update();
    Create_File();
    printf("\t\t************ѧ���ɼ�����ϵͳ************\n");
    printf("\t\t\t   1.ע��\n");
    printf("\t\t\t   2.��½\n");
    printf("\t\t\t   3.�һ�����\n");
    printf("\t\t\t   4.����\n");
    printf("������ָ��:\n");
    int k;
    scanf("%d",&k);
    if(k==1)
        registers();
    if(k==2)
        Input_login();
    if(k==3)
        reback();
    if(k==4)
        help();
}

//��������
void help()
{
	system("cls");
	printf("\t\t\t************************************************\n");
	printf("\t\t\t*                    ʹ��˵��                  *\n");
	printf("\t\t\t************************************************\n");
	printf("\t\t\t*              ��ӭʹ��ѧ������ϵͳ            *\n");
	printf("\t\t\t************************************************\n");
	printf("\t\t\t*  ѧ������ϵͳ��һ��Ϊʦ����Ƶ�ϵͳ��Ϊ�ɼ���*\n");
	printf("\t\t\t*������ѯ��ͳ�ƣ����ݵ��ṩ�˷����ݵķ�ʽ  *\n");
	printf("\t\t\t************************************************\n");
	printf("\t\t\t*   ʹ����ʾ��ע������                         *\n");
	printf("\t\t\t* 1.ѧ����������ʱ�벻������������             *\n");
	printf("\t\t\t* 2.ѧ����������ʱ�벻�����������             *\n");
	printf("\t\t\t* 3.ѧ��ѧ������ʱ�벻�����˸�����             *\n");
	printf("\t\t\t************************************************\n");
	printf("\t\t\t*����:  ѧ���ɼ�����ϵͳ                       *\n");
	printf("\t\t\t*����:  ���Ȳ�������                         *\n");
	printf("\t\t\t*�汾:  2021.4.2                               *\n");
	printf("\t\t\t*����:  1186671075@qq.com                      *\n");
	printf("\t\t\t************************************************\n");
	printf("\t\t\t* ף��ʹ����죡                               *\n");
	printf("\t\t\t* ���н����뷢���ʼ������ߵ�����               *\n");
	printf("\t\t\t* �ڴ����ķ���                                 *\n");
	printf("\t\t\t************************************************\n");
	printf("\t\t\t�밴�����������ҳ��");
	getch();
	system("cls");
	create();
}


void yesorno()
{
    printf("\n\n��������ϣ���Ҫֱ�ӵ�¼��\n");
    printf("��¼������1���ص���ҳ��������0\n");
    int op;
    scanf("%d",&op);
    if(!op)  create();
}

