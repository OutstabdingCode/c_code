#define _CRT_SECURE_NO_WARNINGS 1
//****** ͷ�ļ����� ******
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 100


void menu() 
{//��ӡ�˵�
	system("cls");
	printf("\n\n");
	printf("\t\t\t===========================================\n");
	printf("\t\t\t|                                         |\n");
	printf("\t\t\t|          ��ӭ����ѧ���ɼ�����ϵͳ       |\n");
	printf("\t\t\t|                                         |\n");
	printf("\t\t\t|=========================================|\n");
	printf("\t\t\t|            ��ѡ��Ҫ����������           |\n");
	printf("\t\t\t|-----------------------------------------|\n");
	printf("\t\t\t|              0.�˳�����ϵͳ             |\n");
	printf("\t\t\t|              1.¼��ѧ����Ϣ             |\n");
	printf("\t\t\t|              2.ɾ��ѧ����Ϣ             |\n");
	printf("\t\t\t|              3.����ѧ����Ϣ             |\n");
	printf("\t\t\t|              4.���ѧ����Ϣ             |\n");
	printf("\t\t\t|              5.����ѧ����Ϣ             |\n");
	printf("\t\t\t|              6.���չ�������             |\n");
	printf("\t\t\t|              7.����ѧ����Ϣ             |\n");
	printf("\t\t\t|              8.��ȡѧ����Ϣ             |\n");
	printf("\t\t\t|              9.�޸�ѧ����Ϣ             |\n");
	printf("\t\t\t|                                         |\n");
	printf("\t\t\t===========================================\n");
}
void modify_menu()
{
	printf("\t\t\t|=========================================|\n");
	printf("\t\t\t|            ��ѡ��Ҫ����������           |\n");
	printf("\t\t\t|-----------------------------------------|\n");
	printf("\t\t\t|              0.�Ƴ�������               |\n");
	printf("\t\t\t|              1.�޸�����                 |\n");
	printf("\t\t\t|              2.�޸�����                 |\n");
	printf("\t\t\t|              3.�޸��Ա�                 |\n");
	printf("\t\t\t|              4.�޸���ѧ�ɼ�             |\n");
	printf("\t\t\t|              5.�޸����ĳɼ�             |\n");
	printf("\t\t\t|              6.�޸�Ӣ��ɼ�             |\n");
	printf("\t\t\t|              7.�޸ļ�����ɼ�           |\n");
	printf("\t\t\t|                                         |\n");
	printf("\t\t\t===========================================\n");
}


//********* ������������ ********

typedef struct contact
{
	int stu_id;
	char name[6];
	char sex[3];
	int age;
	int math;
	int english;
	int chinese;
	int computer;
	int total;
	int avg;
}contact;

//����ѧ����
contact data[max];
//ͳ����Чѧ������
int count = 0;

//*************   ��������    **************

//��������
void Input();
//��������
void search();
//��������
void insert();
//ɾ������
void del();
//��ӡ����
void print();
//����
void sort();
//д��
void write();
//�ļ���ȡ
void read();
//�޸�
void mod();
//����
void Exit();
//����ö�ٳ���������switch��case�����

enum Option
{
	EXIT,
	INPUT,
	DEL,
	SEARCH,
	PRINT,
	INSERT,
	SORT,
	WRITE,
	READ,
	MODIFY
};

//������
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("������ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			Exit();
			break;
		case INPUT://����stu
			Input();
			break;
		case DEL://ɾ��stu
			del();
			break;
		case SEARCH://����stu
			search();
			break;
		case PRINT://��ӡstu
			print();
			break;
		case INSERT://��������
			insert();
			break;
		case SORT://��������
			sort();
			break;
		case READ:
			system("cls");
			read();
			printf("��ȡ�ɹ�!!!!!");
			system("pause");
			break;
		case WRITE:
			system("cls");
			write();
			printf("�����Ѿ�д��ɹ�!!!!!");
			system("pause");
			break;
		case MODIFY:
			mod();
			break;
		default:
			printf("�������,");
			break;
		}
	} while (input);
	return 0;
}

//********** ����ʵ�� **********

