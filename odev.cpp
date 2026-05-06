#include <iostream>
#include <vector>

int main() {
	setlocale(LC_ALL, "Turkish");

	std::cout << "Satır Sayısını giriniz..\n";
	int satir;
	std::cin >> satir;
	std::cout << "Sütun Sayısını giriniz..\n";
	int sutun;
	std::cin >> sutun;

	std::vector<std::vector<double>> matris; //vector içinde vector kullanarak iki boyutlu bir dizi tanımlandı

	//matrisin satırını vectore tanımlama
	matris.resize(satir);

	for (int i = 0; i < satir; i++) {
		matris[i].resize(sutun); //sutunu tanımlama
	}

	//satır ve sütun sayıları girildi

	//Matris değerleri tanımlandı
	for (int i = 0; i < satir; i++) {
		for (int j = 0; j < sutun; j++) {
			std::cout << "matris [" << i << "] [" << j << "] Değerini girin..\n";
			double deger;
			std::cin >> deger;
			matris[i][j] = deger;
		}
	}

	std::cout << "---------------|Matris Değeri|---------------" << std::endl;

	//Matrisin yazdırılması
	for (int i = 0; i < satir; i++) {
		for (int j = 0; j < sutun; j++) {
			std::cout << matris[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}
