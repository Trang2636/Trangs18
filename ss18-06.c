#include<stdio.h> 
int main(){
	int i,find ; 
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
	printf("Moi ban nhap vao ID muon tim : ");
	scanf("%d",&find); 
	fflush(stdin); 
    for (i=0; i<5;i++){
    	if(sv01[i].id==find){
    		printf("Co ton tai trong danh sach\n  ");
		    printf("Moi ban nhap vao ten moi :");
			fgets(sv01[find-1].name,100,stdin);
			printf("Moi ban nhap vao tuoi moi :");
			scanf("%d",&sv01[find-1].age);
			fflush(stdin); 
		} 
	}
			if(sv01[i].id!=find){
			printf("Khong ton tai trong mang\n") ;
	} 
	for (i=0 ; i<5;i++){ 
		printf("ID : %d\n",sv01[i].id); 
      		printf("Ten : %s",sv01[i].name);
			printf("Tuoi : %d\n",sv01[i].age); 
			printf("SDT : %s\n",sv01[i].phoneNumber);  
			
		  }
	return 0; 
} 
