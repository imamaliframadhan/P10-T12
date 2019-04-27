#include <iostream>
#include <stdlib.h>
using namespace :: std ;

main()
{   int a [50], input, i, j, temp, cari, ketemu, edit;
    cout <<"Masukkan    Inputan            :  ";                cin>>input;

    for (i=1; i<=input; ++i)
   { cout <<"\nMasukkan    NIM " <<i<< " =   "  ;               cin>>a[i];}
    for (i=1; i<input; ++i)
    {
        for (j=1; j<=(input-i); ++j)
        if (a[j]>a[j+1])
        {
            temp = a[j] ;
            a[j] = a[j+1] ;
            a[j+1] = temp ;
        }
    }
    system ("CLS");
    cout <<"\nUrutan dalam Ascending ";
    for(i=1; i<=input; ++i)
        cout <<"\nNIM        "  <<i<< " = "  <<a[i];

    cout <<"\n\nInput data yang dicari  :   ";                  cin>>cari;

    ketemu=0;
    for (i=0; i<=input; i++)
    {   if (a[i]==cari)
        {   ketemu=1;
            cout<<"\nData ditemukan pada indeks ke -  " <<i ;
        }
    }
    if (ketemu==0)
    {   cout<<"Data tidak ditemukan";   }

    cout <<"\n\nMasukkan edit NIM        :   ";                  cin>>edit;
    for (int e=0; e<input; e++)
    {if (a[e] == edit)
      { cout <<"\nMasukkan NIM yg baru     :   ";                  cin>>a[e];  }
    }
    cout <<"\nData NIM setelah diubah";
    for (int u=1; u<=input; u++)
	{   cout << "\nNIM " << u << " =    " << a[u];	}

}
