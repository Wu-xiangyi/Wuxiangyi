#include <bits/stdc++.h>
using namespace std;
// 生成随机数组
int arr[1000];
void generateArray(int arr[], int n)
{
	for(int i=1;i<=n;i++)
	{
		arr[i]=rand()%100;
	}
};
// 打印数组
void printArray(int arr[], int n)
{
	cout<<"原始数组：";
	for(int  i=1;i<=n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
};
// 排序算法函数（至少实现两个，不局限于所给四种排序方式）
void bubbleSort(int arr[], int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);//这里可以改成引入temp三行代码交换 
			}
		}
	}
	cout<<"冒泡排序：";
	for(int i=1;i<=n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
; // 冒泡排序

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
	cout<<"选择排序：";
	for (int i = 1; i <= n; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
; // 选择排序 

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
	cout<<"插入排序：";
	for (int i = 1; i <= n; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
; // 插入排序

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
; // 快速排序

int main()
{
	generateArray(arr,10);
	printArray(arr,10);
	bubbleSort(arr,10);
	selectionSort(arr,10);
	insertionSort(arr,10);
	quickSort(arr,1,10);
	cout<<"快速排序：";
	for (int i = 1; i <= 10; i++)
		cout<<arr[i]<<" ";
	return 0;
}

