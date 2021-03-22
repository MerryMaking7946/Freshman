#define _CRT_SECURE_NO_WARNINGS 1
//1.反向打印一个数字
//#include<stdio.h>
//int main()
//{
//	int n;
//	printf("请输入一个数字->");//1234
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d", n % 10);
//		n /= 10;
//	}
//	return 0;
//}

//多组大写字符输入，转换为小写字符
//getchar()读取字符失败的时候会返回EOF,
//读取成功返回这个字符的ASCII值
//#include<stdio.h>
//int main()
//{
//	char ch;
//	while ((ch = getchar()) != EOF)
//	{
//		getchar();//清理\n
//		putchar(ch + 32);
//		printf("\n");
//		//这边可以不要putchar,直接printf("%c\n");
//		//包括你打印简单的菱形也一样，的直接一个printf，
//		//多次换行搞定全部
//	}
//	return 0;
//}

//3.
//#include<stdio.h>
//int main()
//{
//	//打印hello world！
//	//并打印出其返回值
//	printf("\n%d\n", printf("Hello World!"));
//	return 0;
//}


//判断字母isalpha
//4.打印数字菱形
//#include<stdio.h>
//int main()
//{
//	int j, i, line, n;
//	printf("请输入要打印的上半行数：");
//	scanf("%d", &line);//5
//	printf("请输入要打印的数字:");
//	scanf("%d", &n);
//	for (i = 0; i < line; i++)
//	{
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("%d", n);
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1) - 1 - 2 * i; j++)
//		{
//			printf("%d", n);
//		}
//		printf("\n");
//	}
//	return 0;

//菱形的sha
//法二，二维数组的思想
//行
//for (i = 0; i < n; i++)
//{
//
//	int j = 0;
//	for (j = 0; j < n; j++)
//	{
//		if (i + j >= n - 1)
//		{
//			printf("* ");
//		}
//		else
//			printf(" ");
//	}
//	printf("\n");
//}
//

//5（gou）输入，打印日期
//#include<stdio.h>
//int main()
//{
//	int y ;
//	int m ;
//	int d ;
//	scanf("%4d%2d%2d", &y, &m, &d);//格式控制指定列宽
//	printf("year = %d\n", y);
//	printf("month = %0d\n", m);//%0表示指定域宽不够就补零
//	printf("day = %0d", d);
//	return 0;
//}

//6（gou）.多组输入，用位移计算2的n次方
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//
//	//法二
//
//	//pow返回值为双精度浮点型数字
//	//double pow(double, double)
//	double x = 0.0;
//	scanf("%lf", &x);
//	printf("%lf", pow(2, x));
//
//	//法一
//	//while (scanf("%d", &x) != EOF)//2
	//	//或者~scanf("%d",&x)(按位取反)
//	//{
//	//	//这边的getchar居然无法把scanf后\n吃掉
//	//	//getchar();
//	//	//printf("%d\n", 1 << x);
//	//}
//	return 0;
//}

////7.写一个生命计算器，
////要求用户输入生日，显示他在这个世界上已经活了多少天？
//#include<stdio.h>
//int main()
//{
//	int count = 0;//计算，用户已经活了多少天了
//	int day1, day2;//day1,month1,year1表示为用户出生的日期
//	int month1, month2;//day2,month2,year2表示的为现在的日期
//	int year1, year2;
//	int days[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	printf("请输入您的出生日期格式为2000-02-03->");
//	scanf("%d-%d-%d", &year1,&month1,&day1);
//	//getchar();//吃掉回车这边不是getchar类型的所一不用吃掉回车
//	printf("请输入现在的日期格式为 2000-02-03->");
//	scanf("%d-%d-%d", &year2, &month2, &day2);
//
//	while (year1 <= year2)//
//	{
//		days[1] = !(year1 % 400) || (!(year1 % 4) && year1 % 100)
//			? 29 : 28;//三目操作符简化if从句的判断
//		while (month1 <= 12)
//		{
//			while (day1 <= days[month1 - 1])
//			{
//				if (year1 == year2 && month1 == month2 && day1 == day2)
//				{
//					goto FINISH;//goto语句最大作用就是跳出多层循环
//				}
//				day1++;
//				count++;
//			}
//			day1 = 1;
//			month1++;
//		}
//		month1 = 1;
//		year1++;
//	}
//FINISH:printf("恭喜你!!!你已经存活了%d天", count);
//	return 0;
//}

//8（gou）.题目：输入一个无符号整数，改变二进制位第三位为1，第二位为0； 
//#include<stdio.h>
//int main()
//{
//	unsigned int X;
//	printf("请输入一个无符号整数：");
//	scanf("%u", &X);
//	//1 2^1 - 1 11 2^2 - 1
//	//15 00000000 00000000 00000000 00001111
//	//1101 13
//	// | 00000000 00000000 00000000 00000100 0x00000004
//	//X | 00000000 00000000 00000000 00000100 改变第三位为1 
//	//&  11111111 11111111 11111111 1111 1101 0xfffffffd
//	X = X & 0xfffffffd |0x00000004;
//	printf("%u", X);
//	return 0;
//}

