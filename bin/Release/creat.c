#include "head.h"

/*���������û��˺�������ļ�*/
void Create_File()
{
    FILE *fp;
    if ((fp = fopen("users.txt","rb"))==NULL)     /*������ļ�������*/
    {
        if ((fp = fopen("users.txt","wb+"))==NULL)
        {
            printf("�޷������ļ���\n");
            exit(0);

        }
    }
}


