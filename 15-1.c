#include<stdio.h>
#include<string.h>

void ShowOdd(int *arr, int size);

void ShowEven(int *arr, int size);


int main(void)
{
	int arr[10];
	int i;
	
	printf("총 10개의 숫자 입력 \n");
	for(i=0; i<10; i++)
	{
		printf("입력: ");
		scanf("%d", &arr[i]);
	}

	printf("홀수 출력 : ");
	ShowOdd(arr, sizeof(arr)/sizeof(int));

	printf("짝수 출력 : ");
	ShowEven(arr, sizeof(arr)/sizeof(int));

	return 0;
}

void ShowOdd(int *arr, int len)   //홀수출력 
{
	int i;
	for(i=0; i<len; i++)
	{
		if(arr[i]%2==1)
			printf("%d, ", arr[i]);
	}
	printf("\n");
}

void ShowEven(int *arr, int len)   //짝수출력
{
	int i;
	for(i=0; i<len; i++)
	{
		if(arr[i]%2==0)
			printf("%d, ", arr[i]);
	}
	printf("\n");
}





/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ShowOddElem(int arr[])
{
	int i;

	printf("홀수 출력: ");
	for (i = 0; i < 10; i++)
	{
		if (i == 8)
			printf("%d", arr[i]);
		else if (i % 2 == 0)
			printf("%d, ", arr[i]);
	}
	printf("\n");
}

void ShowEvenElem(int arr[])
{
	int i;

	printf("짝수 출력: ");
	for (i = 0; i < 10; i++)
	{
		if (i == 9)
			printf("%d", arr[i]);
		else if (i % 2 != 0)
			printf("%d, ", arr[i]);
	}
	printf("\n");
}

int main(void)
{
	int arr[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("입력: ");
		scanf("%d", &arr[i]);
	}

	ShowOddElem(arr);
	ShowEvenElem(arr);
	return 0;
}
*/
