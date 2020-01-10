#include <iostream>
using namespace std;
class Product
{
private:
    string ImeProduct;
    int kolichestvo;
    double Cena;
public:


    string GetImeProduct(string neshto)
    {
        neshto=ImeProduct;
    }


    int GetKolichestvo(int value)
    {
        value=kolichestvo;

    }
    double GetCena(double value)
    {
        value=Cena;

    }

    void SetImeProduct(string neshto)
    {

        neshto=ImeProduct;
    }

    void SetKolichestvo(int value)
    {


        kolichestvo=value;
    }

    void SetCena(double value)
    {


        Cena=value;


    }
};




int main()
{

    Product PenkaNeshta[3];
    string produkt;
    int broi;
    double cena;
    for(int i=0; i<3; i++)
    {
        cout<<"vuvedi ime na produkta na baba ";

        cin.ignore();
        getline(cin,produkt);
        PenkaNeshta[i].SetImeProduct(produkt);


        cout<<"vuvedi kolichestvo koeto baba iska: ";
        cin.ignore();
        cin>>broi;
        PenkaNeshta[i].SetKolichestvo(broi);


        cout<<"vuvedi cena koqto baba iska " ;

        cin>>cena;
        PenkaNeshta[i].SetCena(cena);


    }


    Product Magazin[3];
     for(int i=0; i<3; i++)
    {
        cout<<"vuvedi ime na produkta koito ima ";

        cin.ignore();
        getline(cin,produkt);
        PenkaNeshta[i].SetImeProduct(produkt);


        cout<<"vuvedi kolichestvo v magazina : ";
        cin.ignore();
        cin>>broi;
        PenkaNeshta[i].SetKolichestvo(broi);


        cout<<"vuvedi cena v magazina " ;

        cin>>cena;
        PenkaNeshta[i].SetCena(cena);


    }

    return 0;
}
