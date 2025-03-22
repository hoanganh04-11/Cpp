#include<bits/stdc++.h>
using namespace std;
class Person{
private:
    string ten, ns, dc;
public:
    Person(string ten, string ns, string dc){
        this->ten = ten;
        this->ns = ns;
        this->dc = dc;
    }
    void ChuanHoaTen(){
        stringstream ss(ten);
        string w;
        string res ="";
        while(ss >> w){
            res += toupper(w[0]);
            for(int i=1; i<w.size(); i++){
                res += tolower(w[i]);
            }
            res += " ";
        }
        res.pop_back();
        ten = res;
    }
    void ChuanHoaNS(){
        if(ns[1] == '/') ns = "0" + ns;
        if(ns[4] == '/') ns.insert(3, "0");
    }
    void in(){
        cout << ten << " " << ns << " " << dc << " ";
    }
    string getDiaChi(){
    	return dc;
	}
};
class Student : public Person{
private:
    string msv, lop;
    double gpa;
public:
    Student(string msv, string ten, string ns, string dc, string lop, double gpa) : Person(ten, ns, dc){
        this->msv = msv;
        this->lop = lop;
        this->gpa = gpa;
    }
    void in(){
        cout << msv << " ";
        Person::in();
        cout << lop << " " << fixed << setprecision(2) << gpa << endl;
    }
};
class Teacher : public Person{
private:
    string mgv, khoa, lop1;
    int luong;
public:
    Teacher(string mgv, string ten, string ns, string dc, string khoa, int luong, string lop1) : Person(ten, ns, dc){
        this->mgv = mgv;
        this->khoa = khoa;
        this->luong = luong;
        this->lop1 = lop1;
    }
    void in(){
        cout << mgv << " ";
        Person::in();
        cout << khoa << " " << luong << endl;
    }
};
int main()
{
    int n; cin >> n;
    vector<Student> s;
    vector<Teacher> v;
    cin.ignore();
    for(int i=0; i<n; i++){
        string ma;
        getline(cin, ma);
        if(ma.substr(0, 2) == "SV"){
            string ten, ns, dc, lop;
            double gpa;
            getline(cin, ten);
            getline(cin, ns);
            getline(cin, dc);
            getline(cin, lop);
            cin >> gpa;
            cin.ignore();
            Student x(ma, ten, ns, dc, lop, gpa);
            x.ChuanHoaTen();
            x.ChuanHoaNS();
            s.push_back(x);
        }
        else if(ma.substr(0, 2) == "GV"){
            string ten, ns, dc, khoa, lop1;
            int luong;
            getline(cin, ten);
            getline(cin, ns);
            getline(cin, dc);
            getline(cin, khoa);
            cin >> luong;
            cin.ignore();
            getline(cin, lop1);
            Teacher y(ma, ten, ns, dc, khoa, luong, lop1);
            y.ChuanHoaTen();
            y.ChuanHoaNS();
            v.push_back(y);
        }
    }
    string diachi;
	getline(cin, diachi); 
    cout << "DANH SACH GIAO VIEN CO DIA CHI TAI " << diachi << " : " << endl;
    for(auto x : v){
        if(x.getDiaChi() == diachi){
        	x.in();
		}
	}
    cout << "DANH SACH SINH VIEN CO DIA CHI TAI " << diachi << " : " << endl;
    for(auto x : s){
       if(x.getDiaChi() == diachi){
       		x.in();
	   }
    }
    return 0;
}

