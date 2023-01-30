#include<iostream>

class Silah{
	public:
		int mermi;
		int uzunluk;
		std::string isim;
};
class Ak47 : public Silah{
	public:
		bool SeriTek;
		int KayisUzunlugu;
};
int main(){
	class Silah silah;
	class Ak47 ak47;
/*	Silah* silahptr= &ak47;
	Ak47* ak47ptr=&ak47;
	std::cout<<silahptr; //bu ve bunun hemen altýndaki ayný bellek adresini göstermektedir
	std::cout<<ak47ptr;  
	std::cout<<&silah;*/
	
	ak47.isim="Mermi";
	
	Silah* silahptr=&ak47; 
	silahptr->isim="mehmet";  //memet yazacak burada -> ile ak47.isim ile ayný bellek adresini belirtik yani ayný yeri deðiþtik mermiyi memet yaptýk 
	std::cout<<ak47.isim;     
	
	
	
	return 0;
}
