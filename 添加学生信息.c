#include "head.h"


//添加学生结点
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
    printf("请输入您想添加的学生信息\n");
    printf("请输入学生姓名：\n");
    scanf("%s",a.name);
    printf("请输入学生学号：\n");
    scanf("%s",a.num);
    printf("请输入学生性别——男生请输入m(male),女生请输入f(female)：\n");
    scanf("%s",a.sex);
    printf("请输入学生民族：\n");
    scanf("%s",a.race);
    printf("请输入学生年龄：\n");
    scanf("%d",&a.age);
    printf("请输入学生地址：\n");
    scanf("%s",a.address);
    for(i=1;i<=8;i++)
    {
        printf("请输入所需录入的科目，按0结束录入(请按格式录入，例如；高数 英语 物理 线性代数 ......\n");
        scanf("%s",s);
        if(!(!strcmp(s,"高数")||!strcmp(s,"英语")||!strcmp(s,"物理")||!strcmp(s,"军事理论")||!strcmp(s,"线性代数")||!strcmp(s,"C语言")||!strcmp(s,"C++")||!strcmp(s,"近代史"))&&strcmp(s,"0"))
        {
            printf("所要录入的科目有误，请重新录入！\n");
            i--;
            continue;
        }
        if(s[0]=='0')
            {break;}
        printf("请输入学生该科目成绩\n");
        scanf("%d",&ss);
         if(!strcmp(s,"高数"))
         {
             p->MathScore=ss;
         }
          if(!strcmp(s,"英语"))
         {
             p->EnglishScore=ss;
         }
          if(!strcmp(s,"物理"))
         {
             p->Physics=ss;
         }
          if(!strcmp(s,"军事理论"))
         {
             p->MilitaryTheory=ss;
         }
          if(!strcmp(s,"线性代数"))
         {
             p->LinearAlgebra=ss;
         }
          if(!strcmp(s,"C语言"))
         {
             p->CScore=ss;
         }
          if(!strcmp(s,"C++"))
         {
             p->CPPScore=ss;
         }
          if(!strcmp(s,"近代史"))
         {
             p->History=ss;
         }
    }

    fseek(fp,0L,2);
    fprintf(fp,"%s %s %s %s %d %s %d %d %d %d %d %d %d %d\n",p->name,p->num,p->sex,p->race,p->age,p->address,p->MathScore,p->EnglishScore,p->CScore,p->CPPScore,p->LinearAlgebra,p->Physics,p->History,p->MilitaryTheory);
    fclose(fp);
}

