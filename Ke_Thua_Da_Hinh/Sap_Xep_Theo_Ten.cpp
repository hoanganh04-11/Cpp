#include<bits/stdc++.h>
using namespace std;

class Nguoi{
private:
	string ten, ns, dc;
public:
	Nguoi(string ten, string ns, string dc){
		this->ten = ten;
		this->ns = ns;
		this->dc = dc;
	}
	void ChuanHoaTen(){
		stringstream ss(ten);
		string w;
		string res = "";
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
	string getSortedName(){
		stringstream ss(ten);
		vector<string> v;
		string w;
		string res = "";
		while(ss >> w){
			v.push_back(w);
		}
		res = v.back(); 
		for(int i=0; i<v.size()-1; i++){
			res += " " + v[i];
		}
		return res;
	}
};

class SinhVien : public Nguoi{
private:
	string msv, lop;
	double gpa;
public:
	SinhVien(string msv, string ten, string ns, string dc, string lop, double gpa) : Nguoi(ten, ns, dc){
		this->msv = msv;
		this->lop = lop;
		this->gpa = gpa;
	}
	void in(){
		cout << msv << " ";
		Nguoi::in();
		cout << lop << " " << fixed << setprecision(2) << gpa << endl;
	}
};

bool cmp(SinhVien a, SinhVien b){
	return a.getSortedName() < b.getSortedName();
}

int main(){
	int n; cin >> n;
	vector<SinhVien> v;
	for(int i=0; i<n; i++){
		string msv, ten, ns, dc, lop;
		double gpa;
		msv = to_string(i+1);
		while(msv.size() < 4) msv = "0" + msv;
		cin.ignore();
		getline(cin, ten);
		getline(cin, ns);
		getline(cin, dc);
		getline(cin, lop);
		cin >> gpa;
		SinhVien s(msv, ten, ns, dc, lop, gpa);
		s.ChuanHoaTen();
		s.ChuanHoaNS();
		v.push_back(s);
	}
	stable_sort(v.begin(), v.end(), cmp);
	for(SinhVien x : v){
		x.in();
	}
}