//9（gou）.三角形面积的海伦公式
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	double circumference = a + b + c;//int型数据可以直接存储到double中
//	double p = circumference / 2.0;
//	double area = sqrt(p * (p - a) * (p - b) * (p - c));
//	printf("circumference = %.2lf area = %.2lf", circumference, area);
//	return 0;
//}

//10（gou）.计算球体的面积
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double R, pi = 3.1415926;
//	scanf("%lf", &R);
//	double V = 4.0 / 3 * pi * pow(R, 3.0);//头文件别忘记了
//	printf("%.3lf", V);
//	return 0;
//}

//11.变种水仙花数把任意的数据从中间拆分成2个数字比如1461可以拆分成1和461 14和61 146和1
//如果所有拆分后的乘积之和等于自身则是一个Lily number。
//要求 5位数中的Lily Number

//#include<stdio.h>
//int main()
//{
//	//1461 ==  1* 461 + 14 * 61 + 146 * 1;
//	//除1000 %1000 除100 %100 除10 % 10;
//	int i, j, sum = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		j = 0;
//		sum = 0;//
//		for (j = 10; j <= 10000; j *= 10)
//		{
//			sum += ((i / j) * (i % j));
//		}
//		//判断变种水仙花数
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////12（gou）.排名不超过n个（40）(从高名次到低名次)，并输入前5名的成绩
//#include<stdio.h>
//#include<stdlib.h>
//int cmp_int(const void* e1,const void* e2)
//{
//	return (*(int*)e2 - *(int*)e1);//为正则交换
//}
//int main()
//{
//	int arr[40] = { 0 };
//	int n, i;
//	//人数输入
//	scanf("%d", &n);
//	//成绩输入
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		
//	}
//	qsort(arr, n, sizeof(int), cmp_int);//qsort(你也可以用冒泡排序)
//	for (i = 0; i < 5; i++)//或者你从i = n - 1; i <= n -5;上面的cmp_int 就是e1 - e2了
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//冒泡排序
//#include<stdio.h>
//#include<assert.h>
//void Bubble_sortds(int* arr, size_t n)
//{
//	assert(arr);
//	int i, j, tmp;
//	//趟数
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//}
//int main()
//{
//	int n, i;
//	int arr[40] = { 0 };
//	scanf("%d", &n);//人数
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);//录入数据 
//	}
//	Bubble_sort(arr, n);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//13.双十二 0.8折 双十一 0.7折，有优惠券减50（有优惠券1，无0）（别指望商家倒贴你钱）(结果保留两位小数)
//#include<stdio.h>
//int main()
//{
//	double price, discount = 1.0;
//	int flag, month, day;
//	printf("请输入价钱，月份，天数，有无优惠券->");//100,12,12,1
//	scanf("%lf %d %d %d",&price,&month,&day,&flag);
//	if (11 == month && 11 == day)
//	{
//		discount = 0.7;
//	}
//	else if (12 == month && 12 == day)
//	{
//		discount = 0.8;
//	}
//	price = discount * price - 50 * flag;
//	if (price < 0)
//		price = 0.0;
//	printf("%lf", price);
//	return 0;
//}

//14.输入一个16进制 和 8进制  将它们加起来 一 10进制打印
//各种进制其实就是为了表示一个数据，不表示数据的存储
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%x %o", &a, &b);
//	printf("%d", a + b);
//	return 0;
//}

//15.录入5名学生的成绩(整数)，求他们的平均成绩(浮点数,保留一位小数)
//#include<stdio.h>
//int main()
//{
//	float sum = 0.0;
//	int arr[5] = { 0 };
//	int i;
//	printf("请输入5名学生的成绩");
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum += (float)arr[i];
//	}
//	printf("%.1f", sum / 5);//或者你这边就直接sum为int型，/ 5.0
//	return 0;
//}

//16.一箱子n盒牛奶，一人h分钟和1盒酸奶，且该人再喝完这瓶前不会打开其他的酸奶，
//问：过m分钟后还有多少盒未打开的酸奶
//多组输入，每组仅输入一行,(m，n均为整数)
//#include<stdio.h>
//int main()
//{
//	int n, h, m;
//	printf("n h m");// 13 3 5
//	while (	scanf("%d %d %d", &n, &h, &m) != EOF)//scanf录入成功则返回录入的个数，反之EOF
//	{
//		if (m % h)
//		{
//			printf("%d\n", n - m / h - 1);//这里和下面的\n必须加上
//		}
//		else
//		{
//			printf("%d", n - m / h);
//		}
//	}
//	return 0;
//}

