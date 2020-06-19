#include <iostream>
#include <conio.h>

using namespace std;
typedef struct data
{
    int zakatFItrah;
    int zakatTernak;
    int zakatEmas;
    int zakatPerak;
    int zakatProfesi;
}data;
data zakat;
int zakatFitrah (int beras, int hargaBeras)
{
    int h, ZakatFitrah;
    ZakatFitrah=h*(25/1000);
    return ZakatFitrah;
}
int zakatTernak (int Kambing, int Sapi)
{
    int zakat, K, S;
    if (K=21-23)
    {
        Kambing=1;
    }
    else if (K=24-26)
    {
        Kambing=2;
    }
    else if (K=27-28)
    {
        Kambing=3;
    }
    else if (K=29-40)
    {
        Kambing=4;
    }
    else if (K=41-44)
    {
        Kambing=5;
    }
    else if (K=45-47)
    {
        Kambing=6;
    }
}
int zakatEmas (int berat, int harga)
{
    int ZakatEmas, Kg, Rp;
    ZakatEmas=Kg*25;
    return ZakatEmas;
}
void zakatPerak (int berat, int harga)
{
    int ZakatPerak, Kg, Rp;
    ZakatPerak=Kg*Rp;
}
int zakatProfesi (int pengeluaran, int pemasukan)
{
    int ZakatProfesi, comeout, income;
    ZakatProfesi=income-comeout;
    return ZakatProfesi;
}
