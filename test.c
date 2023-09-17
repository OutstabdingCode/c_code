#define _CRT_SECURE_NO_WARNINGS 1
//****** 头文件包含 ******
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 100


void menu() 
{//打印菜单
	system("cls");
	printf("\n\n");
	printf("\t\t\t===========================================\n");
	printf("\t\t\t|                                         |\n");
	printf("\t\t\t|          欢迎来到学生成绩管理系统       |\n");
	printf("\t\t\t|                                         |\n");
	printf("\t\t\t|=========================================|\n");
	printf("\t\t\t|            请选择要操作的命令           |\n");
	printf("\t\t\t|-----------------------------------------|\n");
	printf("\t\t\t|              0.退出管理系统             |\n");
	printf("\t\t\t|              1.录入学生信息             |\n");
	printf("\t\t\t|              2.删除学生信息             |\n");
	printf("\t\t\t|              3.查找学生信息             |\n");
	printf("\t\t\t|              4.输出学生信息             |\n");
	printf("\t\t\t|              5.插入学生信息             |\n");
	printf("\t\t\t|              6.按照功能排序             |\n");
	printf("\t\t\t|              7.保存学生信息             |\n");
	printf("\t\t\t|              8.读取学生信息             |\n");
	printf("\t\t\t|              9.修改学生信息             |\n");
	printf("\t\t\t|                                         |\n");
	printf("\t\t\t===========================================\n");
}
void modify_menu()
{
	printf("\t\t\t|=========================================|\n");
	printf("\t\t\t|            请选择要操作的命令           |\n");
	printf("\t\t\t|-----------------------------------------|\n");
	printf("\t\t\t|              0.推出本界面               |\n");
	printf("\t\t\t|              1.修改姓名                 |\n");
	printf("\t\t\t|              2.修改年龄                 |\n");
	printf("\t\t\t|              3.修改性别                 |\n");
	printf("\t\t\t|              4.修改数学成绩             |\n");
	printf("\t\t\t|              5.修改语文成绩             |\n");
	printf("\t\t\t|              6.修改英语成绩             |\n");
	printf("\t\t\t|              7.修改计算机成绩           |\n");
	printf("\t\t\t|                                         |\n");
	printf("\t\t\t===========================================\n");
}


//********* 建立数据类型 ********

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

//建立学生表
contact data[max];
//统计有效学生人数
int count = 0;

//*************   函数声明    **************

//输入数据
void Input();
//查找数据
void search();
//插入数据
void insert();
//删除数据
void del();
//打印数据
void print();
//排序
void sort();
//写入
void write();
//文件读取
void read();
//修改
void mod();
//结束
void Exit();
//创建枚举常量来代表switch中case的情况

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

//主程序
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入选项:>");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			Exit();
			break;
		case INPUT://增加stu
			Input();
			break;
		case DEL://删除stu
			del();
			break;
		case SEARCH://查找stu
			search();
			break;
		case PRINT://打印stu
			print();
			break;
		case INSERT://插入数据
			insert();
			break;
		case SORT://排序数据
			sort();
			break;
		case READ:
			system("cls");
			read();
			printf("读取成功!!!!!");
			system("pause");
			break;
		case WRITE:
			system("cls");
			write();
			printf("内容已经写入成功!!!!!");
			system("pause");
			break;
		case MODIFY:
			mod();
			break;
		default:
			printf("输入错误,");
			break;
		}
	} while (input);
	return 0;
}

//********** 函数实现 **********

