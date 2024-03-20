#include "head.h"
#define doprint if(p->MathScore!=-1){printf("高数；%d ",p->MathScore);}if(p->EnglishScore!=-1){printf("英语；%d ",p->EnglishScore);}if(p->CScore!=-1){printf("C语言；%d ",p->CScore);}if(p->CPPScore!=-1){printf("C++；%d ",p->CPPScore);}if(p->LinearAlgebra!=-1){printf("线性代数；%d ",p->LinearAlgebra);}if(p->Physics!=-1){printf("物理；%d ",p->Physics);}if(p->History!=-1){printf("历史；%d ",p->History);}if(p->MilitaryTheory!=-1){printf("军事理论；%d ",p->MilitaryTheory);}
void search()
{
    system("cls");
    FILE *fp;
    struct student stu;
    struct student* p=&stu;
    if((fp=fopen("D:\\CodeBlocks\\all of work\\information.txt","rb"))==NULL)
    {
        printf("OMG!");
        exit(1);
    }
    int k;
    printf("请选择查询模式；\n");
    printf("1.单项查询\n2.组合查询\n");
    scanf("%d",&k);
    if(k==1)
    {
        printf("选择查询工具：\n1.姓名\n2.学号\n");
        int w;
        scanf("%d",&w);
        if(w==1)
        {
            printf("请输入你的姓名\n");
            char kk[20];
            scanf("%s",kk);
            while(!feof(fp))
            {
                fscanf(fp,"%s",p->name);
                if(feof(fp)){break;}
                if(strcmp(kk,p->name)==0)
                {
                    fscanf(fp,"%s%s%s%d%s%d%d%d%d%d%d%d%d",p->num,p->sex,p->race,&p->age,p->address,&p->MathScore,&p->EnglishScore,&p->CScore,&p->CPPScore,&p->LinearAlgebra,&p->Physics,&p->History,&p->MilitaryTheory);
                    printf("个人信息；姓名；%s 学号；%s 性别；%s 民族；%s 年龄；%d 地址；%s\n",p->name,p->num,p->sex,p->race,p->age,p->address);
                    doprint;
                }
            }

        }
        if(w==2)
        {
            printf("请输入你的学号\n");
            char qq[20];
            scanf("%s",qq);
            while(!feof(fp))
            {
                fscanf(fp,"%s%s",p->name,p->num);
                if(feof(fp)){break;};
                if(strcmp(qq,p->num)==0)
                {
                    fscanf(fp,"%s%s%d%s%d%d%d%d%d%d%d%d",p->sex,p->race,&p->age,p->address,&p->MathScore,&p->EnglishScore,&p->CScore,&p->CPPScore,&p->LinearAlgebra,&p->Physics,&p->History,&p->MilitaryTheory);
                    printf("个人信息；姓名；%s 学号；%s 性别；%s 民族；%s 年龄；%d 地址；%s\n",p->name,p->num,p->sex,p->race,p->age,p->address);
                    doprint;
                }
            }
        }
    }
    if(k==2)
    {
        printf("请按顺序选择组合的项目；\n1.姓名\n2.学号\n3.性别\n4.民族\n5.年龄\n6.地址\n");
        int aa=0,bb=0,cc=0,dd=0,ee=0,ff=0;
        char m[7];
        char e[4]={'/0'};
        scanf("%s",m);
        char ttt;
        int gg;
        int ddd,i;
        int h[50]={0};
        int ccc=0;
        ddd=strlen(m);
        for(gg=0;gg<ddd;gg++)
             {

            if(m[gg]=='1')
            {
                printf("请输入你的姓名\n");
            }
            if(m[gg]=='2')
            {
                printf("请输入你的学号\n");
            }
             if(m[gg]=='3')
            {
                printf("请输入你的性别\n");
            }
             if(m[gg]=='4')
            {
                printf("请输入你的民族\n");
            }
             if(m[gg]=='5')
            {
                printf("请输入你的年龄\n");
            }
             if(m[gg]=='6')
            {
                printf("请输入你的地址\n");
            }
        }

            char oo[20];
              for(i=0;i<ddd;i++)
                {
                ccc=0;
                scanf("%s",oo);
                while(!feof(fp)){
                fscanf(fp,"%s%s%s%s%d%s%d%d%d%d%d%d%d%d",p->name,p->num,p->sex,p->race,&p->age,p->address,&p->MathScore,&p->EnglishScore,&p->CScore,&p->CPPScore,&p->LinearAlgebra,&p->Physics,&p->History,&p->MilitaryTheory);
                if(feof(fp)){break;}
                e[1]=(p->age)%10+'0';
                e[0]=(p->age)/10+'0';
                if(strcmp(oo,p->name)==0)
                {
                    h[ccc]=h[ccc]+1;
                    if(h[ccc]==ddd)
                    {
printf("个人信息；姓名；%s 学号；%s 性别；%s 民族；%s 年龄；%d 地址；%s\n",p->name,p->num,p->sex,p->race,p->age,p->address);
                    doprint;                    }
                    }
                if(strcmp(oo,p->num)==0)
                {
                    h[ccc]=h[ccc]+1;
                     if(h[ccc]==ddd)
                {
printf("个人信息；姓名；%s 学号；%s 性别；%s 民族；%s 年龄；%d 地址；%s\n",p->name,p->num,p->sex,p->race,p->age,p->address);
                    doprint;                }
                }
                if(strcmp(oo,p->sex)==0)
                {
                   h[ccc]=h[ccc]+1;
                    if(h[ccc]==ddd)
                {
printf("个人信息；姓名；%s 学号；%s 性别；%s 民族；%s 年龄；%d 地址；%s\n",p->name,p->num,p->sex,p->race,p->age,p->address);
                   doprint;                }
                }
                if(strcmp(oo,p->race)==0)
                {
                    h[ccc]=h[ccc]+1;
                     if(h[ccc]==ddd)
                {
printf("个人信息；姓名；%s 学号；%s 性别；%s 民族；%s 年龄；%d 地址；%s\n",p->name,p->num,p->sex,p->race,p->age,p->address);
                    doprint;                }
                }
                if(strcmp(oo,e)==0)
                {

                    h[ccc]=h[ccc]+1;
                    if(h[ccc]==ddd)
                    {
                    printf("  个人信息；姓名；%s 学号；%s 性别；%s 民族；%s 年龄；%d 地址；%s\n",p->name,p->num,p->sex,p->race,p->age,p->address);
                    doprint;
                    }
                }
                if(strcmp(oo,p->address)==0)
                {
                    h[ccc]=h[ccc]+1;
                     if(h[ccc]==ddd)
                {
printf("个人信息；姓名；%s 学号；%s 性别；%s 民族；%s 年龄；%d 地址；%s\n",p->name,p->num,p->sex,p->race,p->age,p->address);
                    doprint;                }
                }
                ccc=ccc+1;
                }
                fseek(fp,0L,0);
                }
        }

    fclose(fp);
}

