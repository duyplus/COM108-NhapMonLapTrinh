#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void ktsn();
void ucln_bcln();
void karaoke();
void tiendien();
void doitien();
void vaynganhang();
void vaytienmuaxe();
void sapxepsinhvien();
void gamelott();
void phanso();

//CHUC NANG 1
void ktsn() {
    printf("\nBan da chon Chuc nang so 1\n");
    int x, i, count = 0;
    printf("Nhap x: ");
    scanf("%d", & x);
    if (x == (int) x) {
        printf("\n%d la so nguyen", x);
        for (i = 2; i < x; i++) {
            if (x % i == 0) {
                count++;
            }
        }
        if (count == 0) {
            printf("\n%d la so nguyen to", x);
        } else {
            printf("\n%d khong phai so nguyen to", x);
        }
        for (i = 1; i < x; i++) {
            if (i * i == x) {
                printf("\n%d la so chinh phuong", x);
                break;
            }
        }
    }
}

//CHUC NANG 2
int ucln(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return ucln(b, a % b);
    }
}
int bcln(int a, int b) {
    return (a * b) / ucln(a, b);
}
void ucln_bcln() {
    printf("\nBan da chon Chuc nang so 2\n");
    int a, b;
    printf("\nNhap a va b: ");
    scanf("%d%d", & a, & b);
    printf("UCLN cua %d va %d la %d", a, b, ucln(a, b));
    printf("\nBCLN cua %d va %d la %d", a, b, bcln(a, b));
}

//CHUC NANG 3
void karaoke() {
    printf("\nBan da chon Chuc nang so 3\n");
    int bd, kt, time, addt;
    float pay, addm;
    printf("\nNhap gio bat dau: ");
    scanf("%d", & bd);
    printf("Nhap gio ket thuc: ");
    scanf("%d", & kt);
    time = kt - bd;
    if (time <= 3) {
        pay = time * 150000;
    } else {
        addt = time - 3;
        addm = addt * 150000 * 0.7;
        pay = 3 * 150000 + addm;
    }
    if (bd >= 14 && bd <= 17) {
        pay = pay * 0.9;
    }
    printf("Tong so tien can thanh toan la: %.2f", pay);
}

//CHUC NANG 4
void tiendien() {
    printf("\nBan da chon Chuc nang so 4\n");
    float sd, sotien;
    float b1 = 1.678, b2 = 1.734, b3 = 2.014, b4 = 2.536, b5 = 2.834, b6 = 2.927;
    printf("\nNhap so dien (kWh): ");
    scanf("%f", & sd);
    if (sd <= 50) {
        sotien = sd * b1;
    } else if (sd <= 100) {
        sotien = 50 * b1 + (sd - 50) * b2;
    } else if (sd <= 200) {
        sotien = 50 * b1 + 50 * b2 + (sd - 100) * b3;
    } else if (sd <= 300) {
        sotien = 50 * b1 + 50 * b2 + 100 * b3 + (sd - 200) * b4;
    } else if (sd <= 400) {
        sotien = 50 * b1 + 50 * b2 + 100 * b3 + 100 * b4 + (sd - 300) * b5;
    } else {
        sotien = 50 * b1 + 50 * b2 + 100 * b3 + 100 * b4 + 100 * b5 + (sd - 400) * b6;
    }
    printf("\nSo tien can phai tra la: %.3f VND", sotien);
}

//CHUC NANG 5
#define MAX 12
void doitien() {
    printf("\nBan da chon Chuc nang so 5\n");
    int loaitien[MAX] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int sotien, soluong;
    printf("\nNhap menh gia tien can doi: ");
    scanf("%d", & sotien);
    for (int i = 0; i < MAX; i++) {
        soluong = sotien / loaitien[i];
        sotien = sotien % loaitien[i];
        printf("\nCo %d to tien %d dong", soluong, loaitien[i]);
    }
}

//CHUC NANG 6
void vaynganhang() {
    printf("\nBan da chon Chuc nang so 6\n");
    int i;
    int kyHan = 12;
    float sotien, laiSuat, tong = 0.0; // Initialize tong
    printf("\nBan muon vay bao nhieu: ");
    scanf("%f", & sotien);
    laiSuat = 0.05;

    float gocHangThang = sotien / kyHan;
    printf("\nSo tien can tra hang thang: %.2f", gocHangThang); // Added format specifier
    printf("\nKy han\tLai phai tra\tGoc phai tra\tTien phai tra\tTien con lai");
    for (i = 1; i <= kyHan; i++) { // Corrected variable name
        float laiHangThang = sotien * laiSuat;
        float tienHangThang = laiHangThang + gocHangThang;
        sotien = sotien - gocHangThang;
        tong += tienHangThang;
        printf("\n %d\t%.0f\t\t%.0f\t\t%.0f\t\t%.0f\n", i, laiHangThang, gocHangThang, tienHangThang, sotien);
    }
    printf("\nTong tien tra sau 12 thang la: %.0f VND", tong);
}

