#define _CRT_SECURE_NO_WARNINGS


#include"biao.h"

int main()
{
	int n = 0;
	int  e = 0;
	int i = 1;
	printf("������Ա������;>\n");
	Sqlist* L = NULL;
	scanf("%d", &n);
	L = (Sqlist*)malloc(sizeof(Sqlist));
	L->length = 0;
	printf("������Ա����Ϣ:>���ţ��Ա�����\n");
	char arr1[Maxsize], arr2[Maxsize], arr3[Maxsize];
	for (int i = 0; i < n; i++)
	{
		scanf("%s%s%s", arr1, arr2, arr3);
		ListInsert(L, i + 1, &arr1, &arr2, &arr3);
	}
	printf("��������Ҫִ�еĲ���;>\n");
	printf("��ʼ���� 1\n���ٱ� 2\n�ж�˳����Ƿ�Ϊ�� 3\n����������� 4\n�����ֲ��� 5 \n�����Ų��� 6\n������Ϣ 7\nɾ����Ϣ 8\n");
	int op = 0;
	int y = 0;
	do
	{
		printf("��������Ҫִ�еĲ���;>\n");
		scanf("%d", &op);
		switch (op)
		{
		case 1:
			/*��ʼ����*/
			InitList(L);
			printf("��ʼ���ɹ�");
			break;
		case 2:
			/*���ٱ�*/
			DestoryList(L);
			printf("���ٳɹ�");
			break;
		case 3:
			/*�жϱ�������*/
			if (ListEmpty(L) == 0)
			{
				printf("��Ϊ�գ�û����Ϣ\n");
			}
			else if (ListEmpty(L) == 1)
			{
				printf("������%d������\n", L->length);
			}
			else if (ListEmpty(L) == -1)
			{
				printf("���Ѿ�������\n");
			}
			break;

		case 4:
			/*�����*/
			DispList(L);
			break;

		case 5:
			/*�����ֲ���*/
			printf("��������Ҫ�ҵ�����\n");
			scanf("%s", arr1);
			e = LocateElem2(L, &arr1);
			if (e == 0)
			{
				printf("δ�ҵ��������������\n");
			}
			break;
		case 6:
			printf("��������Ҫ�ҵĹ���\n");
			scanf("%s", arr1);
			e = LocateElem1(L, &arr1);
			if (e == 0)
			{
				printf("δ�ҵ��������������\n");
			}
			break;
		case 7:
			printf("������Ҫ�����λ��:>\n");
			scanf("%d", &i);
			printf("������Ҫ�������Ϣ;>\n");
			scanf("%s%s%s", arr1, arr2, arr3);
			e = ListInsert(L, i, &arr1, &arr2, &arr3);
			if (e == 0)
			{
				printf("����λ�ò��Ϸ���\n");
			}
			
			else
			{
				printf("����ɹ�!\n");
				DispList(L);
			}
			
			break;
		case 8:
			printf("������Ҫɾ����λ��:>\n");
			scanf("%d", &i);
			e = ListDelete(L, i);
			if (e == 0)
			{
				printf("ɾ��λ�ò��Ϸ���\n");
			}
			else
			{
				printf("ɾ���ɹ�!\n");
				DispList(L);
			}
			break;
		
		default:
			printf("�������!\n");

			break;
		}
		printf("����Ҫ���в�����1/0\n");
		scanf("%d", &y);


	} while (y);


	return 0;
}