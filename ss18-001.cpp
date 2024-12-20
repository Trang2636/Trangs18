#include<stdio.h>
#include<string.h> 
int main(){
	struct Sinhvien{
		int age ;
		char name[1000] ;
		char phoneNumber[1000]; 
	}; 
	struct Sinhvien s01 ; 
	s01.age = 20; 
	printf("%d",s01.age); 
	strcpy(s01.name , "Thu Trang ne");
	printf("\n%s",s01.name);
	strcpy(s01.phoneNumber , "0238585");
	printf("\n%s",s01.phoneNumber);
	
	return 0; 
} 
