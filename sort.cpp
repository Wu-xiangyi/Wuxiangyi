#include <bits/stdc++.h>
using namespace std;
// �����������
int arr[1000];
void generateArray(int arr[], int n)
{
	for(int i=1;i<=n;i++)
	{
		arr[i]=rand()%100;
	}
};
// ��ӡ����
void printArray(int arr[], int n)
{
	cout<<"ԭʼ���飺";
	for(int  i=1;i<=n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
};
// �����㷨����������ʵ����������������������������ʽ��
void bubbleSort(int arr[], int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);//������Ըĳ�����temp���д��뽻�� 
			}
		}
	}
	cout<<"ð������";
	for(int i=1;i<=n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
; // ð������

void selectionSort(int arr[], int n)
{
	int minn=0;
    for (int i = 1; i <= n; i++)
    {
    	minn = i;
    	for (int j = i+1; j <= n; j++) 
		{
        	if (arr[j] < arr[minn]) 
			{
            	minn = j;
        	}	
		}
		swap(arr[i],arr[minn]);
	}
	cout<<"ѡ������";
	for (int i = 1; i <= n; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
; // ѡ������ 

void insertionSort(int arr[], int n)
{
	for(int i=1;i<=n;i++)
	{
		if(arr[i]<arr[i-1])
		{
			int temp = arr[i];
			int j;
			for(j=i-1; j>=0 && arr[j]>temp ;j--)
			{
				arr[j+1]=arr[j];
			}
			arr[j+1] = temp;
		}
		
	}
	cout<<"��������";
	for (int i = 1; i <= n; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
; // ��������

void quickSort(int arr[], int low, int high)
{
    int i = low; 
    int j = high;
    if(i >= j) {
        return;
    }
    int temp = arr[low];
    while(i != j) {
        while(arr[j] >= temp && i < j) 
		{
            j--;
        }
	while(arr[i] <= temp && i < j) 
	{
            i++;
        }
	if(i < j) 
	{
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[i]);
    quickSort(arr, low, i - 1);
    quickSort(arr, i + 1, high);
}
; // ��������

int main()
{
	generateArray(arr,10);
	printArray(arr,10);
	bubbleSort(arr,10);
	selectionSort(arr,10);
	insertionSort(arr,10);
	quickSort(arr,1,10);
	cout<<"��������";
	for (int i = 1; i <= 10; i++)
		cout<<arr[i]<<" ";
	return 0;
}

