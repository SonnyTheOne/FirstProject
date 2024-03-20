
#include "head.h"
void write()
{
    FILE *fp;
    struct student stu;
    struct student* p=&stu;
    if((fp=fopen("d:\\wangyibo\\ttest\\备份文件.txt","w"))==NULL)
    {
        printf("OMG!");
        exit(1);
    }
    FILE *fp1;
    if((fp1=fopen("d:\\wangyibo\\122221\\1111.txt","rb"))==NULL)
    {
        printf("OMG!");
        exit(1);
    }

    while(!feof(fp1)){
        fscanf(fp1,"%s%s%s%s%d%s%d%d%d%d",p->name,p->num,p->sex,p->race,&p->age,p->address,&p->MathScore,&p->EnglishScore,&p->CScore,&p->SumScore);
        fprintf(fp,"%s %s %s %s %d %s %d %d %d %d\n",p->name,p->num,p->sex,p->race,p->age,p->address,p->MathScore,p->EnglishScore,p->CScore,p->SumScore);
    }
    fclose(fp);
    fclose(fp1);
}
//功能；直接创建一个文档写入已知文档的数据
