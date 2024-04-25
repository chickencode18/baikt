#include "Test.h"
#include <iostream>

void Test::menu()
{
	vector<DiemHocVien> danhSach = taoDanhSachHocVien();
	int chon;
	do
	{
		
		cout << "================= MENU ==================" << endl;
		cout << "* 1. Hien thi danh sach hoc vien        *" << endl;
		cout << "* 2. Thong ke                           *" << endl;
		cout << "* 3. Tao hoc vien moi                   *" << endl;
		cout << "* 0. Thoat chuong trinh                 *" << endl;
		cout << "=========================================" << endl;
		cin >> chon;
		switch (chon)
		{
		case 1:
			hienThiDanhSach(danhSach);
			break;
		case 2:
			thongKe(danhSach);
			break;
		case 3:
			danhSach.push_back(taoDiemHocVienMoi());
			break;
		case 0:
			break;
		}
	}while (chon != 0);
}

vector<DiemHocVien> Test::taoDanhSachHocVien()
{
	vector<DiemHocVien> danhSach;
	danhSach.push_back(DiemHocVien("Nguyen Van A", 2005, 8.0, 7.5, 6.8));
	danhSach.push_back(DiemHocVien("Nguyen Van B", 2005, 6.0, 7.0, 7.2));
	danhSach.push_back(DiemHocVien("Nguyen Van C", 2004, 5.5, 4.9, 6.3));
	danhSach.push_back(DiemHocVien("Nguyen Van D", 2005, 9.0, 8.5, 7.5));
	danhSach.push_back(DiemHocVien("Hoang Van E", 2005, 7.0, 6.8, 5.0));
	danhSach.push_back(DiemHocVien("Pham Thi F", 2005, 6.2, 5.7, 5.8));
	return danhSach;
}

void Test::hienThiDanhSach(const vector<DiemHocVien>& danhSach)
{
	cout << setw(30) << left << "Ho va ten" << "\t"
		<< setw(8) << left << "Nam Sinh" << "\t"
		<< setw(10) << left << "Diem Mon 1" << "\t"
		<< setw(10) << left << "Diem Mon 2" << "\t"
		<< setw(10) << left << "Diem Mon 3" << "\t";
	cout << endl;
	for (const DiemHocVien& hv : danhSach)
	{
		cout << hv << endl;
	}
}

void Test::thongKe(const vector<DiemHocVien>& danhSach)
{
	int luotLamLuanVan = 0;
	int luotThiTotNghiep = 0;
	int luotThiLai = 0;

	for (const DiemHocVien& hv : danhSach) {
		if (hv.lamLuanVan()) {
			luotLamLuanVan++;
		}
		else if (hv.thiTotNghiep()) {
			luotThiTotNghiep++;
		}
		else if (hv.thiLai()) {
			luotThiLai++;
		}
	}

	cout << "Thong ke:" << std::endl;
	cout << "So luong hoc vien lam luan van tot nghiep: " << luotLamLuanVan << endl;
	cout << "So luong hoc vien thi tot nghiep: " << luotThiTotNghiep << endl;
	cout << "So luong hoc vien phai thi lai: " << luotThiLai << endl;
}

DiemHocVien Test::taoDiemHocVienMoi() {
	string hoTen;
	int namSinh;
	float diemMon1, diemMon2, diemMon3;

	cout << "Nhap ho ten hoc vien: ";
	cin.ignore();
	getline(cin, hoTen);

	cout << "Nhap nam sinh: ";
	cin >> namSinh;

	cout << "Nhap diem Mon 1: ";
	cin >> diemMon1;

	cout << "Nhap diem Mon 2: ";
	cin >> diemMon2;

	cout << "Nhap diem Mon 3: ";
	cin >> diemMon3;

	return DiemHocVien(hoTen, namSinh, diemMon1, diemMon2, diemMon3);
}