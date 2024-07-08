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
