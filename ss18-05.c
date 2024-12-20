#include<stdio.h>
int main(){
	int i,j ; 
	struct SinhVien{
		int id ; 
		char name[100] ;
		int age;
		char phoneNumber[100] ; 
	}; 
	struct SinhVien sv01[50]={
		{1,"Thu Trang",18,"893758"},
		{2,"Trang Thu",19,"73566565"},
		{3,"Trang Trang",20,"64795879"},
		{4,"Trang",21,"98656779"},
		{5,"Kieu Trang",22,"7868765738"}
	};
	printf("ID : ");
	scanf("%d",&sv01[5].id) ;
	fflush(stdin);
	printf("Moi ban nhap vao ten svien cuoi cung:");
	fgets(sv01[5].name ,100,stdin );
	printf("\nTuoi : ");
	scanf("%d",&sv01[5].age) ;
	fflush(stdin);
	printf("Nhap vao SDT:");
	fgets(sv01[5].phoneNumber,100,stdin); 
	for (i=0 ; i<6;i++ ){ 
		printf("ID : %d\n",sv01[i].id); 
      		printf("Ten : %s",sv01[i].name);
			printf("Tuoi : %d\n",sv01[i].age); 
			printf("SDT : %s\n",sv01[i].phoneNumber);  
			
		  }
      
	return 0; 
} 
