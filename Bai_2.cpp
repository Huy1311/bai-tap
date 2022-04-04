#include<iostream>
#include<iomanip>
using namespace std;

class giaovien {
private:
	char ht[30];
	char cn[20];
	char bc[15];
	int tuoi;
	float bl;
	float  lcb;
	int bac;

public:
	friend istream& operator >>(istream& nhap, giaovien& a) {
		nhap.ignore();
		cout << "Nhap ho ten: "; nhap.getline(a.ht, 30);
		cout << "\nNhap chuyen nganh: "; nhap.getline(a.cn, 20);
		cout << "\nNhap bang cap: "; nhap.getline(a.bc, 15);
		cout << "\nNhap bac luong: "; nhap >> a.bl;
		cout << "\nNhap tuoi: "; nhap >> a.tuoi;

		//	a.lcb = a.bl * 610;
		return nhap;
	}

	void tt() {


		lcb = bl * 610;

		cout << lcb << endl;
	}
	friend ostream& operator<<(ostream& xuat, giaovien a) {
		xuat << "- Ho ten: " << a.ht << endl;
		xuat << "-Chuyen nganh: " << a.cn << endl;
		xuat << "-Bang cap: " << a.bc << endl;
		xuat << "-Bac luong: " << a.bl << endl;
		xuat << "-Luong co ban: " << a.lcb << endl;

		return xuat;
	}





	

		
	friend void xuat(giaovien a[],int n) {
		for (int i = 0; i < n; i++) {
			cout << "- Ho ten: " << a[i].ht << endl
				<< "Tuoi: " << a[i].tuoi << endl
				<< "-Bang cap: " << a[i].bc << endl
				<< "-Bac luong: " << a[i].bl << endl
				<< "-Luong co ban: " << a[i].lcb << endl;
		}

	}



};


int main() {
	int n;
	cout << "Nhap so luong giao vien: "; cin >> n;
	giaovien a[100];



	for (int i = 0; i < n; i++) {


		cin >> a[i];
		cout << "\nLuong co ban: "; a[i].tt();

	}
	cout << "\n========XUAT THONG TIN===========" << endl;
	for (int i = 0; i < n; i++) {
		cout << "\n thong tin giao vien thu " << i + 1 << endl;
		cout << a[i];

	}
	cout << "\n========Sap xep =====" << endl;
//Phan sap xep em chua lam duoc  =(( , toan bug thoi a!




/*for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i].lcb > a[j].lcb) {
				giaovien tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
}
for (int i = 0; i < n; i++) {
	cout << a[i];
}*/
	

	system("pause");
	return 0;
}