#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"Pattern programming";
//	1 2 3 4
//	1 2 3 4
//	1 2 3 4
//	1 2 3 4
int n,i=1,j=1;
cout<<"Enter the number of rows";
cin>>n;
//for(int i=1;i<=n;i++)
//{
//	for(int j=1;j<=n;j++)
//	{
//		cout<<j<<" ";
//		
//	}
//	cout<<"\n";
//}

while(i<=n)
{
	j=1;
	while(j<=n)
	{
		cout<<j<<" ";
		j++;
	}
		cout<<"\n";

	i++;
}



	return 0;
}
