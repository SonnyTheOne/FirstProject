#include "head.h"

void update()
{
    void operate_teacher();
    void operate_student();
    int d; //������
    system("cls");
    printf("\t\t************��ӭ��������������************\n");
    printf("�������������:\n");
    printf("1.����Ա\n");
    printf("2.ѧ��\n");
    scanf("%d",&d);
    if(d==1)
    {
        operate_teacher();
    }
    if(d==2)
    {
        search();
    }
}

void operate_teacher()
{
    system("cls");
    printf("\t\t************��ӭ��������Ա����************\n");
    printf("\t\t\t   ���������Ĳ�����\n");
    printf("\t\t\t   1.���\n");
    printf("\t\t\t   2.�޸�\n");
    printf("\t\t\t   3.ɾ��\n");
    printf("\t\t\t   4.����\n");
    int k;
    scanf("%d",&k);
    if(k==1)
        add();
}
    /*
    if(k==2)
    {
        change();
    }
    if(k==3)
    {
        delete1();
    }
    if(k==4)
    {
        rank();
    }
}

void operate_student()
{
    search();
}

*/

