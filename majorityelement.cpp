#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int count =0;
int element;

for(int i=0;i<n;i++ ){
	if(count ==0){
		element = arr[i];
		count ++;
	}
	else if(arr[i]==element){
		count ++;
	}
	else {
		count --;
	}
}
int counter =0;
for(int i=0;i<n;i++){
	if(arr[i]==element){
		counter ++;
	}
}
if(counter>n/2)	{
	return element;
}
else{
	return -1;
}
	
	
}