#define _CRT_SECURE_NO_WARNINGS 1
//1.�����ӡһ������
//#include<stdio.h>
//int main()
//{
//	int n;
//	printf("������һ������->");//1234
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d", n % 10);
//		n /= 10;
//	}
//	return 0;
//}

//�����д�ַ����룬ת��ΪСд�ַ�
//getchar()��ȡ�ַ�ʧ�ܵ�ʱ��᷵��EOF,
//��ȡ�ɹ���������ַ���ASCIIֵ
//#include<stdio.h>
//int main()
//{
//	char ch;
//	while ((ch = getchar()) != EOF)
//	{
//		getchar();//����\n
//		putchar(ch + 32);
//		printf("\n");
//		//��߿��Բ�Ҫputchar,ֱ��printf("%c\n");
//		//�������ӡ�򵥵�����Ҳһ������ֱ��һ��printf��
//		//��λ��и㶨ȫ��
//	}
//	return 0;
//}

//3.
//#include<stdio.h>
//int main()
//{
//	//��ӡhello world��
//	//����ӡ���䷵��ֵ
//	printf("\n%d\n", printf("Hello World!"));
//	return 0;
//}


//�ж���ĸisalpha
//4.��ӡ��������
//#include<stdio.h>
//int main()
//{
//	int j, i, line, n;
//	printf("������Ҫ��ӡ���ϰ�������");
//	scanf("%d", &line);//5
//	printf("������Ҫ��ӡ������:");
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
//	//��ӡ�°벿��
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

//���ε�sha
//��������ά�����˼��
//��
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

//5��gou�����룬��ӡ����
//#include<stdio.h>
//int main()
//{
//	int y ;
//	int m ;
//	int d ;
//	scanf("%4d%2d%2d", &y, &m, &d);//��ʽ����ָ���п�
//	printf("year = %d\n", y);
//	printf("month = %0d\n", m);//%0��ʾָ��������Ͳ���
//	printf("day = %0d", d);
//	return 0;
//}

//6��gou��.�������룬��λ�Ƽ���2��n�η�
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//
//	//����
//
//	//pow����ֵΪ˫���ȸ���������
//	//double pow(double, double)
//	double x = 0.0;
//	scanf("%lf", &x);
//	printf("%lf", pow(2, x));
//
//	//��һ
//	//while (scanf("%d", &x) != EOF)//2
	//	//����~scanf("%d",&x)(��λȡ��)
//	//{
//	//	//��ߵ�getchar��Ȼ�޷���scanf��\n�Ե�
//	//	//getchar();
//	//	//printf("%d\n", 1 << x);
//	//}
//	return 0;
//}

////7.дһ��������������
////Ҫ���û��������գ���ʾ��������������Ѿ����˶����죿
//#include<stdio.h>
//int main()
//{
//	int count = 0;//���㣬�û��Ѿ����˶�������
//	int day1, day2;//day1,month1,year1��ʾΪ�û�����������
//	int month1, month2;//day2,month2,year2��ʾ��Ϊ���ڵ�����
//	int year1, year2;
//	int days[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	printf("���������ĳ������ڸ�ʽΪ2000-02-03->");
//	scanf("%d-%d-%d", &year1,&month1,&day1);
//	//getchar();//�Ե��س���߲���getchar���͵���һ���óԵ��س�
//	printf("���������ڵ����ڸ�ʽΪ 2000-02-03->");
//	scanf("%d-%d-%d", &year2, &month2, &day2);
//
//	while (year1 <= year2)//
//	{
//		days[1] = !(year1 % 400) || (!(year1 % 4) && year1 % 100)
//			? 29 : 28;//��Ŀ��������if�Ӿ���ж�
//		while (month1 <= 12)
//		{
//			while (day1 <= days[month1 - 1])
//			{
//				if (year1 == year2 && month1 == month2 && day1 == day2)
//				{
//					goto FINISH;//goto���������þ����������ѭ��
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
//FINISH:printf("��ϲ��!!!���Ѿ������%d��", count);
//	return 0;
//}

