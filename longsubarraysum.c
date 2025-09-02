#include<stdio.h>
int longestSubArraySum(int arr[],int n,int k)
{
	int start=0,sum=0,maxlen=0;
	for(int end=0;end<n;end++)
	{
		sum+=arr[end];
		while(sum>k&&start<=end)
		{
			sum-=arr[start];
			start++;
		}
		if(sum==k)
		{
			int len=end-start+1;
			if(len>maxlen)
			maxlen=len;
		}
	}
	return maxlen;
	
}
int main()
{
	int arr[]={4,1,1,1,2,3,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=5;
	printf("Lenght of the longest subarray is=%d",longestSubArraySum(arr,n,k));
	return 0;
}