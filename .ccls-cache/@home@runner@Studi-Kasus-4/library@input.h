using namespace std;

class input {
  friend istream &operator >> (istream&, input&);
  private:
    int waktu;
    int usp = 1000000;
    int total;
    int ptb[100];
    int tabungan[1000];
    int sisa[1000];
    int insisa;
};

istream &operator >> (istream& in, input& input) {
  cout << "Rentang waktu : "; cin >> input.waktu;
  for (int i=0; i<input.waktu; i++) {
    cout << "Pengeluaran bulan ke-" << i+1 << " : Rp. "; cin >> input.ptb[i];
    input.sisa[i] = input.usp - input.ptb[i];
  }
  
  for (int i=0; i<input.waktu; i++) {
    cout << "Apakah sisa uangnya ingin ditabung? (1 = ya || 0 = tidak) " << i+1 << " : Rp. "; cin >> input.sisa[input.waktu];
    if(input.insisa = 1) {
      tabungan[i] += sisa[i];
    }
  }
  return in;
}
