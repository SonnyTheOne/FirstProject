#include "head.h"

/*���������û��˺�������ļ�*/
void Create_File()
{
    FILE *fp;
    if ((fp = fopen("D:\\CodeBlocks\\all of work\\users.txt","rb"))==NULL)     /*������ļ�������*/
    {
        if ((fp = fopen("D:\\CodeBlocks\\all of work\\users.txt","wb+"))==NULL)
        {
            printf("�޷������ļ���\n");
            exit(0);
        }
    }
}


