#include <iostream>
using namespace std;

int main()
{
  char reply;
  do
  {
    int baris, kolom;
    cout << "Input jumlah baris : ";
    cin >> baris;
    cout << "Input jumlah kolom : ";
    cin >> kolom;
    cout << endl;

    int arr1[baris][kolom];
    int arr2[baris][kolom];

    for (int i = 0; i < baris; i++)
    {
      for (int a = 0; a < kolom; a++)
      {
        cout << "Masukkan nilai x: ";
        cin >> arr1[i][a];
      }
    }

    cout << endl;

    for (int i = 0; i < baris; i++)
    {
      for (int a = 0; a < kolom; a++)
      {
        cout << "Masukkan nilai y: ";
        cin >> arr2[i][a];
      }
    }

    cout << endl;

    cout << "Nilai x" << endl;
    for (int i = 0; i < baris; i++)
    {
      for (int x = 0; x < kolom; x++)
      {
        cout << "| " << arr1[i][x] << " |";
      }
      cout << endl;
    }
    cout << endl;

    cout << "Nilai y" << endl;
    for (int i = 0; i < baris; i++)
    {
      for (int x = 0; x < kolom; x++)
      {
        cout << "| " << arr2[i][x] << " |";
      }
      cout << endl;
    }
    cout << endl;

    int menu;
    cout << "Pilihlah operator" << endl;
    cout << "1 = +" << endl;
    cout << "2 = -" << endl;
    cout << "3 = *" << endl;
    cout << "4 = /" << endl;
    cout << "5 = %" << endl;
    cout << "Masukkan operator : " << endl;
    cin >> menu;

    for (int i = 0; i < baris; i++)
    {
      for (int a = 0; a < kolom; a++)
      {
        switch (menu)
        {
        case 1:
          cout << arr1[i][a] << " + " << arr2[i][a] << " = " << arr1[i][a] + arr2[i][a] << endl;
          break;
        case 2:
          cout << arr1[i][a] << " - " << arr2[i][a] << " = " << arr1[i][a] - arr2[i][a] << endl;
          break;
        case 3:
          cout << arr1[i][a] << " * " << arr2[i][a] << " = " << arr1[i][a] * arr2[i][a] << endl;
          break;
        case 4:
          cout << arr1[i][a] << " / " << arr2[i][a] << " = " << arr1[i][a] / arr2[i][a] << endl;
          break;
        case 5:
          cout << arr1[i][a] << " % " << arr2[i][a] << " = " << (int)arr1[i][a] % (int)arr2[i][a] << endl;
          if (arr2[i][a] == 2)
          {
            if (arr1[i][a] % arr1[i][a] == 0)
            {
              cout << "Genap" << endl;
            }
            else if (arr2[i][a] % arr2[i][a] == 1)
            {
              cout << "Ganjil" << endl;
            }
          }

          break;
        default:
          printf("Maaf, pilihan menu tidak tersedia");
        }
      }
    }
    cout << " " << endl;
    cout << "Apakah anda ingin mengulang kembali (Ya/Tidak) \n";
    cout << "Ketik 1 jika Ya" << endl;
    cout << "Ketik 0 jika Tidak" << endl;
    cin >> reply;
  } while (reply == '1');
  cout << endl;
  while (reply == '0')
  {
    cout << "Program telah selesai!!";
    return 0;

  }
}
