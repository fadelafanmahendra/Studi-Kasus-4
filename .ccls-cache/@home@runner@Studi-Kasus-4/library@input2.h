using namespace std;

class input {
  friend istream &operator >> (istream&, input&);
  private:
    int waktu,usp = 1000000;
    string ptb[12];
  public:
    void pemasukan();
}

istream &operator >> (istream& in, input& input) {
  cout << "Rentang waktu : "; cin >> input.waktu
  for (int i=0; i<input.waktu, i++) {
    cout << "Pengeluaran bulan ke " << i+1 << " : Rp. "; cin >> input.ptb[12];
  }
  return in;
}
