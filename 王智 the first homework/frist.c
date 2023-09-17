#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//实验三
void Sort(int a[],int k,int count,int n,int m)
{
	int k1 = k;
	for (; k <= n; k++)
	{
		if (k = (k1 + m - 1))
		{
			a[k] = 0;
			k1 = k;
			count = 0;
		}
		count++;
	}
}

int main()
{
	int arr[100] = { 0 };
	int n,k,m,k1,count,count1,count2;
	puts("input how many people they are");
	scanf("%d",&n);
	for (int x = 0; x < n; x++)
	{
		arr[x] =x ;
	}
	puts("from which person,and end whic");
	scanf("%d %d", &k, &m);
	k1 = k;
	count = 0;

	count1 = k - count;
	count2 = 0;
	for (; count1 >= 0; count1--)
	{
		count2++;
		if (count1 == 0)
		{
			arr[count2 - 1] = 0;
		}	
	}
	//for (; k < n; k++)
	//{

	//}
	printf("%d", arr[3]);
	return 0;

}




#include <stdio.h>
void A();
void B();
void C();
void A(int a[])
{
	a[2] = 6;
	printf("%d", a[2]);
	B(a);
}
void B(int b[])
{
	b[2] = 8;
	printf("%d", b[2]);
	C(b);
}

void C(int c[])
{
	printf("%d", c[2]);
}


int main()
{
	int a[100];
	a[2] = 3;
	A(a);
	printf("%d", a[2]);
	return 0;
}





//#include<stdio.h>
//#include<math.h>
////实验二
//int numbit(int x)
//{
//	int n = 0;
//	for (; x > 0; x /=10)
//	{
//		n++;
//	}
//	return n;
//}
//
//int singlen(int x,int number)
//{
//	int n = numbit(x);
//	int numc=0;
//	int a;
//	for (; n > 0; n--)
//	{   
//		a = pow(10, n-1);
//		if ((x/a)%10 == number)
//		{
//			numc++;
//		}
//
//	}
//	return numc;
//
//}
//int dermtimes(int x,int y,int number)
//{
//	int numc = 0;
//	for (; x <=y; x++)
//	{
//		numc += singlen(x, number);
//	}
//	return numc;
//}
//
//int main()
//{
//	int number, x, y;
//	int need = 0;
//	puts("input the number you want and which number you want to konw come up with the time");
//	scanf("%d %d %d", &x,&y, &number);
//	need =  dermtimes(x, y, number);
//	printf("the time is %d", need);
//	return 0;
//}
//实验1
//#include <stdio.h>
//
//int Leapyear(int year)
//{
//	int leap = 0;
//	int x = year % 100;//不能被100整除
//	int y = year % 4;//可以被4整除
//	int z = year % 400;//可以被400整除
//	if ((y==0&&x!=0)||z==0)
//	{
//		return leap = 1;
//	}
//	return leap;
//}
//
//int Year_coincide(int year, int x)
//{
//	int year1, year2, year3, year4;
//	int year_numc = 0;
//	year1 = (year / 1000) % 10;
//	year2 = (year / 100) % 10;
//	year3 = (year / 10) % 10;
//	year4 = year % 10;
//	if (year1 == x)
//		year_numc += 1;
//	if (year2 == x)
//		year_numc += 1; 
//	if (year3 == x)
//		year_numc += 1; 
//	if (year4 == x)
//		year_numc += 1;
//	return year_numc;
//}
//
//int Year_add(int year,int x, int month)
//{
//	int numc=Year_coincide(year,x);
//	int year_add;
//	int leap = Leapyear(year);
//	if (leap == 1 && month == 2)
//	{
//		return year_add = numc * 29;
//	}
//	else if (leap == 0 && month == 2)
//	{		
//		return year_add = numc * 28;	
//	}
//	else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//	{
//		return year_add = numc * 31;
//	}
//	else
//	{
//		return year_add = numc * 30;
//	}
//}
//
//int Month_coincide(int month, int x)
//{
//	int month1 = (month / 10) % 10;
//	int month2 = month % 10;
//	int monthc = 0;
//	if (month1 == x)
//		monthc += 1;
//	if (month2 == x)
//		monthc += 1;
//	return monthc;
//}
//
//int Month_add(int year,int month, int x)
//{
//	int monthc = Month_coincide(month,x);
//	int leap = Leapyear(year);
//	int month_add = 0;
//	if (leap == 1 && month == 2)
//	{
//		return month_add = monthc * 29;
//	}
//	else if (leap == 0 && month == 2)
//	{
//		return month_add = monthc * 28;
//	}
//	else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//	{
//		return month_add =  monthc* 31;
//	}
//	else
//	{
//		return month_add = monthc * 30;
//	}
//
//}
//
//int Day_derm(int year,int month)
//{
//	int leap = Leapyear(year);
//	int day;
//	if (leap == 1 && month == 2)
//	{
//		return day = 29;
//	}
//	else if (leap == 0 && month == 2)
//	{
//		return day = 28;
//	}
//	else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//	{
//		return day = 31;
//	}
//	else
//	{
//		return day = 30;
//	}
//}
//
//int Day_add(int year, int month, int x)
//{
//	int dayen = Day_derm(year, month);
//	int day_num = 0;
//	for (; dayen > 0; dayen--)
//	{
//		if (dayen % 10 == x)
//		{
//			day_num += 1;
//		}
//		if ((dayen / 10) % 10 == x)
//		{
//			day_num += 1;
//		}
//	}
//	return day_num;
//}
//
//int main()
//{
//	puts("input the year month and the number you want to konw");
//	int year, month, number;
//	int sum = 0;
//	scanf("%d %d %d", &year, &month, &number);
//	int year_addnum = Year_add(year, number, month);
//	int month_addnum = Month_add(year, month, number);
//	int day_addnum = Day_add(year, month, number);
//	sum = year_addnum + month_addnum + day_addnum;
//	printf("the number has came up %d times", sum);
//	return 0;
//
//}