//CHUC NANG 7
void vaytienmuaxe() {
    printf("\nBan da chon Chuc nang so 7\n");
    float phanTramVay;
    printf("Nhap phan tram vay (0 -> 1): ");
    scanf("%f", & phanTramVay);

    double phanTramTraTruoc = 1.0 - phanTramVay;
    double sotien = 500000000;
    double laiSuat = 0.072 / 24;
    int kyHan = 24;

    double tienTraTruoc = sotien * phanTramTraTruoc;
    sotien = sotien - tienTraTruoc;
    double gocHangThang = sotien / kyHan;

    printf("\nSo tien tra truoc la: %.0lf VND\n", tienTraTruoc);
    printf("\nSo tien phai tra hang thang:");
    printf("\nKy han\tLai phai tra\tGoc phan tra\tSo tien phai tra\tSo tien con lai");
    for (int i = 1; i <= kyHan; i++) { // Changed 'thoiHan' to 'kyHan'
        double traLai = sotien * laiSuat;
        double tienHangThang = traLai + gocHangThang;
        sotien = sotien - gocHangThang;
        printf("\n  %d\t%.0lf\t\t%.0lf\t%.0lf\t\t%.0lf\n", i, traLai, gocHangThang, tienHangThang, sotien);
    }
}

//CHUC NANG 8
struct SienVien {
    char hoten[50];
    float tb;
};
void sapxepsinhvien() {
    printf("\nBan da chon Chuc nang so 8\n");
    int n;
    float temp;
    char name[50];
    printf("\nNhap n: ");
    scanf("%d", & n);
    struct SienVien dsSv[n];
    for (int i = 0; i < n; i++) {
        printf("\nNhap Ho Ten sv thu %d la: ", i);
        fflush(stdin);
        gets(dsSv[i].hoten);
        printf("\nNhap Diem TB sv thu %d la: ", i);
        scanf("%f", & dsSv[i].tb);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dsSv[i].tb > dsSv[j].tb) {
                //Hoan vi vi tri
                temp = dsSv[i].tb;
                dsSv[i].tb = dsSv[j].tb;
                dsSv[j].tb = temp;
                strcpy(name, dsSv[i].hoten);
                strcpy(dsSv[i].hoten, dsSv[j].hoten);
                strcpy(dsSv[j].hoten, name);
            }
        }
    }
    printf("\nDANH SACH SINH VIEN!");
    for (int i = 0; i < n; i++) {
        printf("\nHo Ten: %s", dsSv[i].hoten);
        printf("\nDiem TB: %.1f", dsSv[i].tb);
        if (dsSv[i].tb >= 9) {
            printf("\nHoc luc Xuat sac\n");
        } else if (dsSv[i].tb >= 8) {
            printf("\nHoc luc Gioi\n");
        } else if (dsSv[i].tb >= 6.5) {
            printf("\nHoc luc Kha\n");
        } else if (dsSv[i].tb >= 5) {
            printf("\nHoc luc Trung Binh\n");
        } else {
            printf("\nHoc luc Yeu\n");
        }
    }
}

//CHUC NANG 9
void gamelott() {
    printf("\nBan da chon Chuc nang so 9\n");
    int i, so1, so2, count = 0;
    int kq, ketqua[2];
    printf("Nhap so 1: ");
    scanf("%d", & so1);
    printf("Nhap so 2: ");
    scanf("%d", & so2);
    srand(time(0));
    for (i = 0; i < 2; i++) {
        kq = 1 + rand() % 15;
        ketqua[i] = kq;
    }
    for (i = 0; i < 2; i++) {
        if (so1 == ketqua[i]) {
            count++;
        }
        if (so2 == ketqua[i]) {
            count++;
        }
    }
    printf("\nKet qua so xo hom nay la!");
    printf("\nSo 1 = %d", ketqua[0]);
    printf("\nSo 2 = %d", ketqua[1]);
    if (count == 2) {
        printf("\nChuc mung ban da trung giai dac biet!");
        printf("\nGia tri giai thuong: 65 ti VND");
    } else if (count == 1) {
        printf("\nChuc mung ban da trung giai nhat!");
        printf("\nGia tri giai thuong: 500 trieu VND");
    } else {
        printf("\nCHUC BAN MAY MAN LAN SAU!");
    }
}

