#include<stdio.h>
#include<string.h> 
int main(){
	struct Sinhvien{
		int age ;
		char name[1000] ;
		char phoneNumber[1000]; 
	}; 
	struct Sinhvien s01 ; 
	printf("Tuoi cua sinh vien la : ");
	scanf("%d",&s01.age); 
    fflush(stdin); 
	printf("Ho va ten cua sinh vien la : ");
	fgets(s01.name , 1000 , stdin); 
	printf("SDT cua sinh vien la : ");
	fgets(s01.phoneNumber , 1000 , stdin); 
	
	 
	return 0; 
} 
