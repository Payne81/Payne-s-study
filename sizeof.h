#pragma once

//https://www.cnblogs.com/sz-leez/p/7119232.html�������˽⣩

//https://blog.csdn.net/longjialin93528/article/details/80160467�������棩
//�ڴ���룺
/*
	1.�ṹ���ڳ�Ա�����������������Զ��롣
		�������ȣ���char = 1��short = 2��int = 4��double = 8, ����ν�Զ��룬
		ָ���Ǹó�Ա����ʼλ�õ��ڴ��ַ���������������ȵ�����������intֻ����0, 4, 8����ĵ�ַ��ʼ
	2.�ṹ����ܴ�СΪ�ṹ�����Ч����ֵ��������
*/
/*
1.����
class A
{
};

sizeof(A); //1
���������ʵ��������Ϊÿ��ʵ�����ڴ��з���һ���ַ��ÿ�������ڴ��ж���Ψһ�ı�ʶ����˿��౻ʵ����ʱ����������������Ϊ������һ���ֽڣ��������֡�
2.�麯����
class A
{
	virtual void Fun();
};

sizeof(A); //4
��������һ�����а����麯��ʱ������һ��ָ�����麯������ָ��vptr��ϵͳΪ��ָ������СΪ4���ֽ�(��ʹ�ж���麯��)��
3.��ͨ���ݳ�Ա

class A
{
	int a;
	char b;
};

sizeof(A); //8

��������ͨ���ݳ�Ա���������������ͷ����С�������ֽڶ��룬����a+b=8�ֽڡ�
4.��̬���ݳ�Ա

class A
{
	int a;
	static int b;
};

sizeof(A); //4

��������̬���ݳ�Ա��ŵ���ȫ�����ݶΣ���ʹ�������һ����Ա������Ӱ����Ĵ�С���������������ʵ�����������������࣬��̬��Ա������������Զֻ��һ��ʵ����ڡ�����ķǾ�̬���ݳ�Աֻ�б�ʵ����ʱ���Ŵ��ڣ�����ľ�̬���ݳ�Աһ�����������������Ƿ�ʵ�����������Ѵ��ڣ���ľ�̬���ݳ�Ա����˵��һ�������ȫ�ֱ�����
5.��ͨ��Ա����
class A
{
	void Fun();
};

sizeof(A); //1
��������Ĵ�С�����Ĺ��캯�������������Լ�������Ա�����޹أ�ֻ���������ݳ�Ա��ء�
6.��ͨ�̳�

class A
{
	int a;
};

class B:public A
{
	int b;
};

sizeof(B); //8

��������ͨ��ļ̳У���Ĵ�СΪ�������ݳ�Ա��С+�������ݳ�Ա��С��
7.�麯���̳�

virtual class A
{
	int a;
};

class B:virtual public A
{
	int b;
};

sizeof(B); //12

�������麯����ļ̳У��������С=������������Ա��С+�������ݳ�Ա��С+����ָ���С����ʹ�̳ж������࣬Ҳֻ��һ��ָ�����麯������ָ��vptr����СΪ4�ֽڣ�
*/