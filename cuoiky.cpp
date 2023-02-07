#include<iostream> 
using namespace std;
int Kt_So(char c) //Kí tu doi sang so
{ return c-'A'; }
char So_Kt(int n) //So sang ky tu
{ return 'A' +n; }
int main()
{
string P, C; int a=0,b;
cout<<"Nhap chuoi: ";getline(cin,P); C=P;
cout<<"Nhap a = "; cin>>a;
cout<<"Nhap b = "; cin>>b;

//Mã hóa
for(int i = 0; i<P.size(); i++)
{
	int m; m = Kt_So(P[i]);
	m = (m/a + b) % 26;
	C[i] = So_Kt(m);
}
cout<<"Chuoi ma hoa: "<<C;
//giai ma
for(int i = 0; i<C.size(); i++)
{
int m; m = Kt_So(C[i]);
m = (m * a - b +26 ) % 26;
P[i] = So_Kt(m);
}
cout<<endl<<"Chuoi giai ma: "<<P;
}
