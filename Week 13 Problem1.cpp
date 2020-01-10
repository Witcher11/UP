#include <iostream>
#include <string>
using namespace std;
class Product
{
private:
    string ImeProduct;
    int kolichestvo;
    double Cena;
public:
    string GetImeProduct()
    {
        return ImeProduct;
    }

    int GetKolichestvo()
    {
        return kolichestvo;
    }
    double GetCena()
    {
        return Cena;
    }

    void SetImeProduct(string neshto)
    {
        ImeProduct=neshto;
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
        //cin.ignore();
        cin>>cena;
        PenkaNeshta[i].SetCena(cena);

        cout<<endl;
    }


    Product Magazin[3];
    for(int i=0; i<3; i++)
    {
        cout<<"vuvedi ime na produkta koito ima v magazina ";

        cin.ignore();
        getline(cin,produkt);
        Magazin[i].SetImeProduct(produkt);



        cout<<"vuvedi kolichestvo v magazina : ";
         cin.ignore();
        cin>>broi;
        Magazin[i].SetKolichestvo(broi);


        cout<<"vuvedi cena v magazina " ;
        //cin.ignore();
        cin>>cena;
        Magazin[i].SetCena(cena);
        cout<<endl;
    }

    for(int i=0; i<3; i++)
    {
        if(PenkaNeshta[i].GetImeProduct()== Magazin[i].GetImeProduct())
        {
            cout<<"ima "<<Magazin[i].GetImeProduct()<<" v magazina";



                if(PenkaNeshta[i].GetKolichestvo()<=Magazin[i].GetKolichestvo()){
                cout<<" is sa dostatuchno "<<Magazin[i].GetImeProduct()<<endl;


                            if(PenkaNeshta[i].GetCena()>=Magazin[i].GetCena()){
                                cout<<" ,za baba e izgodno";}
                                else
                                    cout<<" ama sa mnogo pari";

                }
                else
                        cout<<" ama ne sa dostatuchno";
        }
        else
            cout<<"nqma "<<PenkaNeshta[i].GetImeProduct()<<" v magazina i baba shte e gladna "<<endl;
          }  return 0;
    }
//Problemi pri testove:   ignorira mi purvata bukva i ot tam ne pravi proverkata za drugite neshta
//ako chisloto na kolichestvoto e <10 me kara da vuveda oshte edin put tova chislo na prazen red za da produlji
