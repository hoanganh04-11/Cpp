#include<bits/stdc++.h>
using namespace std;

class Vehicle{
private:
    string ten, hang, mausac;
    long long giaban;
public:
    Vehicle(string ten, string hang, string mausac, long long giaban){
        this->ten = ten;
        this->hang = hang;
        this->mausac = mausac;
        this->giaban = giaban;
    }
    string getHang(){
        return hang;
    }
    void in(){
        cout << ten << " " << hang << " " << mausac << " ";
    }
    void in2(){
        cout << giaban << endl;
    }
    long long getGia(){
        return giaban;
    }
};

class Motor : public Vehicle{
private:
    string maXm;
    int tocdoMax;
public:
    Motor(string maXm, int tocdoMax, string ten, string hang, string mausac, long long giaban) : Vehicle(ten, hang, mausac, giaban){
        this->maXm = maXm;
        this->tocdoMax = tocdoMax;
    }
    void in(){
        cout << maXm << " ";
        Vehicle::in();
        cout << tocdoMax << " ";
        Vehicle::in2();
    }
    string getMaXm(){
        return maXm;
    }
};

class Car : public Vehicle{
private:
    string maOto;
    int maLuc;
public:
    Car(string maOto, int maLuc, string ten, string hang, string mausac, long long giaban) : Vehicle(ten, hang, mausac, giaban){
        this->maOto = maOto;
        this->maLuc = maLuc;
    }
    void in(){
        cout << maOto << " ";
        Vehicle::in();
        cout << maLuc << " ";
        Vehicle::in2();
    }
    string getMaOto(){
        return maOto;
    }
};

bool cmp(Car a, Car b){
    if(a.getGia() != b.getGia()) return a.getGia() > b.getGia();
    return a.getMaOto() < b.getMaOto();
}

bool cmp2(Motor a, Motor b){
    if(a.getGia() != b.getGia()) return a.getGia() > b.getGia();
    return a.getMaXm() < b.getMaXm();
}

int main(){
    int n; cin >> n;
    cin.ignore();
    vector<Motor> motors;
    vector<Car> cars;
    for(int i=0; i<n; i++){
        string ma; 
        getline(cin, ma);
        if(ma.substr(0, 3) == "OTO"){
            string ten, hang, mausac;
            int maLuc;
            long long giaban;
            getline(cin, ten);
            getline(cin, hang);
            getline(cin, mausac);
            cin >> maLuc;
            cin >> giaban;
            cin.ignore();
            Car t(ma, maLuc, ten, hang, mausac, giaban);
            cars.push_back(t);
        }
        else if(ma.substr(0, 2) == "XM"){
            string ten, hang, mausac;
            int tocdoMax;
            long long giaban;
            getline(cin, ten);
            getline(cin, hang);
            getline(cin, mausac);
            cin >> tocdoMax;
            cin >> giaban;
            cin.ignore();
            Motor s(ma, tocdoMax, ten, hang, mausac, giaban);
            motors.push_back(s);
        }
    }
    sort(cars.begin(), cars.end(), cmp);
    sort(motors.begin(), motors.end(), cmp2);
    cout << "DANH SACH OTO : " << endl;
    for(auto x : cars){
        x.in();
    }
    cout << "DANH SACH XE MAY : " << endl;
    for(auto x : motors){
        x.in();
    }
}

