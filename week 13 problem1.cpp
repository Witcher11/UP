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
    double obshto;
    double obshto2;
    for(int i=0; i<3; i++)
    {
        cout<<"vuvedi ime na produkta na baba ";

        cin.ignore();
        getline(cin,produkt);
        PenkaNeshta[i].SetImeProduct(produkt);


        cout<<"vuvedi kolichestvo koeto baba iska: ";
          //cin.ignore();
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
        // cin.ignore();
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
                cout<<" is sa dostatuchno "<<Magazin[i].GetImeProduct();


                            if(PenkaNeshta[i].GetCena()>=Magazin[i].GetCena()){
                                cout<<" ,za baba e izgodno"<<endl;}
                                else
                                    cout<<" ama sa mnogo pari"<<endl;

                }

                else
                        cout<<"  ne sa dostatuchno i baba si kupi samo "<<PenkaNeshta[i].GetKolichestvo()<<" " <<PenkaNeshta[i].GetImeProduct() <<" po "<< PenkaNeshta[i].GetCena()<<" leva vseki"<<endl;
        }
        else
            cout<<"nqma "<<PenkaNeshta[i].GetImeProduct()<<" v magazina i baba shte e gladna "<<endl;

    }



    bool ProveriKolichestvo;
    bool ProveriCena;
    for(int a=0;a<3;a++){

        if(PenkaNeshta[a].GetCena()<=Magazin[a].GetCena()){
            ProveriCena = true;
            else
                ProveriCena = false;
        }
    }
    for(int b=0;b<3;b++){

        if(PenkaNeshta[b].GetKolichestvo()<=Magazin[b].GetKolichestvo()){
            ProveriKolichestvo = true;
            else
                ProveriKolichestvo = false;
        }
    }

    if()// proverka za 500 sluchaq


           for(int f=0;f<3;f++){


            for(int j=0;j<3;j++){


              obshto =  PenkaNeshta[f].GetKolichestvo()*PenkaNeshta[f].GetCena();

            }



            cout<<" baba e dala obshto"<<obshto<<" leva "<<endl;
            if(obshto>=100)
                cout<<" baba ostana bez pensiq ";
            return 0;
    }
