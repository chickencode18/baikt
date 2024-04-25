#ifndef TEST_H
#define TEST_H

#include "DiemHocVien.h"

class Test : public DiemHocVien {
public:
    static void menu();
    static vector<DiemHocVien> taoDanhSachHocVien();
    static void hienThiDanhSach(const vector<DiemHocVien>& danhSach);
    static void thongKe(const vector<DiemHocVien>& danhSach);
    static DiemHocVien taoDiemHocVienMoi();
};
#endif