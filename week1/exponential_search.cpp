/*week 1
exponential search
question 3
*/
#include<iostream>

using namespace std;
int comp=0;
int expo_search(int [],int,int);
int binary_search(int [],int,int,int);

int main()
{
	int n,num,key;
	cin>>n;
	while(n!=0)
	{
	    cin>>num;
	    int arr[num];
	    for(int i=0;i<num;i++)
			cin>>arr[i];
	    cin>>key;
		int left=0,right=num-1;
		int pos=expo_search(arr,num,key);
		if(pos==-1)
        {
           cout<<"Not Present "<<comp<<endl;
           comp=0;
        }
        else
         {
           cout<<"Present "<<comp<<endl;
           comp=0;
         }
	}
	return 0;
}

int expo_search(int arr[],int num,int key)
{
        if (arr[0]== key)
        {
            comp=comp+1;
            return 0;
        }
        else
            comp=comp+1;
        int i=1;
        while(i<num && arr[i]<=key)
        {
            comp=comp+1;
            i=i*2;
        }
        return binary_search(arr,i/2,min(i,num-1),key);
}
int binary_search(int arr[],int left,int right,int key)
{
    if(left<=right)
    {
        int mid=(left+right)/2;
        if(arr[mid]== key)
        {
            comp=comp+1;
            return mid;
        }
        else if(arr[mid]<key)
        {
            comp=comp+1;
            return binary_search(arr,mid+1,right,key);
        }
        else
        {
            comp=comp+1;
            return binary_search(arr,left,mid-1,key);
        }
    }
    else
        return -1;
}

