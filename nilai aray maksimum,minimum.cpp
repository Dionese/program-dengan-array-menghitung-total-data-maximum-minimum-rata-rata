#include<iostream>
using namespace std;
int main()
{
    int i,bil[10],jumlah,tertinggi,terendah;
    float rata;
    for (i=0;i<10;i++)
    {
        cout<<"Masukan data ke :"<<1+1<<" = ";cin>>bil[i];
    }
    cout<<"Seluruh elemen array : \n";
	jumlah=0;
	terendah=bil[0];
	tertinggi=bil[0];
	for(i=0;i<10;i++){
		cout<<bil[i]<<endl;
		jumlah=jumlah+bil[i];
		if(bil[i]<terendah){
			terendah=bil[i];
			}else if(bil[i]>tertinggi){
			tertinggi=bil[i];
			}
		}
		rata=jumlah/10;
		cout<<"Jumlah seluruh elemen array : "<<jumlah<<endl;
		cout<<"Nilai maksimum seluruh elemen array : "<<tertinggi<<endl;
		cout<<"Nilai minimum seluruh elemen array : "<<terendah<<endl;
		cout<<"Nilai rata-rata seluruh elemen array : "<<rata<<endl;

		return 0;

}

