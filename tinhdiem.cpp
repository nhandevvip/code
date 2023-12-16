#include <iostream>
using namespace std;
int main(){
	int age;
	int a[7];
	float sum,phantram = 0;
	char name[10],classes[10],subject[10];
	cout<<"Name: ";
	cin>>name;
	cout<<"Age: ";
	cin>>age;
	cout<<"Class: ";
	cin>>classes;
	cout<<"Subject: ";
	cin>>subject;
	cout<<"Nhap diem theo thu tu (attend,participant,homework,practise,mid,final): "<<endl;
	for (int i =0;i<=5;i++){
		cin>>a[i];
	}
	sum = a[0]*0.05+a[1]*0.05+a[2]*0.05+a[3]*0.15+a[4]*0.15+a[5]*0.55;
	phantram = sum*10;
	if(phantram>=40){
		cout<<"Name: "<<name<<"  "<<"Age: "<<age<<"  "<<"Class: "<<classes<<"  "<<"Subject: "<<subject<<" Check: "<<phantram<<"%"<<" (Pass)"<<endl;
	}
	else{
		cout<<"Name: "<<name<<"  "<<"Age: "<<age<<"  "<<"Class: "<<classes<<"  "<<"Subject: "<<subject<<" Check: "<<phantram<<"%"<<" (False)"<<endl;
	}
	if(sum>=9.5&&sum<=10){
		cout<<"Xep loai: Gioi, Diem chu: A+, Thang diem 4: 4.0";
	}
	else if(sum>=8.5&&sum<=9.4){
		cout<<"Xep loai: Gioi, Diem chu: A, Thang diem 4: 4.0";
	}
	else if(sum>=8.0&&sum<=8.4){
		cout<<"Xep loai: Kha, Diem chu: A-, Thang diem 4: 3.65";
	}
	else if(sum>=7.5&&sum<=7.9){
		cout<<"Xep loai: Kha, Diem chu: B+, Thang diem 4: 3.33";
	}
	else if(sum>=7.0&&sum<=7.4){
		cout<<"Xep loai: Kha, Diem chu: B, Thang diem 4: 3.00";
	}
	else if(sum>=6.5&&sum<=6.9){
		cout<<"Xep loai: Trung binh, Diem chu: B-, Thang diem 4: 2.65";
	}
	else if(sum>=6.0&&sum<=6.4){
		cout<<"Xep loai: Trung binh, Diem chu: C+, Thang diem 4: 2.33";
	}
	else if(sum>=5.5&&sum<=5.9){
		cout<<"Xep loai: Trung binh, Diem chu: C, Thang diem 4: 2.0";
	}
	else if(sum>=4.5&&sum<=5.4){
		cout<<"Xep loai: Trung binh yeu, Diem chu: C-, Thang diem 4: 1.65";
	}
	else if(sum>=4.0&&sum<=4.4){
		cout<<"Xep loai: Trung binh yeu, Diem chu: D, Thang diem 4: 1.00";
	}
	else{
		cout<<"Xep loai: Kem, Diem chu: F, Thang diem 4: 0.0";
	}
	return 0;
}



//#include <iostream>
//using namespace std;
//int main(){
//	int age;
//	int a1,a2,a3,a4,a5,a6;
//	float sum = 0;
//	char name[10],classes[10],subject[10];
//	cout<<"Name: ";
//	cin>>name;
//	cout<<"Age: ";
//	cin>>age;
//	cout<<"Class: ";
//	cin>>classes;
//	cout<<"Subject: ";
//	cin>>subject;
//	cout<<"Nhap diem theo thu tu (attend,participant,homework,practise,mid,final): ";
//	cin>>a1>>a2>>a3>>a4>>a5>>a6;
//	sum = (a1*0.05+a2*0.05+a3*0.05+a4*0.15+a5*0.15+a6*0.55)*10;
//	if(sum>=40){
//		cout<<"Name: "<<name<<"  "<<"Age"<<age<<"  "<<"Class: "<<classes<<"  "<<"Subject: "<<subject<<" Check: "<<sum<<"%"<<" (Pass)";
//	}
//	else{
//		cout<<"Name: "<<name<<"  "<<"Age"<<age<<"  "<<"Class: "<<classes<<"  "<<"Subject: "<<subject<<" Check: "<<sum<<"%"<<" (False)";
//	}
//	return 0;
//}

