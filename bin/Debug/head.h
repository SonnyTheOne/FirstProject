
#ifndef HEAD_H
#define HEAD_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

//����ѧ���ṹ��
typedef struct student{
    char name[100]; //����
    char num[10]; //ѧ��
    char sex[5]; //�Ա�
    char race[50]; //����
    int age; //����
    char address[1000]; //��ַ
    int MathScore; //�����ɼ�
    int EnglishScore; //Ӣ��ɼ�
    int CScore; //C���Գɼ�
    int CPPScore; //C++�ɼ�
    int LinearAlgebra; //�ߴ��ɼ�
    int Physics; //����ɼ�
    int History; //����ʷ�ɼ�
    int MilitaryTheory; //�������۳ɼ�
    int score[10];
    char subject[10][50];
    int SumScore; //��Ȩ�ܳɼ�
    struct student* next;
}stu;

//�����û��ṹ��
typedef struct the_users{
    char id[50];
    char password[50];
    char question[50];
    char answer[50];
    char make_sure[50];
    char name[50];
}users;


    void create(); //ע�����¼
    void update();//����ά��
    void search();//���ݲ�ѯ
    void resort();//��������
    void statistic();//����ͳ��
    void rank();//�鿴����
    void print();//�����Ϣ
    void restor2();//ϵͳά��
    void help();//����ָ��
    void exit();//�˳�����

    void Create_File();
    void registers();
    void Input_login();
    void reback();

    void operate_teacher();
    void operate_student();
    void add();
#endif