//17.多组输入,找出五个数中的最大值
//#include<stdio.h>
//int main()
//{
//	int i, max;
//	int arr[5] = { 0 };
//	while (~scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]))
//	{
//		max = 0;
//		for (i = 0; i < 5; i++)
//		{
//			if (arr[i] > max)
//				max = arr[i];
//		}
//		printf("%d\n", max);
//	}
//	return 0;
//}

//18.多组输入，判断一个字母是元音（包括大小写）Vowel，还是非元音（consonant)
//#include<stdio.h>
//int main()
//{
//	int ch, i;
//	char Y[] = "AaEeIiOoUu";
//	int sz = sizeof(Y) / sizeof(Y[1]);//\0也要算上
//	while (~(ch = getchar()))//这边scanf(" %c",&ch);//表示为忽略空白字符（这里指的是\n）有A\nb\n;就直接不看看两个\n
//	{//或者就是scanf("%c\n",&ch);表示你输入的时候也要按照格式输入，完之后,scanf把\n也一起拿走,即scanf遇到\n停止
//		getchar();//吃掉回车
//		for (i = 0; i < sz - 1; i++)
//		{
//			if (ch == Y[i])
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		//break跳的位置在这里
//		if (i > 9)
//		{
//			printf("Consonant\n");
//		}
//	}
//	return 0;
//}

//islower()判断大小写字母 toupper (到大写) isupper tolower
//19.输入符合条件的三角形
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	while (~scanf("%d %d %d", &a, &b, &c))
//	{
//		//判断三角形
//		if (a + b > c && a + c > b && b + c > a)
//		{
//			if (a == b && b == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if ((a == b && b != c) || (a == c && a != b) || (b == c && a != c))
//			{
//				printf("Isosceles triangle\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//		else
//			printf("Not a triangle!\n");
//	}
//	return 0;
//}

//20.输入A和B 以0结束 竞选社长 A和B看谁多 ,总人数不超过100人
//#include<stdio.h>
//int main()
//{
//	char str[100] = { 0 };
//	char* p = str;
//	int count = 0;
//	gets(str);
//	while (*p)
//	{
//		if (*p == 'A')
//		{
//			count++;
//		}
//		else if (*p == 'B')
//		{
//			count--;
//		}
//			p++;
//	}
//	if (count > 0)
//	{
//		printf("A的票数多");
//	}
//	else if (!count)
//	{
//		printf("两人票数相同");
//	}
//	else
//	{
//		printf("B的票数多");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int count1 = 0, count2 = 0;
//	char ch;
//	while (((ch = getchar()) != EOF) && ch != '0')
//	{
//		if (ch == 'A')
//		{
//			count1++;
//		}
//		if (ch == 'B')
//			count2++;
//
//	}
//	if (count1 > count2)
//		printf("A");
//	else if (count1 == count2)
//		printf("E");
//	else
//		printf("B");
//	return 0;
//}

//21.打印K字形
//#include<stdio.h>
//int main()
//{
//	int i, n;
//	while (~scanf("%d", &n))
//	{
//		//法一
//	//	//上半部分
//	//	//行
//	//	for (i = 0; i < n; i++)
//	//	{
//	//		int j = 0;
//	//		for (j = 0; j < n - i; j++)
//	//		{
//	//			printf("* ");
//	//		}
//	//		printf("\n");
//	//	}
//	//	//下半部分
//	//	for (i = 1; i < n; i++)
//	//	{
//	//		int j = 0;
//	//		for (j = 0; j < 1 + i; j++)
//	//		{
//	//			printf("* ");
//	//		}
//	//		printf("\n");
//	//	}
//	//}
//		//法二，二维数组的思想
//		//行
//		//上部分
//
//	//	for (i = 0; i < n; i++)
//	//	{
//
//	//		int j = 0;
//	//		for (j = 0; j < n; j++)
//	//		{
//	//			if (i + j >= n - 1)
//	//			{
//	//				printf("* ");
//	//			}
//	//			else
//	//				printf(" ");
//	//		}
//	//		printf("\n");
//	//	}
//	//	for (i = 0; i < n; i++)
//	//	{
//	//		int j = 0;
//	//		for (j = 0; j < n; j++)
//	//		{
//	//			if (i + j < n - 1)
//	//				printf("* ");
//	//			else
//	//				printf(" ");
//	//		}
//	//		printf("\n");
//	//	}
//	//}
//	//下部分
//	return 0;
//}