//8��gou��.��Ŀ������һ���޷����������ı������λ����λΪ1���ڶ�λΪ0�� 
//#include<stdio.h>
//int main()
//{
//	unsigned int X;
//	printf("������һ���޷���������");
//	scanf("%u", &X);
//	//1 2^1 - 1 11 2^2 - 1
//	//15 00000000 00000000 00000000 00001111
//	//1101 13
//	// | 00000000 00000000 00000000 00000100 0x00000004
//	//X | 00000000 00000000 00000000 00000100 �ı����λΪ1 
//	//&  11111111 11111111 11111111 1111 1101 0xfffffffd
//	X = X & 0xfffffffd |0x00000004;
//	printf("%u", X);
//	return 0;
//}

//9��gou��.����������ĺ��׹�ʽ
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	double circumference = a + b + c;//int�����ݿ���ֱ�Ӵ洢��double��
//	double p = circumference / 2.0;
//	double area = sqrt(p * (p - a) * (p - b) * (p - c));
//	printf("circumference = %.2lf area = %.2lf", circumference, area);
//	return 0;
//}

//10��gou��.������������
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double R, pi = 3.1415926;
//	scanf("%lf", &R);
//	double V = 4.0 / 3 * pi * pow(R, 3.0);//ͷ�ļ���������
//	printf("%.3lf", V);
//	return 0;
//}

//11.����ˮ�ɻ�������������ݴ��м��ֳ�2�����ֱ���1461���Բ�ֳ�1��461 14��61 146��1
//������в�ֺ�ĳ˻�֮�͵�����������һ��Lily number��
//Ҫ�� 5λ���е�Lily Number

//#include<stdio.h>
//int main()
//{
//	//1461 ==  1* 461 + 14 * 61 + 146 * 1;
//	//��1000 %1000 ��100 %100 ��10 % 10;
//	int i, j, sum = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		j = 0;
//		sum = 0;//
//		for (j = 10; j <= 10000; j *= 10)
//		{
//			sum += ((i / j) * (i % j));
//		}
//		//�жϱ���ˮ�ɻ���
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////12��gou��.����������n����40��(�Ӹ����ε�������)��������ǰ5���ĳɼ�
//#include<stdio.h>
//#include<stdlib.h>
//int cmp_int(const void* e1,const void* e2)
//{
//	return (*(int*)e2 - *(int*)e1);//Ϊ���򽻻�
//}
//int main()
//{
//	int arr[40] = { 0 };
//	int n, i;
//	//��������
//	scanf("%d", &n);
//	//�ɼ�����
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		
//	}
//	qsort(arr, n, sizeof(int), cmp_int);//qsort(��Ҳ������ð������)
//	for (i = 0; i < 5; i++)//�������i = n - 1; i <= n -5;�����cmp_int ����e1 - e2��
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//ð������
//#include<stdio.h>
//#include<assert.h>
//void Bubble_sortds(int* arr, size_t n)
//{
//	assert(arr);
//	int i, j, tmp;
//	//����
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
//	scanf("%d", &n);//����
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);//¼������ 
//	}
//	Bubble_sort(arr, n);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//13.˫ʮ�� 0.8�� ˫ʮһ 0.7�ۣ����Ż�ȯ��50�����Ż�ȯ1����0������ָ���̼ҵ�����Ǯ��(���������λС��)
//#include<stdio.h>
//int main()
//{
//	double price, discount = 1.0;
//	int flag, month, day;
//	printf("�������Ǯ���·ݣ������������Ż�ȯ->");//100,12,12,1
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

//14.����һ��16���� �� 8����  �����Ǽ����� һ 10���ƴ�ӡ
//���ֽ�����ʵ����Ϊ�˱�ʾһ�����ݣ�����ʾ���ݵĴ洢
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%x %o", &a, &b);
//	printf("%d", a + b);
//	return 0;
//}

//15.¼��5��ѧ���ĳɼ�(����)�������ǵ�ƽ���ɼ�(������,����һλС��)
//#include<stdio.h>
//int main()
//{
//	float sum = 0.0;
//	int arr[5] = { 0 };
//	int i;
//	printf("������5��ѧ���ĳɼ�");
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum += (float)arr[i];
//	}
//	printf("%.1f", sum / 5);//��������߾�ֱ��sumΪint�ͣ�/ 5.0
//	return 0;
//}

