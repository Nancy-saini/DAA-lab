/*week 2
find_indices
question 3
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
	    for(int i=0;i<num;++i)
		{
		    cin>>arr[i];
		}
		int j,key,comp=0,shifts=0;
	    for(int i =1;i<num; ++i)
        {
            key=arr[i];
            j=i-1;
            comp++;
            while(j>=0 && arr[j]>key)
            {
                if(arr[j]>key)
                    comp++;
                shifts++;
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }
        for(int i=0;i<num;++i)
            cout<<arr[i]<<" ";
        cout<<"\nComparisons = "<<shifts<<endl;
        cout<<"Shifts = "<<comp<<endl;
	}
	return 0;
}


