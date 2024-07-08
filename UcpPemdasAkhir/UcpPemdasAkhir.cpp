#include <iostream>
#include <string>
using namespace std;

class MasukUniversitas {
	float UangPendaftaran;
	float UangSemesterPertama;
	float UangBangunan;
	float JumlahBiaya;

	int uangPendaftaran;
	// isi daftar variable yang dibutuhkan di bawah ini
public:
	MasukUniversitas() {
		uangPendaftaran = 0;
		// isi nilai default variable yang dibutuhkan di bawah ini
	}
	virtual void namaJalurMasuk() { return; }
		float SNBT;
		float SNBP;

	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}

};
class SNBT : public MasukUniversitas {
public:
	void namaJalurMasuk() override;
	int "jalur masuk SNBT : ";

		cout << "Masukan uang pendaftaran"
		cin >> "100000"
		cout << "Masukan uang semester pertama"
		cin >> "30000000"
		cout << "Masukan uang bangunan"
		cin >> "15000000"

		HitungJumlah() override;
};
class SNBP : public MasukUniversitas {
	void namaJalurMasuk() override;
	int "jalur masuk SNBP : ";
	
		cout << "Masukan uang pendaftaran"
		cin >> "100000"
		cout << "Masukan uang semester pertama"
		cin >> "90000000"

		HitungJumlah() override;
};
int main() {
	jalur masuk("SNBT", "SNBP");
	cout << biaya.jumlah();
	cout << "Hasil = " << biaya.jumlah(45100000, 9100000) << endl;
	return 0;
}


