#include <iostream>

using namespace::std;

main(){
char mem;
string ids;
int jml,hrg[10],d,a,c;
int tot,ada;

cout<<"Apakah anda member ?Y/N :";cin>>mem;
if (mem=='Y')
    {
        cout<<"Masukan No identitas : ";cin>>ids;
        if(ids=="A001"){cout<<"BAYU";cout<<endl;}
        else if(ids=="A002"){cout<<"IRVAN";cout<<endl;}
        else if(ids=="A003"){cout<<"SUSIATI";cout<<endl;}
        else if(ids=="A007"){cout<<"DIANA";cout<<endl;}
        else if(ids=="A008"){cout<<"RONI";cout<<endl;}



cout<<"Jumlah jenis barang : ";cin>>jml;
d=0;
for (c=0;c<jml;c++){

    cout<<"barang ke-"<<c<<endl;
    cout<<"jumlah ada :";cin>>ada;
    cout<<" harga : ";cin>>hrg[c];
    tot=ada*hrg[c];
    d=d+tot;
    }

    cout<<"total :";cout<<d;
    ;}
else if (mem=='N')
    {
    cout<<"Masukan Nama : ";cin>>ids;

    tot=d;
    cout<<"Jumlah jenis barang : ";cin>>jml;
d=0;
for (c=0;c<jml;c++){

    cout<<"barang ke-"<<c<<endl;
    cout<<"jumlah ada :";cin>>ada;
    cout<<" harga : ";cin>>hrg[c];
    tot=ada*hrg[c];
    d=d+tot;
    a++;}
    cout<<"total :"<<d;
    }

}

