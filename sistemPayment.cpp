#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//deklarasi
string username, password;

//data
//data nama stand
string kantin [5] = {"Dapur Mak'E - Depok", "Kentang Kletji", "Soto Seger Boyolali - Bu Retno", "Komunitas Kantin Puspita", "Kantin 21"};
//data menu kantin
struct menu{
    string namaMkn;
    int harga;
};
menu kantin1 [8] = {{"Nasi Ayam Penyet", 13000}, {"Nasi Ayam Crispy", 13000}, {"Nasi Lele", 11000}, {"Nasi Telur", 8000}, {"Nasi Tempe Tahu", 7000}, {"Nasi Ati Ampela", 10000}, {"Nasi Kulit", 12000}, {"Jus Buah", 8000}};
menu kantin2 [5] = {{"Dimsum Rame-rame", 30000}, {"Dimsum keju", 20000}, {"Dimsum Original", 15000}, {"Tori Katsu Chiizu Rice", 23000}, {"Dimsum Mayo", 20000}};
menu kantin3 [7] = {{"Nasi Soto Ayam", 7000}, {"Lontong Opor Ayam", 13000}, {"Nasi Rames Telur", 11000}, {"Nasi Pecel Lele", 11000}, {"Nasi Rames Lele", 11000}, {"Es Teh", 3000}, {"Es Lemon Tea", 4000}};
menu kantin4 [6] = {{"Indomie Telur", 10000}, {"Nasi Rawon", 16000},{"Nasi Ayam Geprek", 12000}, {"Rice Bowl", 11000}, {"Es Kuwut", 5000}, {"Cola", 6000}};
menu kantin5 [8] = {{"Indomie Goreng Kornet", 10000}, {"Indomie rebus Kornet", 10000}, {"Indomie Goreng Kornet Telur", 13000}, {"Indomie Rebus Kornet", 13000}, {"Indomie Goreng Kornet Sosis", 9000}, {"Indomie Rebus Kornet", 9000}, {"Es Jeruk", 3000}, {"Es Nutrisari", 4000}};
//data menu top up
int topUp[6] = {5000, 10000, 20000, 25000, 50000, 100000};

int main(){
    return 0;
}
