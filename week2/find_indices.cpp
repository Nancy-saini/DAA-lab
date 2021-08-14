/*week 2
find_indices
question
*/
#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,num,flag=0;
	cin>>n;
	while(n--)
	{
	    cin>>num;
	    int arr[num];
	    for(int i=0;i<num;i++)
		{
		    cin>>arr[i];
		}
	   for(int i=0;i<num-2;i++)
       {
           for(int j=i+1;j<num-1;j++)
           {
               for(int k=i+2;k<num;k++)
               {
                   if(arr[i]+arr[j]==arr[k])
                   {
                       cout<<i+1<<","<<j+1<<","<<k+1<<endl;
                       flag=1;
                       break;
                   }
               }
           }
       }
       if(flag==0)
            cout<<"No sequence found"<<endl;
	}
}
