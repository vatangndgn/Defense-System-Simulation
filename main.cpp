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

    int getHasar() const { return hasargucu; }
    string getIsim() const { return isim; }

    virtual ~Muhimmat() {}

};

class Roket : public Muhimmat {
public:
    Roket(string isim, int hasargucu) : Muhimmat(isim, hasargucu) {}

    void patla() override {
        cout << "[ROKET] " << isim << " ateslendi! Hedefe " << hasargucu << " hasar verdi.\n";
    }

    Roket operator+(const Roket& digerRoket) {
        int yeniGuc = this->hasargucu + digerRoket.hasargucu;
        string yeniIsim = "MEGA-" + this->isim + "&" + digerRoket.isim;

        return Roket(yeniIsim, yeniGuc);
    }
};

class Akillifuze : public Muhimmat {
public:
    Akillifuze(string isim, int hasargucu) : Muhimmat(isim, hasargucu) {}

    void patla() override {
        cout << "[AKILLI FUZE] " << isim << " hedefe kilitlendi... VURUS! (Hasar: " << hasargucu << ")\n";
    }
};

int main() {
    cout << "---ASELSAN HISAR SIMULASYONU---\n\n";

    Roket r1("OMTAS", 100);
    Roket r2("CIRIT", 150);

    Roket superRoket = r1 + r2;

    cout << "---ENVANTER DURUMU---\n";
    r1.patla();
    r2.patla();

    cout << "\n---BIRLESTIRME ISLEMI---\n";
    cout << "Sistem: Iki roket birlestiriliyor...\n";

    superRoket.patla();

    cout << "\n---POLYMORPHISM TESTI---\n";

    vector<Muhimmat*> envanter;
    envanter.push_back(new Akillifuze("SOM-J", 500));
    envanter.push_back(new Roket("BORA", 1000));

    for (auto m : envanter) {
        m->patla();
    }

    for (auto m : envanter) {
        delete m;
    }
    envanter.clear();

    return 0;
}