//22.多组输入,计算一元二次方程的解
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a, b, c;
//	while (~scanf("%lf %lf %lf", &a, &b, &c))
//	{
//		if (a)
//		{
//			//有实根
//			if (b * b - 4 * a * c > 0)
//			{
//				printf("x1=%.4lf x2=%.4lf\n",
//					(-b - sqrt(b * b - 4 * a * c)) / (2 * a),
//					(-b + sqrt(b * b - 4 * a * c)) / (2 * a));
//			}
//			else if (b * b - 4 * a * c < 0)
//			{
//				printf("x1=%.4lf+%.4lfi x2=%.4lf-%.4lfi\n",
//					-b/(2 * a), sqrt(-b * b + 4 * a * c),
//					-b / (2 * a), sqrt(-b * b + 4 * a * c));
//			}
//			else
//				printf("x1=x2=%.4lf\n", (-b) / (2 * a));
//
//		}
//		else
//		{
//			printf("不是一元二次方程\n");
//		}
//	}
//	return 0;
//}

//23.多组输入，箭型
//#include<stdio.h>
//int main()
//{
//	int i,n;
//	while (~scanf("%d", &n))//这边可以在循环里面定义变量，出循环就不行了
//	{
//		//上
//		for (i = 0; i < n - 1; i++)
//		{//行
//			int j = 0;
//			for (j = 0; j < n - 1 - i; j++)
//			{
//				printf("  ");
//			}
//			for (j = 0; j <= i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		//下 n + 1
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < i; j++)
//			{
//				printf("  ");
//			}
//			for (j = 0; j < n - i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//24.多组输入，打印反斜杠
//#include<stdio.h>
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			//暴力法三部分
//			int j = 0;
//			for (j = 0; j < i; j++)
//			{
//				printf(" ");
//			}
//			printf("*");//不需要for循环
//			for (j = 0; j < n - 1 - i; j++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//			//最优,找出功率
//			//int j = 0;
//			//for (j = 0; j < n; j++)
//			//{
//			//	if (i == j)
//			//		printf("*");
//			//	else
//			//		printf(" ");
//			//}
//			//printf("\n");
//		}
//	}
//
//	return 0;
//}

//25.多组输入，打印X型
//#include<stdio.h>
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				if ((i == j) || (i + j == n - 1))
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//26.多组输入，打印正方型
//类似的打印空心三角形 i == j,j == 0, i == n - 1.注意换行
//#include<stdio.h>
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				if ((i == 0)
//					|| (i == n - 1)
//					|| (j == 0)
//					|| (j == n - 1))
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//
//	}
//
//	return 0;
//}

//27.多组输入，输入年月份找出该月份有多少天
//#include<stdio.h>
//int main()
//{
//	int y, m;
//	int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (~scanf("%d %d", &y, &m))
//	{
//		if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
//		{
//			arr[1] = 29;
//		}
//		printf("%d ", arr[m - 1]);
//	}
//
//	return 0;
//}

//28.多组输入，将对应的秒数转化为小时分秒
//#include<stdio.h>
//int main()
//{
//	int n,h,m,s;
//	while (~scanf("%d", &n))
//	{
//		h = n % 60 % 60;
//		m = n / 60 % 60;
//		s = n % 3600;
//		printf("h = %d m = %d s = %d\n", h, m, s);
//	}
//	return 0;
//}

//29.求出a,b,c,d三个数中的第二大值
//#include<stdio.h>
//int cmp_int(void* e1, void* e2)
//{
//	return *(int*)e2 - *(int*)e1;
//}
//int main()
//{
//	int a, b, c, d;
//	while (~scanf("%d %d %d %d", &a, &b, &c, &d))
//	{
//		int arr[4] = { a, b, c, d };
//		qsort(arr, 4, sizeof(int), cmp_int);
//		printf("%d\n", arr[1]);
//	}
//	return 0;
//}

//30.输入正整数，对其各位求和,求和后的正整数重复该过程直至求和后变为一位数
//#include<stdio.h>
//int Fint(int n)
//{
//	//123 4
//	if (n > 9)
//		return Fint(n / 10) + n % 10;
//	else
//		return n;
//
//}
//int main()
//{
//	int n;
//	printf("请输入一个正整数");
//	scanf("%d", &n);//1234 -- 10 - 1
//	//12345 -- 15 -- 6
//	int ret = Fint(n);
//	if (ret > 9)
//	{
//		ret = Fint(ret);
//	}
//	printf("%d", ret);
//	return 0;
//}

#include<stdio.h>
double Calc(double price, int KM)
{
	if (KM <= 3)
		return price;
	else if (KM > 3 && KM <= 5)
	{
		return price + 1.8 * (KM - 3); // 5km -13.6 
	}
	else if (KM > 5)//
	{
		return price + 1.8 * 2 + 1.8 * (1 + 0.5) * (KM - 5);
		//这边KM已经超过了5所以第二部分就不再是1.8 *（KM-3）
	}

}
int main()
{
	int KM;
	scanf("%d", &KM);
	double price = 10.0;
	double ret = Calc(price, KM);
	printf("%lf", ret);
	return 0;
}