#include<iostream>
#include<stdio.h>
/*
	Bài 23(lthdtbai23.cpp): Nh?p vào m?t danh sách n m?t hàng; m?i m?t hàng có tên hàng, s? lu?ng, don giá.
Tính t?ng ti?n c?a n m?t hàng.
*/

using namespace std;

//Khai bao lop doi tuong
class matHang
{
	private:
		char tenhang[31];
		int soluong;
		float dongia;
	
	public:
		void nhap();
		void hien();
		float tinhTien();
};
int main()
{
	int n;
	//char tenhang[31];
	float tien=0;
	
	matHang MH;
	//dua ra tieu de chuong trinh
	cout<<"Chuong trinh tinh tong cac mat hang. \n";
	

	cout<<"Nhap n mat hang:";
	cin>>n;
	
	for(int i=0;i<n;i++){
		MH.nhap();
		MH.hien();
		
		//tinh tong mat hang
		tien += MH.tinhTien();
		
	}
/*		
	for(int i=0;i<n;i++){
		MH.hien();
	}
		*/
	printf("\nTong tien la: %.1f",tien);
	
	cout<<endl;
	return 0;	
}
//dinh nghia ham
void matHang::nhap()
{
	printf("\nTen mat hang:");
	scanf("%s",&tenhang);
	printf("So luong:");
	scanf("%d",&soluong);
	printf("Don gia:");
	scanf("%f",&dongia);
	
}

void matHang::hien()
{
	//cout<<"\nMat hang co:";
	printf("\n Ten mat hang: %s",tenhang);
	printf("\n So luong: %d",soluong);
	printf("\n Don gia: %.1f",dongia);
}

float matHang::tinhTien()
{	
	return  soluong * dongia; 
}
	
	