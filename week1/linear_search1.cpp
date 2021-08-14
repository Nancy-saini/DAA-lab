/*week 1
linear search
question 1
*/
#include<iostream>

using namespace std;
int main()
{
	int n,num,item;
	cin>>n;
	while(n!=0)
	{
	    int flag=0;
	    cin>>num;
	    int arr[num];
	    for(int i=0;i<num;i++)
			cin>>arr[i];
	    cin>>item;
		for(int j=0;j<num;j++)
		{
			if(arr[j]==item)
				flag=j+1;
		}
		if(flag!=0)
			cout<<" present "<<flag<<endl;
		else
			cout<<"not present "<<num<<endl;
        n--;
	}
	return 0;
}
