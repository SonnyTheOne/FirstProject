
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
    printf("������ָ��:\n");
    int k;
    scanf("%d",&k);
    if(k==1)
    {
        registers();
        create();
    }
    if(k==2)
    {
        Input_login();
    }
    if(k==3)
    {
        reback();
    }
}
