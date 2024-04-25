#pragma once
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

class DiemHocVien
{
private:
	string hoTen;
	int namSinh;
	float diemMon1, diemMon2, diemMon3;
public:
	DiemHocVien();
	DiemHocVien(string hoTen, int namSinh, float diemMon1, float diemMon2, float diemMon3);
	~DiemHocVien();

	string getHoTen() const;
	int getNamSinh() const ;
	float getDiemMon1() const;
	float getDiemMon2() const;
	float getDiemMon3() const;

	void setHoTen(string hoTen);
	void setNamSinh(int namSinh);
	void setDiemMon1(float diemMon1);
	void setDiemMon2(float diemMon2);
	void setDiemMon3(float diemMon3);

	bool lamLuanVan() const;
	bool thiTotNghiep() const;
	bool thiLai() const;

	friend ostream& operator << (ostream& out,const DiemHocVien& hocVien);
};
