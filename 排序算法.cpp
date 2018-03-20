#include<iostream>
#include<cmath>
using namespace std;
//√∞≈›≈≈–Ú 
int  Bubble_Sort(int a[]){
	int temp;
	for(int i =0;i<9;i++){
		for(int j = 9;j>i;j--){
			if(a[j]<a[j-1]){
				temp = a[j-1];
				a[j-1] = a[j];
				a[j] = temp;  
			}
		}
		
	}
	
} 
//≤Â»Î≈≈–Ú 
int Insert_Sort(int a[]){
	int temp;
	for(int i = 0;i<9;i++){
		for(int j = i + 1;j>0;j--){
			if(a[j]<a[j-1]){
				temp = a[j-1];
				a[j-1] = a[j];
				a[j] = temp;  
			}
		} 
	} 
}
int Select_Sort(int a[]){
	int temp;
	for(int i = 0;i<9;i++){
		int min = i;
		for(int j = 9-i;j>0;j--){
			if(a[j]<a[i]){
				min = j;
			}
		}
		if(min!=i){
				temp = a[i];
				a[i] = a[min];
				a[min] = temp;  
			}
	}
	
}  
int main(){
	int a[10] = {1,23,12,6,8,7,3,45,15};
	Bubble_Sort(a);
	int b[10] = {1,23,12,6,8,7,3,45,15};
	Insert_Sort(b);
	int c[10] = {1,23,12,6,8,7,3,45,15};
	Insert_Sort(c);
	for(int i = 0;i<9;i++){
		cout<<a[i]<<"   ";
	}
	cout<<endl;
	for(int i = 0;i<9;i++){
		cout<<b[i]<<"   ";
	}
	cout<<endl;
	for(int i = 0;i<9;i++){
		cout<<c[i]<<"   ";
	}
	
} 
