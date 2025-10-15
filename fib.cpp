#include <bits/stdc++.h>
using namespace std;
int m;
// 计算第n个斐波那契数
long long fibonacci_nth(int n)
{
	if(n==0)
		return 0;
	if(n==1 || n==2)
		return 1;
	return fibonacci_nth(n-1)+fibonacci_nth(n-2);
};
// 输出前n项斐波那契数列
void fibonacci_sequence(int n)
{
	for(int  i = 0;i < n; i++)
	{
		cout<<fibonacci_nth(i)<<" ";
		if(i!=0  && i%8==7)
			cout<<endl;
	}
};
// 计算前n项斐波那契数列的和
long long fibonacci_sum(int n)
{
	long long cnt = 0;
	for(int i=0;i < n;i++)
	{
		cnt=cnt+fibonacci_nth(i);
	}
	return cnt;
};

int main()
{
	cin>>m;
	fibonacci_nth(m);
	fibonacci_sequence(m);
	cout<<endl<<fibonacci_sum(m);
	return 0;
}

