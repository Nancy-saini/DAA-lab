/*week 1
jump search
question 3
*/
#include<iostream>
#include<math.h>

using namespace std;
int comp=0;
int jump_search(int [],int,int);
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
		int pos=jump_search(arr,num,key);
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

int jump_search(int arr[],int num,int key)
{
        int step=sqrt(num);
        int prev=0;
        while (arr[min(step,num)-1]<key)
        {
            comp=comp+1;
            prev=step;
            step+=sqrt(num);
            if(prev >= num)
                return -1;
        }
        while(arr[prev]<key)
        {
            comp=comp+1;
            prev++;
            if(prev==min(step,num))
                return -1;
        }
        if(arr[prev]==key)
        {
            comp=comp+1;
            return prev;
        }
        else
            return -1;
}

