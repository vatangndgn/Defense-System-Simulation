#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Muhimmat {
protected:
    string isim;
    int hasargucu;

public:
  
    Muhimmat(string gelenisim, int gelenhasargucu) {
        isim = gelenisim;
        hasargucu = gelenhasargucu;
    }

    virtual void patla() = 0;

    virtual ~Muhimmat() {
        cout << isim << " bellekten cikartiliyor...\n";
    }
};

class Roket : public Muhimmat {
public:
    Roket(string isim, int hasargucu) : Muhimmat(isim, hasargucu) {}

    void patla() override {
        cout << isim << " hedefi vurdu! " << hasargucu << " hasar verildi.\n" << endl;
    }
};

class Akillifuze : public Muhimmat {
public:
    Akillifuze(string isim, int hasargucu) : Muhimmat(isim, hasargucu) {}

    void patla() override {
        cout << isim << " Hedefe Kilitlenildi.. Hedef vuruldu! " << hasargucu << " hasar verildi.\n" << endl;
    }
};

int main() {
    vector<Muhimmat*> envanter;

    envanter.push_back(new Roket("Roket-01", 100));
    envanter.push_back(new Akillifuze("AkilliFuze-01", 300));
    envanter.push_back(new Roket("Roket-02", 120)); 

    cout << "---OPERASYON BASLIYOR---\n\n";

    for (size_t i = 0; i < envanter.size(); i++) {
        envanter[i]->patla();
    }

    cout << "---TEMIZLIK---\n";

    for (size_t j = 0; j < envanter.size(); j++) {
        delete envanter[j]; 
    }

    envanter.clear(); 
    cout << "\nTum bellek temizlendi. Program kapaniyor.";

    return 0;
}