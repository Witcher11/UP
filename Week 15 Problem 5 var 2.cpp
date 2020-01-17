#include <iostream>
using namespace std;

class Calculator
{
	double a, b,result;
public:
	double celiq(double , double ,char );

	double maluk(double , char );


	double umnojenie(double , double );


	double delenie(double , double );

};
double Calculator::maluk(double a, char c){

    if(c=='+'){
	result = (result+a);
	return result;
    }
    if(c=='-'){
	result = (result-a);
	return result;
    }
    if(c=='*'){
	result = (result*a);
	return result;
    }
    if(c=='/'){
	result = (result/a);
	return result;
    }


}
double Calculator::celiq(double a, double b, char c)
{

    if(c=='+'){
	result = (a+b);
	return result;
    }
    if(c=='-'){
	result = (a-b);
	return result;
    }
    if(c=='*'){
	result = (a*b);
	return result;
    }
    if(c=='/'){
	result = (a/b);
	return result;
    }
}
int main()
{
	Calculator calc;
	double a,b,result;
	char c;

	bool raboti = true;


	while(raboti==true){


cout << "vuvedi problem (kato 1 + 2)" << endl;
	cin >> a >> c >> b;
	if(c!='+' || c!='-' ||c!='*'||c!='/')
       cout<<calc.celiq(a,b,c);

       else
       {
           raboti =false;
        cout<<"ti si bokluk: "<<endl;
       return 1 ;
       }


	}


















/*	switch (c)
	{
	case '+':
		result=calc.subirane(a,b);break;
		//cin.ignore();
	case '-':
        result=calc.izvajdane(a,b);break;
       // cin.ignore();
    case '*' :
       result= calc.umnojenie(a,b);break;
       // cin.ignore(a,b);
    case '/' :
         result =calc.delenie(a,b);break;
       // cin.ignore();
	default:
		cout << "vuvedete pravilen problem " << endl;break;
	}
	cout<<"="<<result<<endl;*/

}
