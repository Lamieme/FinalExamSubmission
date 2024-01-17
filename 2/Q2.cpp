#include <iostream>

using namespace std;

class Vemaymay {
public:
    string tenchuyen;
    string ngaybay;
    string giave;

    Vemaybay() {
        this -> tenchuyen = "";
        this -> ngaybay = "";
        this -> giave = "";
    }
    ~Vemaymay();

    Vemaybay(string tenchuyen, string ngaybay, int glave) {
    this->tenchuyen = tenchuyen;
    this->ngaybay = ngaybay;
    this->giave = glave;
  }

  void Nhap() {
    cout << "Nhap ten chuyen bay: ";
    cin >> tenchuyen;
    cout << "Nhap ngay bay: ";
    cin >> ngaybay;
    cout << "Nhap gia ve: ";
    cin >> giave;
  }

  void Xuat() {
    cout << "Ten chuyen bay: " << tenchuyen << endl;
    cout << "Ngay bay: " << ngaybay << endl;
    cout << "Gia ve: " << giave << endl;
  }
};

class Nguoi {
public:
    string hoten;
    string gioitinh;
    string tuoi;

    Nguoi() {
    this -> hoten = "";
    this -> gioitinh = "";
    this -> tuoi = "";
    }
    ~Nguoi();

    Nguoi(string hoten) {
        this -> hoten = hoten;
    }

    Nguoi(string hoten, string gioitinh, int tuoi) {
    this->hoten = hoten;
    this->gioitinh = gioitinh;
    this->tuoi = tuoi;
  }

  void Nhap() {
    cout << "Nhap ho ten: ";
    cin >> hoten;
    cout << "Nhap gioi tinh: ";
    cin >> gioitinh;
    cout << "Nhap tuoi: ";
    cin >> tuoi;
  }

  void Xuat() {
    cout << "Ho ten: " << hoten << endl;
    cout << "Gioi tinh: " << gioitinh << endl;
    cout << "Tuoi: " << tuoi << endl;
  }

};

class hanhkhach : public Nguoi {
public:
  Vemaybay ve;
  int soluong;

  Hanhkhach(Vemaybay ve, int soluong) {
    this->ve = ve;
    this->soluong = soluong;
  }

  void Nhap() {
    Nguoi::Nhap();
    ve.Nhap();
    cout << "Nhap so luong ve: ";
    cin >> soluong;
  }

  void Xuat() {
    Nguoi::Xuat();
    ve.Xuat();
    cout << "So luong ve: " << soluong << endl;
  }

  int tongtien() {
    return soluong * ve.giave;
  }
};

int main() {
    Vemaymay ve;
    ve.Nhap;
    Nguoi nguoi;
    nguoi.Nhap;
    hanhkhach hk;
    hk.Nhap;
    hk.Xuat;
    return 0;
}
