/*week 2
find_indices
question 3
*/
#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,num,key;
	cin>>n;
	while(n--)
	{
	    int ctr=0;
	    cin>>num;
	    int arr[num];
	    for(int i=0;i<num;i++)
		{
		    cin>>arr[i];
		}
	  cin>>key;
	  for(int i =0;i<num-1;i++)
      {
          for(int j=i+1;j<num;j++)
          {
              if(abs(arr[i]-arr[j])== key)
                ctr++;
          }
      }
      cout<<ctr<<endl;
	}
}

