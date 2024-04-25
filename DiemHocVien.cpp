#include "DiemHocVien.h"

DiemHocVien::DiemHocVien()
{
	string hoTen = "";
	int namSinh = 0;
	float diemMon1 = diemMon2 = diemMon3 = 0.0;
}

DiemHocVien::DiemHocVien(string hoTen, int namSinh, float diemMon1, float diemMon2, float diemMon3)
{
	this->hoTen = hoTen;
	this->namSinh = namSinh;
	this->diemMon1 = diemMon1;
	this->diemMon2 = diemMon2;
	this->diemMon3 = diemMon3;
}

DiemHocVien::~DiemHocVien()
{

}

string DiemHocVien::getHoTen() const
{
	return hoTen;
}

int DiemHocVien::getNamSinh() const
{
	return namSinh;
}

float DiemHocVien::getDiemMon1() const
{
	return diemMon1;
}

float DiemHocVien::getDiemMon2() const
{
	return diemMon2;
}

float DiemHocVien::getDiemMon3() const
{
	return diemMon3;
}

void DiemHocVien::setHoTen(string hoTen)
{
	this->hoTen = hoTen;
}

void DiemHocVien::setNamSinh(int namSinh)
{
	this->namSinh = namSinh;
}

void DiemHocVien::setDiemMon1(float diemMon1)
{
	this->diemMon1 = diemMon1;
}

void DiemHocVien::setDiemMon2(float diemMon2)
{
	this->diemMon2 = diemMon2;
}

void DiemHocVien::setDiemMon3(float diemMon3)
{
	this->diemMon3 = diemMon3;
}

bool DiemHocVien::lamLuanVan() const
{
	float diemTrungBinh = (diemMon1 + diemMon2 + diemMon3) / 3;
	return diemTrungBinh > 7 && diemMon1 >= 5 && diemMon2 >= 5 && diemMon3 >= 5;
}

bool DiemHocVien::thiTotNghiep() const
{
	float diemTrungBinh = (diemMon1 + diemMon2 + diemMon3) / 3;
	return diemTrungBinh <= 7 && diemMon1 >= 5 && diemMon2 >= 5 && diemMon3 >= 5;
}

bool DiemHocVien::thiLai() const 
{
	return diemMon1 < 5 || diemMon2 < 5 || diemMon3 < 5;
}

ostream& operator<<(ostream& out, const DiemHocVien& hocVien)
{
	out << setw(30) << left << hocVien.hoTen << "\t";
	out << setw(8) << left << hocVien.namSinh << "\t";
	out << setw(10) << left << hocVien.diemMon1 << "\t";
	out << setw(10) << left << hocVien.diemMon2 << "\t";
	out << setw(10) << left << hocVien.diemMon3 << "\t";
	
	return out;
}
