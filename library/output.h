#include <iostream>

using namespace std;
class output
{
    private:
      int total = 0;
      int totaltab = 0;
      int totalptb = 0;
      int waktu;
    public:
      void keperluan();
};

void output :: keperluan()
{
  for(int i = 0; i < waktu; i++)
    {
      cout << "Pengeluaran Andi bulan ke-" << i + 1 << " : " << ptb[i] << endl;
      cout << "Tabungan Andi bulan ke-" << i + 1 << " : " << tabungan[i] << endl;
    }

  for(int i = 0; i < waktu; i++)
    {
      totalptb += ptb[i];
      cout << "Total pengeluaran Andi : " << totalptb;
      totaltab += tabungan[i];
      cout << "Uang tabungan Andi saat ini : " << totaltab;
    }
}