void Input()//�������
{
	system("cls");
	int i = count, j = 0;
	int flag = 1;
	int num = 0;
	printf("������¼���ѧ������:>");
	scanf("%d", &num);
	if (num > 0)
	{
		/*if (num + count > max)
		{
			printf("����¼��������Χ�����¼������Ϊ%d,��ǰ�Ѵ�������Ϊ%d", max, count);
		}*/
		do
		{
			while (flag)
			{
				//��Ϊѭ�����
				flag = 0;

				printf("�������%d��ѧ����ѧ��(1-%d):>", i + 1, max);
				scanf("%d", &(data[i].stu_id));
				for (j = 0; j < i; j++)
				{
					if (data[i].stu_id == data[j].stu_id)
					{
						printf("��ѧ���Ѵ���,���������룡����\n");
						flag = 1;
						break;
					}
				}
			}
			/*if (flag == 1)
			{
				printf("�������%d��ѧ����ѧ��(1-%d):>", i + 1, max);
				scanf("%d", &(data[i].stu_id));
			}*/
			printf("�������%d��ѧ��������:>", i + 1);
			scanf("%s", &data[i].name);
			printf("�������%d��ѧ�����Ա�:>", i + 1);
			scanf("%s", &data[i].sex);
			printf("�������%d��ѧ��������:>", i + 1);
			scanf("%d", &data[i].age);
			printf("�������%d��ѧ������ѧ:>", i + 1);
			scanf("%d", &data[i].math);
			printf("�������%d��ѧ����Ӣ��:>", i + 1);
			scanf("%d", &data[i].english);
			printf("�������%d��ѧ��������:>", i + 1);
			scanf("%d", &data[i].chinese);
			printf("�������%d��ѧ���ļ����:>", i + 1);
			scanf("%d", &data[i].computer);
			data[i].total = data[i].math + data[i].english + data[i].chinese + data[i].computer;
			data[i].avg = data[i].total / 4;
			i++;
			flag = 1;
		} while (i<count+num);
		count += num;
		printf("ѧ����Ϣ¼�����!!!\n");
		system("pause");

	}
}
void search()//������Ա
{
	int stu_num;
	char name[10];
	int flag;
	int i;
	system("cls");
	printf("\t\t\t|=========================================|\n");
	printf("\t\t\t|            ��ѡ��Ҫ����������           |\n");
	printf("\t\t\t|-----------------------------------------|\n");
	printf("\t\t\t|                                         |\n");
	printf("\t\t\t|              [1]��ѧ�Ų���              |\n");
	printf("\t\t\t|              [2]����������              |\n");
	printf("\t\t\t|                                         |\n");
	printf("\t\t\t|=========================================|\n");
	printf("���������ģʽ:>");
	scanf("%d", &flag);
	if (flag == 1)
	{
		printf("������ѧ��:>");
		scanf("%d", &stu_num);
		for (i = 0; i < count; i++)
		{
			if (data[i].stu_id == stu_num)
			{
				printf("\n******%s�ĳɼ�*******\n", data[i].name);
				printf("ѧ��:%d\t �Ա�:%s\t ����:%d\n", data[i].stu_id, data[i].sex, data[i].age);
				printf("��ѧ�ɼ�:>%d\n", data[i].math);
				printf("Ӣ��ɼ�:>%d\n", data[i].english);
				printf("���ĳɼ�:>%d\n", data[i].chinese);
				printf("������ɼ�:>%d\n", data[i].computer);
				printf("�ܳɼ�:>%d\n", data[i].total);
				printf("ƽ���ɼ�:>%d\n", data[i].avg);

			}
		}
	}
	else if (flag == 2)
	{
		printf("����������:>");
		scanf("%s", &name);
		for (i = 0; i < count; i++)
		{
			if (strcmp(data[i].name, name) == 0)
			{
				printf("\n******%s�ĳɼ�*******\n", data[i].name);
				printf("ѧ��:%d\t �Ա�:%s\t ����:%d\t", data[i].stu_id, data[i].sex, data[i].age);
				printf("��ѧ�ɼ�:>%d\n", data[i].math);
				printf("Ӣ��ɼ�:>%d\n", data[i].english);
				printf("���ĳɼ�:>%d\n", data[i].chinese);
				printf("������ɼ�:>%d\n", data[i].computer);
				printf("�ܳɼ�:>%d\n", data[i].total);
				printf("ƽ���ɼ�:>%d\n", data[i].avg);

			}
		}
	}
	else
	{
		printf("���뷶Χ(1-2),�������");
	}
	system("pause");

}
//ָ��λ�ò�������
void insert()
{
	int i = count, j = 0;
	int flag = 1;
	system("cls");
	while (flag)
	{
		printf("���������ѧ����ѧ��(1-%d):>",max);
		scanf("%d", &(data[i].stu_id));
		for (j = 0; j < count; j++)
		{
			flag = 0;
			if (data[i].stu_id == data[j].stu_id)
			{
				printf("�����ѧ���Ѵ���!!!");
				flag = 1;
				break;
			}
		}
	}
	printf("�������%d��ѧ��������:>", i + 1);
	scanf("%s", &data[i].name);
	printf("�������%d��ѧ�����Ա�:>", i + 1);
	scanf("%s", &data[i].sex);
	printf("�������%d��ѧ��������:>", i + 1);
	scanf("%d", &data[i].age);
	printf("�������%d��ѧ������ѧ:>", i + 1);
	scanf("%d", &data[i].math);
	printf("�������%d��ѧ����Ӣ��:>", i + 1);
	scanf("%d", &data[i].english);
	printf("�������%d��ѧ��������:>", i + 1);
	scanf("%d", &data[i].chinese);
	printf("�������%d��ѧ���ļ����:>", i + 1);
	scanf("%d", &data[i].computer);
	data[i].total = data[i].math + data[i].english + data[i].chinese + data[i].computer;
	data[i].avg = data[i].total / 4;
	count++;
	printf("��ӳɹ�!!!");
	system("pause");
}
void del()
{
	int i = 0;
	int j = 0;
	int flag = 0;
	int id = 0;
	system("cls");
	//char id[20] = {0};
	printf("������Ҫɾ��ѧ����ѧ��:>");
	scanf("%d", &id);
	for (i = 0; i < max; i++)
	{
		if (id == data[i].stu_id)
		{
			flag = 1;
			for (j = i; j <= count; j++)
			{
				data[j] = data[j + 1];
			}
			count--;
			break;
		}

	}
	if (flag == 0)
	{
		printf("��ѧ�Ų�����!!!\n");

	}
	if (flag == 1)
	{

		printf("��ѧ����ɾ���ɹ�!!!\n");

	}
	system("pause");
}
void print()//���ݴ�ӡ
{
	int i;
	system("cls");
	for (i = 0; i < count; i++)
	{
		printf("\n******%s�ĳɼ�*******\n", data[i].name);
		printf("ѧ��:%d\t �Ա�:%s\t ����:%d\n", data[i].stu_id, data[i].sex, data[i].age);
		printf("��ѧ�ɼ�:>%d\n", data[i].math);
		printf("Ӣ��ɼ�:>%d\n", data[i].english);
		printf("���ĳɼ�:>%d\n", data[i].chinese);
		printf("������ɼ�:>%d\n", data[i].computer);
		printf("�ܳɼ�:>%d\n", data[i].total);
		printf("ƽ���ɼ�:>%d\n", data[i].avg);
	}
	system("pause");
}
void sort()//����ƽ���ִ�С��������
{
	int i = 0;
	int j = 0;
	int option = 0;
	contact temp;
	system("cls");
	printf("\t\t\t|=========================================|\n");
	printf("\t\t\t|            ��ѡ��Ҫ����������           |\n");
	printf("\t\t\t|-----------------------------------------|\n");
	printf("\t\t\t|              -��С��������-             |\n");
	printf("\t\t\t|              [1]ƽ��������              |\n");
	printf("\t\t\t|              [2]�ܷ�����                |\n");
	printf("\t\t\t|              [3]ѧ������                |\n");
	printf("\t\t\t|                                         |\n");
	printf("\t\t\t===========================================\n");
	printf("\n\n");
	printf("������ѡ���:>");
	scanf("%d", &option);
	if (option == 1)
	{
		for (i = 0; i < count - 1; i++)
		{
			for (j = i + 1; j < count; j++)
			{
				if (data[i].avg > data[j].avg)
				{
					temp = data[i];
					data[i] = data[j];
					data[j] = temp;
				}
			}

		}
	}
	if (option == 2)
	{
		for (i = 0; i < count - 1; i++)
		{
			for (j = i + 1; j < count; j++)
			{
				if (data[i].total > data[j].total)
				{
					temp = data[i];
					data[i] = data[j];
					data[j] = temp;
				}
			}

		}
	}
	if (option == 3)
	{
		for (i = 0; i < count - 1; i++)
		{
			for (j = i + 1; j < count; j++)
			{
				if (data[i].stu_id > data[j].stu_id)
				{
					temp = data[i];
					data[i] = data[j];
					data[j] = temp;
				}
			}

		}
	}
	printf("�������\n");
	system("pause");

}
//��Ϣ�޸�
void mod()
{
	int i = 0, option = 0, flag = 0;
	int id;
	system("cls");
	printf("������Ҫ�޸ĵ�ѧ��ѧ��:>");
	scanf("%d", &id);
	for (i = 0; i < count; i++)
	{
		if (id == data[i].stu_id)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		printf("�Ҳ�����ѧ��!!!\n");
		system("pause");
		return;
	}
	do
	{
		system("cls");
		modify_menu();
		printf("������ѡ��:>");
		scanf("%d", &option);
		switch (option)
		{
		case 0:
			system("cls");
			break;
		case 1:
			system("cls");
			printf("�������µ�����:>");
			scanf("%s", data[i].name);
			break;
		case 2:
			system("cls");
			printf("�������µ�����:>");
			scanf("%d", &data[i].age);
			break;
		case 3:
			system("cls");
			printf("�����µ��Ա�:>");
			scanf("%s", data[i].sex);
			break;
		case 4:
			system("cls");
			printf("�����µ���ѧ�ɼ�:>");
			scanf("%d", &data[i].math);
			break;
		case 5:
			system("cls");
			printf("�����µ�Ӣ��ɼ�:>");
			scanf("%d", &data[i].english);
			break;
		case 6:
			system("cls");
			system("cls");
			printf("�����µ����ĳɼ�:>");
			scanf("%d", &data[i].chinese);
			break;
		case 7:
			system("cls");
			printf("�����µļ�����ɼ�:>");
			scanf("%d", &data[i].computer);
			break;
		default:
			system("cls");
			printf("������󣡣�������(0 - 7)֮��ѡ��");
		}
	} while (option);
	data[i].total = data[i].math + data[i].english + data[i].chinese + data[i].computer;
	data[i].avg = data[i].total / 4;
	if (flag == 1)
	{
		printf("ѧ�������޸����!!!");
	}
	system("pause");
}
void Exit()
{
	system("cls");
	printf("\n\n");
	printf("\t\t\t===========================================\n");
	printf("\t\t\t|                                         |\n");
	printf("\t\t\t|          ��лʹ��ѧ���ɼ�����ϵͳ       |\n");
	printf("\t\t\t|                                         |\n");
	printf("\t\t\t|=========================================|\n");

}
//�ļ�д��
void write()
{
	//�ļ���
	FILE* pf = fopen("temp.dat", "w+");
	int i = 0;
	if (pf == NULL)//�ж��ļ��Ƿ�������
	{
		printf("can`t open this file!\n");
	}
	//�ļ�д��
	for (i = 0; i < count; i++)
	{
		//fprintf(pf, "����%d", count);
		fprintf(pf, "%s %s %s %s %s %s %s %s %s %s", "����", "ѧ��", "�Ա�", "����", "��ѧ�ɼ�",
			"Ӣ��ɼ�", "���ĳɼ�", "������ɼ�", "�ܳɼ�", "ƽ���ɼ�\n");
		for (i = 0; i < count; i++)
		{
			//fwrite(&data[i],sizeof(contact),1,pf);
			fprintf(pf, "%s", data[i].name);
			fprintf(pf, "%3d", data[i].stu_id);
			fprintf(pf, "%5s", data[i].sex);
			fprintf(pf, "%5d", data[i].age);
			fprintf(pf, "%5d", data[i].math);
			fprintf(pf, "%8d", data[i].english);
			fprintf(pf, "%8d", data[i].chinese);
			fprintf(pf, "%8d", data[i].computer);
			fprintf(pf, "%12d", data[i].total);
			fprintf(pf, "%4d", data[i].avg);
			fprintf(pf, "\n");
		}
	}
	//�ر��ļ�
	fclose(pf);
	pf = NULL;

}
//�ļ���ȡ
void read()
{
	//�ļ���
	FILE* pf = fopen("temp.dat", "r");
	int i = 0;
	if (pf == NULL)//�ж��ļ��Ƿ�������
	{
		printf("can`t open this file!\n");
	}
	//�ļ���ȡ
	//�����ļ�ָ���λ��
	fseek(pf, 74L, SEEK_SET);
	fscanf(pf, "%s", &data[i].name);
	fscanf(pf, "%3d", &data[i].stu_id);
	fscanf(pf, "%5s", &data[i].sex);
	fscanf(pf, "%5d", &data[i].age);
	fscanf(pf, "%5d", &data[i].math);
	fscanf(pf, "%8d", &data[i].english);
	fscanf(pf, "%8d", &data[i].chinese);
	fscanf(pf, "%8d", &data[i].computer);
	fscanf(pf, "%12d", &data[i].total);
	fscanf(pf, "%4d", &data[i].avg);
	while (!feof(pf))//�ж��ļ��Ƿ����
	{
		i++;
		fscanf(pf, "%s", &data[i].name);
		fscanf(pf, "%3d", &data[i].stu_id);
		fscanf(pf, "%5s", &data[i].sex);
		fscanf(pf, "%5d", &data[i].age);
		fscanf(pf, "%5d", &data[i].math);
		fscanf(pf, "%8d", &data[i].english);
		fscanf(pf, "%8d", &data[i].chinese);
		fscanf(pf, "%8d", &data[i].computer);
		fscanf(pf, "%12d", &data[i].total);
		fscanf(pf, "%4d", &data[i].avg);
	}
	count = i; 
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
}