#include "head.h"


//���ѧ�����
void add()
{
    int i;
    stu a;
    FILE *fp;
struct student* p=&a;
p->MathScore=-1,p->EnglishScore=-1,p->CScore=-1,p->CPPScore=-1,p->LinearAlgebra=-1,p->Physics=-1,p->History=-1,p->MilitaryTheory=-1;
    if((fp=fopen("D:\\CodeBlocks\\all of work\\information.txt","a"))==NULL)
{
    printf("OMG!");
    exit(1);
}
    char s[50];
    int ss;
    printf("������������ӵ�ѧ����Ϣ\n");
    printf("������ѧ��������\n");
    scanf("%s",a.name);
    printf("������ѧ��ѧ�ţ�\n");
    scanf("%s",a.num);
    printf("������ѧ���Ա𡪡�����������m(male),Ů��������f(female)��\n");
    scanf("%s",a.sex);
    printf("������ѧ�����壺\n");
    scanf("%s",a.race);
    printf("������ѧ�����䣺\n");
    scanf("%d",&a.age);
    printf("������ѧ����ַ��\n");
    scanf("%s",a.address);
    for(i=1;i<=8;i++)
    {
        printf("����������¼��Ŀ�Ŀ����0����¼��(�밴��ʽ¼�룬���磻���� Ӣ�� ���� ���Դ��� ......\n");
        scanf("%s",s);
        if(!(!strcmp(s,"����")||!strcmp(s,"Ӣ��")||!strcmp(s,"����")||!strcmp(s,"��������")||!strcmp(s,"���Դ���")||!strcmp(s,"C����")||!strcmp(s,"C++")||!strcmp(s,"����ʷ"))&&strcmp(s,"0"))
        {
            printf("��Ҫ¼��Ŀ�Ŀ����������¼�룡\n");
            i--;
            continue;
        }
        if(s[0]=='0')
            {break;}
        printf("������ѧ���ÿ�Ŀ�ɼ�\n");
        scanf("%d",&ss);
         if(!strcmp(s,"����"))
         {
             p->MathScore=ss;
         }
          if(!strcmp(s,"Ӣ��"))
         {
             p->EnglishScore=ss;
         }
          if(!strcmp(s,"����"))
         {
             p->Physics=ss;
         }
          if(!strcmp(s,"��������"))
         {
             p->MilitaryTheory=ss;
         }
          if(!strcmp(s,"���Դ���"))
         {
             p->LinearAlgebra=ss;
         }
          if(!strcmp(s,"C����"))
         {
             p->CScore=ss;
         }
          if(!strcmp(s,"C++"))
         {
             p->CPPScore=ss;
         }
          if(!strcmp(s,"����ʷ"))
         {
             p->History=ss;
         }
    }

    fseek(fp,0L,2);
    fprintf(fp,"%s %s %s %s %d %s %d %d %d %d %d %d %d %d\n",p->name,p->num,p->sex,p->race,p->age,p->address,p->MathScore,p->EnglishScore,p->CScore,p->CPPScore,p->LinearAlgebra,p->Physics,p->History,p->MilitaryTheory);
    fclose(fp);
}

