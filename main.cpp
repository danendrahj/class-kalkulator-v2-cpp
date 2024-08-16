#include <iostream>
#include <string>

using namespace std;

class addNumber{
    public:
    // Penjumlahan
        int setAddPenjumlahan(int x, int y){
            penjumlahan = x + y;
            return penjumlahan;
        }
        int getAddPenjumlahan(){
            return penjumlahan;
        }
    
    // Pengurangan
        int setAddPengurangan(int x, int y){
            pengurangan = x - y;
            return pengurangan;
        }
        int getAddPengurangan(){
            return pengurangan;
        }

    // Perkalian
        int setAddPerkalian(int x, int y){
            perkalian = x * y;
            return perkalian;
        }
        int getAddPerkalian(){
            return perkalian;
        }
        
    // Pembagian
        int setAddPembagian(int x, int y){
            if(y == 0){
                cout << "Error: Pembagian dengan tidak diperbolehkan." << endl;
                return 0;
            }
            pembagian = x / y;
            return pembagian;
        }
        int getAddPembagian(){
            return pembagian;
        }
        
    // Pengurangan
        int setAddModulus(int x, int y){
            modulus = x % y;
            return modulus;
        }
        int getAddModulus(){
            return modulus;
        }
        
        
    private:
        int penjumlahan;
        int pengurangan;
        int perkalian;
        int pembagian;
        int modulus;
};


int main(){

    int num1, num2, pilihan;
    cout << "Masukkan angka pertama: ";
    cin >> num1;
    cout << "Masukkan angka kedua: ";
    cin >> num2;

    cout << "\nPilih Opsi: " << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "5. Modulus" << endl;
    cout << "Pilihlah Opsi 1-5: ";
    cin >> pilihan;

    addNumber bo;

    switch(pilihan){
        case 1:
            bo.setAddPenjumlahan(num1, num2);
            cout << "Hasil Penjumlahan: " << bo.getAddPenjumlahan() << endl;
        break;

        case 2:
            bo.setAddPengurangan(num1, num2);
            cout << "Hasil Pengurangan: " << bo.getAddPengurangan() << endl;
        break;

        case 3:
            bo.setAddPerkalian(num1, num2);
            cout << "Hasil Perkalian: " << bo.getAddPerkalian() << endl;
        break;

        case 4:
            bo.setAddPembagian(num1, num2);
            cout << "Hasil Pembagian: " << bo.getAddPembagian() << endl;
        break;

        case 5:
            bo.setAddModulus(num1, num2);
            cout << "Hasil Modulus: " << bo.getAddModulus() << endl;
        break;

        default:
                cout << "Pilihan tidak valid. Silakan pilih antara 1 hingga 5." << endl;
        break;
    }
    

    return 0;
}