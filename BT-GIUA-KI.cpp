#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
float sotienbandau, sotienkyvong, laisuat;
 int  sonamcanthiet;
  // for (int i=0; i<=sonamcanthiet; i++)
 {
cout<<"Nhap So Tien Ban Dau(tinh bang trieu):";
cin>>sotienbandau;
cout<<"Nhap Lai Suat(khong can nhap phan tram):";
cin>>laisuat;
cout<<"Nhap So Tien Ky Vong(tinh bang trieu):";
cin>>sotienkyvong;
cout<<"========================"<<endl;
// cout<<"So Tien Ban Dau = "<<sotienbandau<<endl;
// cout<<"Lai Suat = "<<laisuat<<"%"<<endl;
// cout<<"So Tien Ky Vong = "<<sotienkyvong<<endl;
cout<<"So Nam Can Thiet = "<<(log10(sotienkyvong/sotienbandau))/(log10(1+laisuat*1/100));
  };
 return 0;
}
