#include<iostream>
using namespace std;
void linearsearch(int arr[],int n, int key){
	int i;
	for(i=0;i<=n;i++){
	 if(arr[i]==key){	
     cout<<"Linear Search"<<endl;	 
	 cout<<"element "<<key <<" is found at position "<<i<<endl; 	
	}
}
	
}

void binarysearch(int arr[],int n, int key){
	int l=0;
	int h=n;
	while(l<h){
		int m=(l+h)/2;
		if (arr[m]==key){
			cout<<"Element" <<key<<" is found at position "<<m<<endl;
			break;
		}
		
		else if(key<arr[m]){
			h=m-1;
		}
		
		else if(key>arr[m]){
			l=m+1;
		}
		
		else 
		cout<<"Invalid";
	}
	
}

void bubblesort(int arr[],int n){
	int i,j,temp;
	for(i=0;i<=n;i++){
		for(j=i+1;j<=n;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
s
void printarray(int arr[],int n){
	int i;
	for(i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}	
	cout<<endl;
}
int main(){
	int arr[]={1,4,5,10,8,9,23,34,78,2,22};
	int n=10;
	int key=78;
//	linearsearch(arr,n,key);
//	binarysearch(arr,n,key);
printarray(arr,n);
bubblesort(arr,n);
printarray(arr,n);
return 0;
}
