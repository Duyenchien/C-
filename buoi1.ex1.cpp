// Viet ham tinh tong cac phan tu la boi cua 3 hoac 5 trong mang cac so nguyen.

#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Nhap N: "; cin>>n;
	int tong;
	for(int i=0; i<n; i++){
		if(i%3==0 || i%5==0)
			tong = tong + i;
			}
	cout<<"\nTong cac phan tu la boi cua 3 hoac 5 co trong mang la: "<< tong;
}
