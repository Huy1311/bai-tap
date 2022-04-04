include<iostream>

using namespace std;
class khachhang {
private:
	char ht[30];
	struct ns {
		int ngay;
		int thang;
		int nam;
	};
	char cmt[10];
	char hk[50];
public:  
	
	friend void nhap1(khachhang::ns o[], int n) {
		for (int i = 0; i < n; i++) {
			cout << "Nhap thong tin khach hang thu " << i + 1 << endl;
			cout << "\nNhap ngay sinh: "; cin >> o[i].ngay;
			cout << "\nNhap thang sinh: "; cin >> o[i].thang;
			cout << "\nNhap nam sinh: "; cin >> o[i].nam;
		}
	}
   friend void nhap (khachhang kh[], int n) {
	   for (int i = 0; i < n; i++) {
		   cin.ignore();
		   cout << "Nhap ten: ";
		   cin.getline(kh[i].ht, 29);

		   cout << "\nNhap so cmt: ";
		   cin.getline(kh[i].cmt, 10);

		   cout << "\nNhap ho khau: ";
		   cin.getline(kh[i].hk, 50);
	   }

	}
	

	friend void xuat(khachhang kh[], int n) {
		for (int i = 0; i < n; i++) {
			cout << "Nhap thong tin khach hang thu " << i + 1 << endl;
			cout << "======Thong tin khach hang =====" << endl;
			cout << "|  Ngay thang nam sinh: " << o[i].ngay << "/" << o[i].thang << "/" << o[i].nam << endl;
			cout << "|  Ho va ten: " << kh[i].ht << endl;
			cout << "|  So cmt: " << kh[i].cmt << endl;
			cout << "| Ho khau: " << kh[i].hk << endl;
		}
	}
	friend void  HN(khachhang a[], int n) {
		for (int i = 0;i<n;i++){
			if (strcmp(a[i].hk, "Ha Noi") == 0) {
				cout << a[i].ht << endl;
				
			}
		}
	}
	
	
	
};
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	khachhang kh[100];
	nhap(kh,n);

	xuat(kh,n);
	
	cout << "Cac Khach hang tai Ha Noi: " << endl;
	HN(kh, n);

	system("pause");
	return 0;
}
