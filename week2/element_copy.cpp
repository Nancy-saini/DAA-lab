/*week 2
copies_of_element
question 1
*/
#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,num,item;
	cin>>n;
	while(n--)
	{
	    cin>>num;
	    int arr[num];
	    unordered_map<int,int> mp;
	    for(int i=0;i<num;i++)
		{
		    cin>>arr[i];
		    mp[arr[i]]++;
		}
	    cin>>item;
	    bool flag=false;
		for(int i=0;i<num;i++)
		{
			if(arr[i]==item)
            {
                cout<<item<<"-"<<mp[arr[i]];
                flag=true;
                break;
            }
		}
		if(!flag)
			cout<<"Not Present"<<endl;
	}
}