//CHUC NANG 10
struct PhanSo {
    int tu;
    int mau;
};
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

void phanso() {
    printf("\nBan da chon Chuc nang so 10\n");
    struct PhanSo ps1, ps2, tong, hieu, tich, thuong;
    printf("Nhap phan so thu 1 (tu mau): ");
    scanf("%d %d", & ps1.tu, & ps1.mau);
    printf("Nhap phan so thu 2 (tu mau): ");
    scanf("%d %d", & ps2.tu, & ps2.mau);

    // tinh Tong
    tong.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
    tong.mau = ps1.mau * ps2.mau;
    // tinh Hieu
    hieu.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
    hieu.mau = ps1.mau * ps2.mau;
    // tinh Tich
    tich.tu = ps1.tu * ps2.tu;
    tich.mau = ps1.mau * ps2.mau;
    // tinh Thuong
    if (ps2.tu != 0) {
        thuong.tu = ps1.tu * ps2.mau;
        thuong.mau = ps1.mau * ps2.tu;
    } else {
        printf("\nPhan so thu hai co mau so la 0. Khong the tinh thuong.\n");
        thuong.tu = thuong.mau = 0;
    }

    printf("\nTong 2 phan so: %d/%d", tong.tu, tong.mau);
    printf("\nHieu 2 phan so: %d/%d", hieu.tu, hieu.mau);
    printf("\nTich 2 phan so: %d/%d", tich.tu, tich.mau);
    if (ps2.tu != 0) {
        printf("\nThuong 2 phan so: %d/%d", thuong.tu, thuong.mau);
    }

    printf("\n\nRut gon phan so:");
    if (tong.mau != 0) {
        int rg = gcd(abs(tong.tu), abs(tong.mau));
        printf("\nTong la: %d/%d", tong.tu / rg, tong.mau / rg);
    }
    if (hieu.mau != 0) {
        int rg = gcd(abs(hieu.tu), abs(hieu.mau));
        printf("\nHieu la: %d/%d", hieu.tu / rg, hieu.mau / rg);
    }
    if (tich.mau != 0) {
        int rg = gcd(abs(tich.tu), abs(tich.mau));
        printf("\nTich la: %d/%d", tich.tu / rg, tich.mau / rg);
    }
    if (ps2.tu != 0 && thuong.mau != 0) {
        int rg = gcd(abs(thuong.tu), abs(thuong.mau));
        printf("\nThuong la: %d/%d", thuong.tu / rg, thuong.mau / rg);
    }
}

int main() {
    int ct = -1;
    int q = 0;
    while (!q) {
        printf("\n++-------------------------------------------------------------++");
        printf("\n| 1: Kiem tra so nguyen, nguyen to, chinh phuong \t\t|");
        printf("\n| 2: Tim UCLN va BCLN cua 2 so \t\t\t\t\t|");
        printf("\n| 3: Tinh tien Karaoke \t\t\t\t\t\t|");
        printf("\n| 4: Tinh tien dien \t\t\t\t\t\t|");
        printf("\n| 5: Doi tien \t\t\t\t\t\t\t|");
        printf("\n| 6: Tinh lai xuat vay \t\t\t\t\t\t|");
        printf("\n| 7: Vay tien mua xe \t\t\t\t\t\t|");
        printf("\n| 8: Sap xep thong tin sinh vien \t\t\t\t|");
        printf("\n| 9: Xay dung game FPOLY-LOTT \t\t\t\t\t|");
        printf("\n| 10: Tinh toan phan so \t\t\t\t\t|");
        printf("\n| 11. THOAT CHUONG TRINH \t\t\t\t\t|");
        printf("\n++-------------------------------------------------------------++");
        printf("\nNhap so cua chuc nang (1-10): ");
        scanf("%d", & ct);
        switch (ct) {
        case 1:
            ktsn();
            break;
        case 2:
            ucln_bcln();
            break;
        case 3:
            karaoke();
            break;
        case 4:
            tiendien();
            break;
        case 5:
            doitien();
            break;
        case 6:
            vaynganhang();
            break;
        case 7:
            vaytienmuaxe();
            break;
        case 8:
            sapxepsinhvien();
            break;
        case 9:
            gamelott();
            break;
        case 10:
            phanso();
            break;
        case 11:
            q = 1;
            printf("\nCam on da su dung chuong trinh!\n");
        }
    }
    return 0;
}
