#pragma once
#include<assert.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

#define SZ 100//人数
#define NAME 20//名字
#define PH 15//电话
#define SITE 40//地址
#define GE 6//地址

struct address//通讯录框架
{
	char name[NAME];//名字
	char gender[GE];//性别
	char phone[PH];//电话
	char site[SITE];//地址
};
struct binbin//通讯录文件夹
{
	struct address binge[SZ];//通讯录框架
	int sz;
};
void init(struct binbin* mm);//初始化通讯录
void add(struct binbin* mm); //新建
void show(const struct binbin* mm);//全显示
int find(const struct binbin* mm);//查找输入
int modif( struct binbin* mm);//修改
int del(struct binbin* mm);//删除
void qos(struct binbin* mm);//排序
