#pragma once
#include<assert.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

#define SZ 100//����
#define NAME 20//����
#define PH 15//�绰
#define SITE 40//��ַ
#define GE 6//��ַ

struct address//ͨѶ¼���
{
	char name[NAME];//����
	char gender[GE];//�Ա�
	char phone[PH];//�绰
	char site[SITE];//��ַ
};
struct binbin//ͨѶ¼�ļ���
{
	struct address binge[SZ];//ͨѶ¼���
	int sz;
};
void init(struct binbin* mm);//��ʼ��ͨѶ¼
void add(struct binbin* mm); //�½�
void show(const struct binbin* mm);//ȫ��ʾ
int find(const struct binbin* mm);//��������
int modif( struct binbin* mm);//�޸�
int del(struct binbin* mm);//ɾ��
void qos(struct binbin* mm);//����
