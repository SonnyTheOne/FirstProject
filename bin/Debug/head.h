
#ifndef HEAD_H
#define HEAD_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

//定义学生结构体
typedef struct student{
    char name[100]; //姓名
    char num[10]; //学号
    char sex[5]; //性别
    char race[50]; //民族
    int age; //年龄
    char address[1000]; //地址
    int MathScore; //高数成绩
    int EnglishScore; //英语成绩
    int CScore; //C语言成绩
    int CPPScore; //C++成绩
    int LinearAlgebra; //线代成绩
    int Physics; //物理成绩
    int History; //近代史成绩
    int MilitaryTheory; //军事理论成绩
    int score[10];
    char subject[10][50];
    int SumScore; //加权总成绩
    struct student* next;
}stu;

//定义用户结构体
typedef struct the_users{
    char id[50];
    char password[50];
    char question[50];
    char answer[50];
    char make_sure[50];
    char name[50];
}users;


    void create(); //注册与登录
    void update();//数据维护
    void search();//数据查询
    void resort();//数据排序
    void statistic();//数据统计
    void rank();//查看排名
    void print();//输出信息
    void restor2();//系统维护
    void help();//帮助指南
    void exit();//退出程序

    void Create_File();
    void registers();
    void Input_login();
    void reback();

    void operate_teacher();
    void operate_student();
    void add();
#endif
