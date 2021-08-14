/*week0
linear search
*/
#include<iostream>

using namespace std;
int main()
{
	int n,num,item,flag=0;
	cout<<"enter number of test cases: ";
	cin>>n;
	while(n!=0)
	{
	    cout<<"enter no. of elements: ";
	    cin>>num;
	    int arr[num];
	    for(int i=0;i<num;i++)
			cin>>arr[i];
        cout<<"enter element to be found :";
	    cin>>item;
		for(int j=0;j<num;j++)
		{
			if(arr[j]==item)
				flag=j+1;
            n--;
		}
		if(flag!=0)
			cout<<"element found at position "<<flag<<endl;
		else
			cout<<"element not found!";
	}
	return 0;
}
