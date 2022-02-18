#include<iostream>
#include <set>

using namespace std;

int count(int arr[],int n)
{
	int num = 1;

	for(int i = 1;i < n ;i++){
		int j=0;
		for (j = 0;j < i; j++)	
		{
			if(arr[i] == arr[j])
				break;
		}
		if(i ==j)
		num++;
		
	}
	return num;
}

int main(){	
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	
	cout << "There are " << count(data,sizeof(data)/sizeof(int)); 
	cout << " different numbers in data.";
	
	return 0;
}
