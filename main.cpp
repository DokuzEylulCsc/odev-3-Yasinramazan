#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/* !!!
 15 ogrenci
 Program 2019576003, B, A, B, A, C, C, D, D, B, C gibi bosluklu elemanlar oldugunda calismaktadir.
 referanslar:
  http://194.27.66.201/moodle/pluginfile.php?file=%2F98991%2Fmod_resource%2Fcontent%2F1%2FfileW.cpp
  http://194.27.66.201/moodle/pluginfile.php?file=%2F98992%2Fmod_resource%2Fcontent%2F1%2FfileR.cpp
*/

int main () {
   int i,j;
   string ogrenciNo[1][9];
   string dosya[100][11];
   int ogrenciSayisi=15;
   int sonuclar[9];

   ifstream infile;
   infile.open("sinav.txt");

   ofstream outfile;
   outfile.open("sonuclar.txt");

   infile>>dosya[0][0];
   for(j=0;j<10;j++){
    infile>>dosya[1][j];

   }


   outfile<<endl;
   outfile<<dosya[0][0]<<endl;
   for(j=0;j<10;j++)
    {
     outfile<<dosya[1][j];

    }

    outfile<<endl;

    for(i=2;i<17;i++)
   {
		for(j=0;j<11;j++)
		{
            infile >> dosya[i][j];
            outfile<<dosya[i][j]<<" ";

		} outfile<<endl;
   }

   outfile<<endl;


   int sonuc=0;
   int yuzdelik;
   float ortalama=0;

for(i=2;i<17;i++)
{
   for(j=1;j<11;j++)
    {
        if(dosya[1][j-1]==dosya[i][j])
        {

            sonuc++;
            sonuc++;
            sonuc++;
            sonuc++;
            ortalama++; ortalama++; ortalama++; ortalama++;

        }
        else if(dosya[i][j]==" ,")
        {
            sonuc;
        }
        else if(dosya[1][j-1]!=dosya[i][j])
        {
            sonuc--; ortalama--;

        }
    }
        yuzdelik=sonuc*10/4;
        outfile<<dosya[i][0]<<":"<<yuzdelik<<endl;

        sonuclar[i-2]=yuzdelik;

        sonuc=0;
}
        int temp;
        outfile<<endl<<endl<<"siralanmis liste:"<<endl;
        for(i=0;i<17;i++)
            {
                outfile<<dosya[i+2][0]<<":"<<sonuclar[i-1]<<endl;;


               for(j=i+1;j<15;j++)
                {
                    if(sonuclar[i]<sonuclar[j])
                        {
                            temp=sonuclar[j];
                            sonuclar[j]=sonuclar[i];
                            sonuclar[i]=temp;
                        }
                }

            }



        outfile<<endl;
        outfile<<"ortalama="<<ortalama/ogrenciSayisi*10/4<<endl;;



    return 0;
}
