#include<iostream>
using namespace std;


class dathuc {
private: 
	int a, b, c, d,x;
public:
 dathuc (int a,int b ,int c,int d,int x) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->x = x;
		cout<<"Bieu thuc: " << a << "x^3 + " << b << " x^2 + " << c << "x + "<<d << endl;
	}
	
	
	int tinh(int a, int b, int c, int d, int x) {
		int giatri = 0;
		giatri = a * pow(x,3) + b *pow(x,2) + c * x + d;
		return giatri;
	}

	~dathuc() {
		
	}

};
int main() {
	int a, b, c, d, h, k, m, n , x;
	cout << "Nhap x: "; cin >> x;
	cout<<"\nNhap hs da thuc 1: "; cin >> a >> b >> c >> d;
	dathuc s1(a, b, c, d,x);
	
	cout << "Nhap da thuc 2: "; cin >> h >> k >> m >> n;
	dathuc s2(h, k, m, n, x);

	cout <<endl <<"tong 2 da thuc la: " << s1.tinh(a, b, c, d, x) + s2.tinh(h, k, m, n, x) << endl;
	cout << "\nHieu 2 da thuc la: " << s1.tinh(a, b, c, d, x) - s2.tinh(h, k, m, n, x) << endl;
	
	system("pause");

	return 0;

}