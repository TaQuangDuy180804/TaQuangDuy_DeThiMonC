PhanSo::Phanso(){
	// Constructor mac dinh, co the khoi tao gia tri mac dinh cho tu vaf maux;
	tu = 0;
	mau = 1;
}

Phanso::Phanso(int t, int m){
	// Constructor với tham số, khởi tạo phân số từ tử và mẫu cho trước
	tu = t;
	mau = m;
}

ostream& operator << (ostream& out, const Phanso& ps){
	//toán tử xuất
	out << ps.tu << / << ps.mau;
	return out;
}

Phanso Phanso::operator + (const Phanso& ps){
	//toán tử công + 
	Phanso tong;
	tong.tu = this->tu * ps.mau + this->mau * ps.tu;
	tong.mau = this->mau * ps.mau;
	return tong;
}

Phanso Phanso::operator + (int res){
	//toán tử cộng số nguyên
	Phanso tong;
	tong.tu = this->tu + res * this->mau;
	tong.mau = this->mau;
	return tong;
}

Phanso& Phanso::operator++(){
	//Toán tử tăng ++ (tiền tố)
	this->tu = this->tu + this->mau;
	return *this;
}

Phanso& Phanso::operator += (const Phanso& ps){
	//toán tử cộng và gán += 

	this->tu = this->tu * ps.mau + ps.tu * this->mau;
	this->mau = this->mau * ps.mau;
	return *this;
}

Phanso::operator int(){
	//chuyển đổi từ Phanso sang int, lấy phần nguyên của phân số
	return tu/mau;
}
