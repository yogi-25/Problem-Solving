#include<iostream>
using namespace std;
class number
{
	protected:
		int var1;
		int var2;
		int res;
		public:
			void setvar(int x,int y)
			{
				var1=x;
				var2=y;
			}
			virtual void op()=0;
			int getresult()
			{
				return res;
			}
			
};
class cal1:public number{
	public:
		void op()
		{
			res=var1/var2;
		}
};






class cal2:public number{
	
	
	public:
		void op()
		{
			res=var1-var2;
		}
	
	
};







int main()
{
	int m,n;
	number *no;
	cal1 ao;
	cal2 so;
	cin>>m>>n;
	no=&ao;
	no->setvar(m,n);
	no->op();
	cout<<no->getresult();
	
}