//16.һ����n��ţ�̣�һ��h���Ӻ�1�����̣��Ҹ����ٺ�����ƿǰ��������������̣�
//�ʣ���m���Ӻ��ж��ٺ�δ�򿪵�����
//�������룬ÿ�������һ��,(m��n��Ϊ����)
//#include<stdio.h>
//int main()
//{
//	int n, h, m;
//	printf("n h m");// 13 3 5
//	while (	scanf("%d %d %d", &n, &h, &m) != EOF)//scanf¼��ɹ��򷵻�¼��ĸ�������֮EOF
//	{
//		if (m % h)
//		{
//			printf("%d\n", n - m / h - 1);//����������\n�������
//		}
//		else
//		{
//			printf("%d", n - m / h);
//		}
//	}
//	return 0;
//}

//17.��������,�ҳ�������е����ֵ
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

//18.�������룬�ж�һ����ĸ��Ԫ����������Сд��Vowel�����Ƿ�Ԫ����consonant)
//#include<stdio.h>
//int main()
//{
//	int ch, i;
//	char Y[] = "AaEeIiOoUu";
//	int sz = sizeof(Y) / sizeof(Y[1]);//\0ҲҪ����
//	while (~(ch = getchar()))//���scanf(" %c",&ch);//��ʾΪ���Կհ��ַ�������ָ����\n����A\nb\n;��ֱ�Ӳ���������\n
//	{//���߾���scanf("%c\n",&ch);��ʾ�������ʱ��ҲҪ���ո�ʽ���룬��֮��,scanf��\nҲһ������,��scanf����\nֹͣ
//		getchar();//�Ե��س�
//		for (i = 0; i < sz - 1; i++)
//		{
//			if (ch == Y[i])
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		//break����λ��������
//		if (i > 9)
//		{
//			printf("Consonant\n");
//		}
//	}
//	return 0;
//}

//islower()�жϴ�Сд��ĸ toupper (����д) isupper tolower
//19.�������������������
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	while (~scanf("%d %d %d", &a, &b, &c))
//	{
//		//�ж�������
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

//20.����A��B ��0���� ��ѡ�糤 A��B��˭�� ,������������100��
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
//		printf("A��Ʊ����");
//	}
//	else if (!count)
//	{
//		printf("����Ʊ����ͬ");
//	}
//	else
//	{
//		printf("B��Ʊ����");
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

//21.��ӡK����
//#include<stdio.h>
//int main()
//{
//	int i, n;
//	while (~scanf("%d", &n))
//	{
//		//��һ
//	//	//�ϰ벿��
//	//	//��
//	//	for (i = 0; i < n; i++)
//	//	{
//	//		int j = 0;
//	//		for (j = 0; j < n - i; j++)
//	//		{
//	//			printf("* ");
//	//		}
//	//		printf("\n");
//	//	}
//	//	//�°벿��
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
//		//��������ά�����˼��
//		//��
//		//�ϲ���
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
//	//�²���
//	return 0;
//}

//22.��������,����һԪ���η��̵Ľ�
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a, b, c;
//	while (~scanf("%lf %lf %lf", &a, &b, &c))
//	{
//		if (a)
//		{
//			//��ʵ��
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
//			printf("����һԪ���η���\n");
//		}
//	}
//	return 0;
//}

//23.�������룬����
//#include<stdio.h>
//int main()
//{
//	int i,n;
//	while (~scanf("%d", &n))//��߿�����ѭ�����涨���������ѭ���Ͳ�����
//	{
//		//��
//		for (i = 0; i < n - 1; i++)
//		{//��
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
//		//�� n + 1
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


//24.�������룬��ӡ��б��
//#include<stdio.h>
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			//������������
//			int j = 0;
//			for (j = 0; j < i; j++)
//			{
//				printf(" ");
//			}
//			printf("*");//����Ҫforѭ��
//			for (j = 0; j < n - 1 - i; j++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//			//����,�ҳ�����
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

//25.�������룬��ӡX��
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

//26.�������룬��ӡ������
//���ƵĴ�ӡ���������� i == j,j == 0, i == n - 1.ע�⻻��
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

//27.�������룬�������·��ҳ����·��ж�����
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

//28.�������룬����Ӧ������ת��ΪСʱ����
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

//29.���a,b,c,d�������еĵڶ���ֵ
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

//30.�����������������λ���,��ͺ���������ظ��ù���ֱ����ͺ��Ϊһλ��
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
//	printf("������һ��������");
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
		//���KM�Ѿ�������5���Եڶ����־Ͳ�����1.8 *��KM-3��
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