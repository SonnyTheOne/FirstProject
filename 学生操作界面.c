#include "head.h"
#define doprint if(p->MathScore!=-1){printf("������%d ",p->MathScore);}if(p->EnglishScore!=-1){printf("Ӣ�%d ",p->EnglishScore);}if(p->CScore!=-1){printf("C���ԣ�%d ",p->CScore);}if(p->CPPScore!=-1){printf("C++��%d ",p->CPPScore);}if(p->LinearAlgebra!=-1){printf("���Դ�����%d ",p->LinearAlgebra);}if(p->Physics!=-1){printf("����%d ",p->Physics);}if(p->History!=-1){printf("��ʷ��%d ",p->History);}if(p->MilitaryTheory!=-1){printf("�������ۣ�%d ",p->MilitaryTheory);}
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
    printf("��ѡ���ѯģʽ��\n");
    printf("1.�����ѯ\n2.��ϲ�ѯ\n");
    scanf("%d",&k);
    if(k==1)
    {
        printf("ѡ���ѯ���ߣ�\n1.����\n2.ѧ��\n");
        int w;
        scanf("%d",&w);
        if(w==1)
        {
            printf("�������������\n");
            char kk[20];
            scanf("%s",kk);
            while(!feof(fp))
            {
                fscanf(fp,"%s",p->name);
                if(feof(fp)){break;}
                if(strcmp(kk,p->name)==0)
                {
                    fscanf(fp,"%s%s%s%d%s%d%d%d%d%d%d%d%d",p->num,p->sex,p->race,&p->age,p->address,&p->MathScore,&p->EnglishScore,&p->CScore,&p->CPPScore,&p->LinearAlgebra,&p->Physics,&p->History,&p->MilitaryTheory);
                    printf("������Ϣ��������%s ѧ�ţ�%s �Ա�%s ���壻%s ���䣻%d ��ַ��%s\n",p->name,p->num,p->sex,p->race,p->age,p->address);
                    doprint;
                }
            }

        }
        if(w==2)
        {
            printf("���������ѧ��\n");
            char qq[20];
            scanf("%s",qq);
            while(!feof(fp))
            {
                fscanf(fp,"%s%s",p->name,p->num);
                if(feof(fp)){break;};
                if(strcmp(qq,p->num)==0)
                {
                    fscanf(fp,"%s%s%d%s%d%d%d%d%d%d%d%d",p->sex,p->race,&p->age,p->address,&p->MathScore,&p->EnglishScore,&p->CScore,&p->CPPScore,&p->LinearAlgebra,&p->Physics,&p->History,&p->MilitaryTheory);
                    printf("������Ϣ��������%s ѧ�ţ�%s �Ա�%s ���壻%s ���䣻%d ��ַ��%s\n",p->name,p->num,p->sex,p->race,p->age,p->address);
                    doprint;
                }
            }
        }
    }
    if(k==2)
    {
        printf("�밴˳��ѡ����ϵ���Ŀ��\n1.����\n2.ѧ��\n3.�Ա�\n4.����\n5.����\n6.��ַ\n");
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
                printf("�������������\n");
            }
            if(m[gg]=='2')
            {
                printf("���������ѧ��\n");
            }
             if(m[gg]=='3')
            {
                printf("����������Ա�\n");
            }
             if(m[gg]=='4')
            {
                printf("�������������\n");
            }
             if(m[gg]=='5')
            {
                printf("�������������\n");
            }
             if(m[gg]=='6')
            {
                printf("��������ĵ�ַ\n");
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
printf("������Ϣ��������%s ѧ�ţ�%s �Ա�%s ���壻%s ���䣻%d ��ַ��%s\n",p->name,p->num,p->sex,p->race,p->age,p->address);
                    doprint;                    }
                    }
                if(strcmp(oo,p->num)==0)
                {
                    h[ccc]=h[ccc]+1;
                     if(h[ccc]==ddd)
                {
printf("������Ϣ��������%s ѧ�ţ�%s �Ա�%s ���壻%s ���䣻%d ��ַ��%s\n",p->name,p->num,p->sex,p->race,p->age,p->address);
                    doprint;                }
                }
                if(strcmp(oo,p->sex)==0)
                {
                   h[ccc]=h[ccc]+1;
                    if(h[ccc]==ddd)
                {
printf("������Ϣ��������%s ѧ�ţ�%s �Ա�%s ���壻%s ���䣻%d ��ַ��%s\n",p->name,p->num,p->sex,p->race,p->age,p->address);
                   doprint;                }
                }
                if(strcmp(oo,p->race)==0)
                {
                    h[ccc]=h[ccc]+1;
                     if(h[ccc]==ddd)
                {
printf("������Ϣ��������%s ѧ�ţ�%s �Ա�%s ���壻%s ���䣻%d ��ַ��%s\n",p->name,p->num,p->sex,p->race,p->age,p->address);
                    doprint;                }
                }
                if(strcmp(oo,e)==0)
                {

                    h[ccc]=h[ccc]+1;
                    if(h[ccc]==ddd)
                    {
                    printf("  ������Ϣ��������%s ѧ�ţ�%s �Ա�%s ���壻%s ���䣻%d ��ַ��%s\n",p->name,p->num,p->sex,p->race,p->age,p->address);
                    doprint;
                    }
                }
                if(strcmp(oo,p->address)==0)
                {
                    h[ccc]=h[ccc]+1;
                     if(h[ccc]==ddd)
                {
printf("������Ϣ��������%s ѧ�ţ�%s �Ա�%s ���壻%s ���䣻%d ��ַ��%s\n",p->name,p->num,p->sex,p->race,p->age,p->address);
                    doprint;                }
                }
                ccc=ccc+1;
                }
                fseek(fp,0L,0);
                }
        }

    fclose(fp);
}

