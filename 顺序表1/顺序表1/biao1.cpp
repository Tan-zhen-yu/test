#define _CRT_SECURE_NO_WARNINGS

#include"biao.h"
//������
void CreateList(Sqlist*& L, ElemType(*a1)[Maxsize], ElemType(*a2)[Maxsize], ElemType(*a3)[Maxsize], int n)
{

	L = (Sqlist*)malloc(sizeof(Sqlist));
	for (int i = 0; i < n; i++)
	{
		memcpy(L->date[i].num, &a1[i], sizeof(char) * 20);
		memcpy(L->date[i].sex, &a2[i], sizeof(char) * 5);
		memcpy(L->date[i].name, &a3[i], sizeof(char) * 8);

	}
	L->length = n;
}
//��ʼ����
void InitList(Sqlist*& L)
{
	L = (Sqlist*)malloc(sizeof(Sqlist));
	L->length = 0;
}
//���ٱ�
void DestoryList(Sqlist*& L)
{
	free(L);
}
//�жϱ�������
int ListEmpty(Sqlist* L)
{
	if (L->length == 0)
	{
		return 0;
	}
	else if (L->length < 0)
	{
		return -1;
	}
	else
	{
		return 1;
	}

}
//��
int ListLenth(Sqlist* L)
{
	return(L->length);
}
//�����
void DispList(Sqlist* L)
{
	if (L->length > 0)
	{
		for (int i = 0; i < L->length; i++)
		{
			printf("����:%s �Ա�:%s ����:%s\n", L->date[i].num, L->date[i].sex, L->date[i].name);
		}
	}
	else
	{
		printf("���������ݣ��޷���ӡ\n");
	}
}

int LocateElem1(Sqlist* L, ElemType(*a1)[Maxsize])
{
	int i = 0;
	while ((strcmp(L->date[i].num, *a1)) != 0 && L->length >= i)
	{
		i++;
	}
	if ((strcmp(L->date[i].num, *a1)) == 0)
	{
		printf("����:%s �Ա�:%s ����%s\n", L->date[i].num, L->date[i].sex, L->date[i].name);

	}

	else if (i >= L->length)
		return 0;
}
int LocateElem2(Sqlist* L, ElemType(*a1)[Maxsize])
{
	int i = 0;
	while ((strcmp(L->date[i].name, *a1)) != 0 && L->length >= i)
	{
		i++;
	}
	if ((strcmp(L->date[i].name, *a1)) == 0)
	{
		printf("����:%s �Ա�:%s ����:%s\n", L->date[i].num, L->date[i].sex, L->date[i].name);

	}
	else if (i >= L->length)
		return 0;
}
int  ListInsert(Sqlist*& L, int i, ElemType(*a1)[Maxsize], ElemType(*a2)[Maxsize], ElemType(*a3)[Maxsize])
{
	int j;
	if (i<1 || i>L->length + 1 || L->length == Maxsize)
		return 0;
	i--;
	for (j = L->length; j > i; j--)
	{
		L->date[j] = L->date[j - 1];
	}
	memcpy(L->date[i].num, a1, sizeof(char) * 20);
	memcpy(L->date[i].sex, a2, sizeof(char) * 5);
	memcpy(L->date[i].name, a3, sizeof(char) * 8);
	L->length++;
	return 1;
}
int ListDelete(Sqlist*& L, int i)
{
	return 0;
}
int  ListDelete(Sqlist* L, int i)
{
	int j;
	if (i<1 || i>L->length)
		return 0;
	i--;

	for (j = i; j < L->length - 1; j++)
	{
		L->date[j] = L->date[j + 1];
	}

	L->length--;
}
void partition2(Sqlist*& L, int n)
{
	for (; n > 0; n--)
	{
		for (int i = 0; i < n; i++)
		{

		}
	}






}
