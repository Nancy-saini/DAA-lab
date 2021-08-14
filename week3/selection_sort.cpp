/*week 3
selection sort
question 2
*/
#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,num;
	cin>>n;
	while(n--)
	{
	    cin>>num;
	    int arr[num];
	    for(int i=0;i<num;i++)
		{
		    cin>>arr[i];
		}
		int minIdx,comp=0,shifts=0;
	    for(int i =0;i<num-1;++i)
        {
            minIdx=i;
            for(int j=i+1;j<num;++j)
            {
                if(arr[j]<arr[minIdx])
                    minIdx=j;
                comp++;
            }
            int temp=arr[minIdx];
            arr[minIdx]=arr[i];
            arr[i]=temp;
            shifts++;
        }
        for(int i=0;i<num;++i)
            cout<<arr[i]<<" ";
        cout<<"\nComparisons = "<<comp<<endl;
        cout<<"Shifts = "<<shifts<<endl;
	}
	return 0;
}