void Input()//添加数据
{
	system("cls");
	int i = count, j = 0;
	int flag = 1;
	int num = 0;
	printf("请输入录入的学生人数:>");
	scanf("%d", &num);
	if (num > 0)
	{
		/*if (num + count > max)
		{
			printf("超出录入人数范围，最大录入人数为%d,当前已存在人数为%d", max, count);
		}*/
		do
		{
			while (flag)
			{
				//作为循环标记
				flag = 0;

				printf("请输入第%d个学生的学号(1-%d):>", i + 1, max);
				scanf("%d", &(data[i].stu_id));
				for (j = 0; j < i; j++)
				{
					if (data[i].stu_id == data[j].stu_id)
					{
						printf("该学号已存在,请重新输入！！！\n");
						flag = 1;
						break;
					}
				}
			}
			/*if (flag == 1)
			{
				printf("请输入第%d个学生的学号(1-%d):>", i + 1, max);
				scanf("%d", &(data[i].stu_id));
			}*/
			printf("请输入第%d个学生的姓名:>", i + 1);
			scanf("%s", &data[i].name);
			printf("请输入第%d个学生的性别:>", i + 1);
			scanf("%s", &data[i].sex);
			printf("请输入第%d个学生的年龄:>", i + 1);
			scanf("%d", &data[i].age);
			printf("请输入第%d个学生的数学:>", i + 1);
			scanf("%d", &data[i].math);
			printf("请输入第%d个学生的英语:>", i + 1);
			scanf("%d", &data[i].english);
			printf("请输入第%d个学生的语文:>", i + 1);
			scanf("%d", &data[i].chinese);
			printf("请输入第%d个学生的计算机:>", i + 1);
			scanf("%d", &data[i].computer);
			data[i].total = data[i].math + data[i].english + data[i].chinese + data[i].computer;
			data[i].avg = data[i].total / 4;
			i++;
			flag = 1;
		} while (i<count+num);
		count += num;
		printf("学生信息录入完成!!!\n");
		system("pause");

	}
}
void search()//查找人员
{
	int stu_num;
	char name[10];
	int flag;
	int i;
	system("cls");
	printf("\t\t\t|=========================================|\n");
	printf("\t\t\t|            请选择要操作的命令           |\n");
	printf("\t\t\t|-----------------------------------------|\n");
	printf("\t\t\t|                                         |\n");
	printf("\t\t\t|              [1]按学号查找              |\n");
	printf("\t\t\t|              [2]按姓名查找              |\n");
	printf("\t\t\t|                                         |\n");
	printf("\t\t\t|=========================================|\n");
	printf("请输入查找模式:>");
	scanf("%d", &flag);
	if (flag == 1)
	{
		printf("请输入学号:>");
		scanf("%d", &stu_num);
		for (i = 0; i < count; i++)
		{
			if (data[i].stu_id == stu_num)
			{
				printf("\n******%s的成绩*******\n", data[i].name);
				printf("学号:%d\t 性别:%s\t 年龄:%d\n", data[i].stu_id, data[i].sex, data[i].age);
				printf("数学成绩:>%d\n", data[i].math);
				printf("英语成绩:>%d\n", data[i].english);
				printf("语文成绩:>%d\n", data[i].chinese);
				printf("计算机成绩:>%d\n", data[i].computer);
				printf("总成绩:>%d\n", data[i].total);
				printf("平均成绩:>%d\n", data[i].avg);

			}
		}
	}
	else if (flag == 2)
	{
		printf("请输入姓名:>");
		scanf("%s", &name);
		for (i = 0; i < count; i++)
		{
			if (strcmp(data[i].name, name) == 0)
			{
				printf("\n******%s的成绩*******\n", data[i].name);
				printf("学号:%d\t 性别:%s\t 年龄:%d\t", data[i].stu_id, data[i].sex, data[i].age);
				printf("数学成绩:>%d\n", data[i].math);
				printf("英语成绩:>%d\n", data[i].english);
				printf("语文成绩:>%d\n", data[i].chinese);
				printf("计算机成绩:>%d\n", data[i].computer);
				printf("总成绩:>%d\n", data[i].total);
				printf("平均成绩:>%d\n", data[i].avg);

			}
		}
	}
	else
	{
		printf("输入范围(1-2),输入错误");
	}
	system("pause");

}
//指定位置插入数据
void insert()
{
	int i = count, j = 0;
	int flag = 1;
	system("cls");
	while (flag)
	{
		printf("请输入插入学生的学号(1-%d):>",max);
		scanf("%d", &(data[i].stu_id));
		for (j = 0; j < count; j++)
		{
			flag = 0;
			if (data[i].stu_id == data[j].stu_id)
			{
				printf("输入的学号已存在!!!");
				flag = 1;
				break;
			}
		}
	}
	printf("请输入第%d个学生的姓名:>", i + 1);
	scanf("%s", &data[i].name);
	printf("请输入第%d个学生的性别:>", i + 1);
	scanf("%s", &data[i].sex);
	printf("请输入第%d个学生的年龄:>", i + 1);
	scanf("%d", &data[i].age);
	printf("请输入第%d个学生的数学:>", i + 1);
	scanf("%d", &data[i].math);
	printf("请输入第%d个学生的英语:>", i + 1);
	scanf("%d", &data[i].english);
	printf("请输入第%d个学生的语文:>", i + 1);
	scanf("%d", &data[i].chinese);
	printf("请输入第%d个学生的计算机:>", i + 1);
	scanf("%d", &data[i].computer);
	data[i].total = data[i].math + data[i].english + data[i].chinese + data[i].computer;
	data[i].avg = data[i].total / 4;
	count++;
	printf("添加成功!!!");
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
	printf("请输入要删除学生的学号:>");
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
		printf("该学号不存在!!!\n");

	}
	if (flag == 1)
	{

		printf("该学生已删除成功!!!\n");

	}
	system("pause");
}
void print()//数据打印
{
	int i;
	system("cls");
	for (i = 0; i < count; i++)
	{
		printf("\n******%s的成绩*******\n", data[i].name);
		printf("学号:%d\t 性别:%s\t 年龄:%d\n", data[i].stu_id, data[i].sex, data[i].age);
		printf("数学成绩:>%d\n", data[i].math);
		printf("英语成绩:>%d\n", data[i].english);
		printf("语文成绩:>%d\n", data[i].chinese);
		printf("计算机成绩:>%d\n", data[i].computer);
		printf("总成绩:>%d\n", data[i].total);
		printf("平均成绩:>%d\n", data[i].avg);
	}
	system("pause");
}
void sort()//按照平均分从小到大排序
{
	int i = 0;
	int j = 0;
	int option = 0;
	contact temp;
	system("cls");
	printf("\t\t\t|=========================================|\n");
	printf("\t\t\t|            请选择要操作的命令           |\n");
	printf("\t\t\t|-----------------------------------------|\n");
	printf("\t\t\t|              -从小到大排序-             |\n");
	printf("\t\t\t|              [1]平均分排序              |\n");
	printf("\t\t\t|              [2]总分排序                |\n");
	printf("\t\t\t|              [3]学号排序                |\n");
	printf("\t\t\t|                                         |\n");
	printf("\t\t\t===========================================\n");
	printf("\n\n");
	printf("请输入选项功能:>");
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
	printf("排序完成\n");
	system("pause");

}
//信息修改
void mod()
{
	int i = 0, option = 0, flag = 0;
	int id;
	system("cls");
	printf("请输入要修改的学生学号:>");
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
		printf("找不到该学生!!!\n");
		system("pause");
		return;
	}
	do
	{
		system("cls");
		modify_menu();
		printf("请输入选项:>");
		scanf("%d", &option);
		switch (option)
		{
		case 0:
			system("cls");
			break;
		case 1:
			system("cls");
			printf("请输入新的姓名:>");
			scanf("%s", data[i].name);
			break;
		case 2:
			system("cls");
			printf("请输入新的年龄:>");
			scanf("%d", &data[i].age);
			break;
		case 3:
			system("cls");
			printf("输入新的性别:>");
			scanf("%s", data[i].sex);
			break;
		case 4:
			system("cls");
			printf("输入新的数学成绩:>");
			scanf("%d", &data[i].math);
			break;
		case 5:
			system("cls");
			printf("输入新的英语成绩:>");
			scanf("%d", &data[i].english);
			break;
		case 6:
			system("cls");
			system("cls");
			printf("输入新的语文成绩:>");
			scanf("%d", &data[i].chinese);
			break;
		case 7:
			system("cls");
			printf("输入新的计算机成绩:>");
			scanf("%d", &data[i].computer);
			break;
		default:
			system("cls");
			printf("输入错误！！！请在(0 - 7)之间选择");
		}
	} while (option);
	data[i].total = data[i].math + data[i].english + data[i].chinese + data[i].computer;
	data[i].avg = data[i].total / 4;
	if (flag == 1)
	{
		printf("学生内容修改完成!!!");
	}
	system("pause");
}
void Exit()
{
	system("cls");
	printf("\n\n");
	printf("\t\t\t===========================================\n");
	printf("\t\t\t|                                         |\n");
	printf("\t\t\t|          感谢使用学生成绩管理系统       |\n");
	printf("\t\t\t|                                         |\n");
	printf("\t\t\t|=========================================|\n");

}
//文件写入
void write()
{
	//文件打开
	FILE* pf = fopen("temp.dat", "w+");
	int i = 0;
	if (pf == NULL)//判断文件是否正常打开
	{
		printf("can`t open this file!\n");
	}
	//文件写入
	for (i = 0; i < count; i++)
	{
		//fprintf(pf, "人数%d", count);
		fprintf(pf, "%s %s %s %s %s %s %s %s %s %s", "姓名", "学号", "性别", "年龄", "数学成绩",
			"英语成绩", "语文成绩", "计算机成绩", "总成绩", "平均成绩\n");
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
	//关闭文件
	fclose(pf);
	pf = NULL;

}
//文件读取
void read()
{
	//文件打开
	FILE* pf = fopen("temp.dat", "r");
	int i = 0;
	if (pf == NULL)//判断文件是否正常打开
	{
		printf("can`t open this file!\n");
	}
	//文件读取
	//调整文件指针的位置
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
	while (!feof(pf))//判断文件是否结束
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
	//关闭文件
	fclose(pf);
	pf = NULL;
}