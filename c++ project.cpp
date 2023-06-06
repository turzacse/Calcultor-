/// ******************************************
///     Author: Fahim Montasir Turza
///            ID: 18ICTCSE039
///          Department of CSE,
///              BSMRSTU.
/// ******************************************



#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

#define PI 3.141592653589793238

using namespace std;

void arithmetic()
{
	int op = 0;
	float A = 0;
	float B = 0;

    cout<<""<<endl;
	cout<<"   Select operation\n";
	cout<<"   1 Addition\n";
	cout<<"   2 Subtraction\n";
	cout<<"   3 Product\n";
	cout<<"   4 Division\n";
	cout<<""<<endl;

	cin>>op;
	cout<<"Enter the First number:";
	cout<<""<<endl;
	cin>>A;

	cout<<"Enter the second number:";
	cout<<""<<endl;
	cin>>B;

	cout<<"Result: ";
	cout<<""<<endl;

	switch(op)
	{
		case 1:
			cout<<(A+B);
			break;
		case 2:
			cout<<(A-B);
			break;
		case 3:
			cout<<(A*B);
			break;
		case 4:
			cout<<(A/B);
			break;
		default:
			cout<<"Invalid operation";
			break;
	}
	cout<< endl;
}

void trignometric()
{
	int op = 0;
	float val = 0.0;
	cout<<"   Select\n";
	cout<<"   1 Sine\n";
	cout<<"   2 Cosine\n";
	cout<<"   3 Tangent\n";
	cout<<"   4 Cotangent\n";
	cout<<"   5 Sec\n";
	cout<<"   6 Cosec\n";
	cout<<"   Op: ";
	cin>>op;
	cout<<"Enter the Degree value: ";
	cin>>val;
	val = val* PI/180.0;
	if(op == 1)
    {
		cout<<sin(val);
	}
	else if(op == 2)
	{
		cout<<cos(val);
	}
	else if(op == 3)
	{
		cout<<tan(val);
	}
	else if(op == 4)
	{
		cout<<1/tan(val);
	}
	else if(op == 5)
	{
        cout<<1/cos(val);
	}
	else if(op == 6)
	{
		cout<<1/(sin(val));
	}
	else
	{
		cout<<"Invalid operation";
	}
	cout<<endl;
}

void exponential()
{
	float base = 0.0;
	float eee = 0.0;

	cout<<"Enter base: ";
	cin>>base;
	cout<<"Enter exponent: ";
	cin>>eee;
	cout<<pow(base, eee)<<endl;
}

void logarithmic()
{
	float value = 0.0;
	cout<<"Enter the value to calculate the log(e): ";
	cin>>value;
	cout<<log(value)<<endl;
}

void equation(){


    cout<<"    1 One variable equation \n";
    cout<<"    2 Two variable equation \n";
    int tt;
    cout<<"Enter Your Choice :"<<endl;
    cin>>tt;

    if(tt==1) {

         float x1,x2,x3;
          cout<<"Enter The variable of Quadratic Equation"<<endl;
           cin>>x1>>x2>>x3;
       float xx=x2*x2-4*x1*x3;
       // cout<<xx<<endl;
       cout<<" Ans : ";
       if(xx>=0){
             cout<<(-x2+sqrt(xx))/(2*x1)<<" And "<<(-x2-sqrt(xx))/(2*x1)<<endl;
           }
      else {
             xx=abs(xx);
             cout<<(-x2)/(2*x1)<<" + i"<<sqrt(xx)/(2*x1)<<" And "<<(-x2)/(2*x1)<< " - i" <<sqrt(xx)/(2*x1)<<endl;
           }
    }
    else if(tt==2)
    {
       float a1,a2,b1,b2,c1,c2;
       cout<<"Enter the variable of 1st equation: a1,b1,c1....."<<endl;
       cin>>a1>>b1>>c1;
       cout<<"Enter the variable of 2nd equation: a2,b2,c2....."<<endl;
       cin>>a2>>b2>>c2;
       float eq=a1*b2-a2*b1;
       cout<<"The solution of the equation is : "<<endl;
       cout<<"Value of x :"<<(b1*c2-b2*c1)/eq<<endl;
       cout<<"Value of y :"<<(c1*a2-c2*a1)/eq<<endl;
    }
    else {
        cout<<"Invalid Choice"<<endl;
    }

}
void calculas(){
  cout<<" 1.______Differentiation_______"<<endl;
  cout<<" 2.______Integration______"<<endl;
  int ch;
  cout<<"___________________"<<endl;
  cout<<"___________________"<<endl;
  cout<<"___________________"<<endl;
  cout<<"___________________"<<endl;
  cout<<"Select Your Option "<<endl;
  cin>>ch;
     if(ch==1){
            cout<<" (1). x power n"<<endl;
            cout<<" (2). e power x"<<endl;
            cout<<" (3). ln of x"<<endl;
            cout<<" (4). Sin(x)"<<endl;
            cout<<" (5). Cos(x)"<<endl;
            cout<<" (6). Tan(x)"<<endl;
            cout<<" (7). Cot(x)"<<endl;
            cout<<" (8). Sec(x)"<<endl;
            cout<<" (9). Cosec(x)"<<endl;
            cout<<endl;
            cout<<endl;

            int ch;
            cout<<"Select Your Option, to Operate : "<<endl;
            cin>>ch;
            switch(ch){
               case 1:
                  {
                      int n;
                      cout<<"Produce the power of x : "<<endl;
                      cin>>n;
                      cout<<"Differentiation of x power "<<n<<"is : ";
                      cout<<(n)<<"x^"<<n-1<<endl;
                  }
                  break;
                case 2:
                  cout<<"e^x"<<endl;
                  break;
                case 3:
                  cout<<"1/x"<<endl;
                  break;
                case 4:
                    cout<<"Cos(x)"<<endl;
                    break;
                case 5:
                    cout<<"-Sin(x)"<<endl;
                    break;
                case 6:
                    cout<<"Sec^2(x)"<<endl;
                    break;
                case 7:
                    cout<<"-Cosec^2(x)"<<endl;
                    break;
                case 8:
                    cout<<"Sec(x).Tan(x)"<<endl;
                    break;
                case 9:
                    cout<<"-Cosec(x).Tan(x)"<<endl;
                    break;
                default:
				cout<<"Invalid"<<endl;
            }
       }
    else if(ch==2){
            cout<<" (1). x power n"<<endl;
            cout<<" (2). e power x"<<endl;
            cout<<" (3). 1/x "<<endl;
            cout<<" (4). Sin(x)"<<endl;
            cout<<" (5). Cos(x)"<<endl;
            cout<<" (6). Tan(x)"<<endl;
            cout<<" (7). Cot(x)"<<endl;
            cout<<" (8). Sec(x)"<<endl;
            cout<<" (9). Cosec(x)"<<endl;
            cout<<endl;
            cout<<endl;


            int ch;
            cout<<"Select Your Option, to Operate : "<<endl;
            cin>>ch;
            switch(ch){
               case 1:
                  {
                      int n;
                      cout<<"Produce the power of x : "<<endl;
                      cin>>n;
                      cout<<"Integration of x power "<<n<<"is : ";
                      cout<<"( x^"<<n+1<<")/("<<n+1<<")"<<endl;
                  }
                  break;
                case 2:
                  cout<<"e^x"<<endl;
                  break;
                case 3:
                  cout<<"ln(x)"<<endl;
                  break;
                case 4:
                    cout<<"-Cos(x)"<<endl;
                    break;
                case 5:
                    cout<<"Sin(x)"<<endl;
                    break;
                case 6:
                    cout<<"log |sec(x)|"<<endl;
                    break;
                case 7:
                    cout<<"log |sin(x)|"<<endl;
                    break;
                case 8:
                    {
                        cout<<endl;
                        cout<<endl;
                        cout<<"ln|sec(x)+tan(x)|"<<endl;
                        cout<<"      OR"<<endl;
                        cout<<"(1/2)"<<"ln|(1+sinx)/(1-sinx)|"<<endl;
                        cout<<"      OR"<<endl;
                        cout<<"ln|tan(x/2+pi/4)|"<<endl;
                    }
                    break;
                case 9:
                    {
                        cout<<endl;
                        cout<<endl;
                        cout<<"ln|cosec(x)-cot(x)|"<<endl;
                        cout<<"      OR"<<endl;
                        cout<<"(1/2)"<<"ln|(cosx-1)/(cosx+1)|"<<endl;
                        cout<<"      OR"<<endl;
                        cout<<"ln|tan(x/2)|"<<endl;
                    }
                    break;
                default:
				cout<<"Invalid"<<endl;
            }
       }
}



void converter()
{
    cout<<"      1 Length Converter \n";
	cout<<"      2 Mass Converter\n";
	cout<<"      3 Temparature Converter\n";
	cout<<""<<endl;

	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"Enter Your Choice : "<<endl;
	cout<<endl;
	cout<<endl;
	int x;
	cin>>x;
	if(x==1)
    {

       cout<<"----Length Converter----"<<endl;
       cout<<endl;
	   cout<<endl;



       cout<<"      1 Kilometer To Mile  \n";
	   cout<<"      2 Mile To Kilometer \n";
	   cout<<"      3 Inch To Centimeter \n";
	   cout<<"      4 Centimeter to Inch \n";
	   cout<<"      5 Feet To Meter \n";
	   cout<<"      6 Meter to Feet \n";
	   cout<<""<<endl;

	   cout<<""<<endl;
	   cout<<""<<endl;
	   cout<<"Enter Your Choice : "<<endl;
	   cout<<endl;
	   cout<<endl;

	   int x1;
	   cin>>x1;
	   if(x1==1)
       {
           cout<<""<<endl;
	       cout<<""<<endl;
           cout<<"******Kilometer To Mile Converter*****"<<endl;
           cout<<""<<endl;
	       cout<<""<<endl;
	       cout<<"------Enter The Kilometer Value:   "<<endl;
           long double m,n;
	       cin>>m;
	       n=0.621371*m;
	       cout<<"--The "<<m<<" Kilometer is Equal to "<<n<<" Miles "<<endl;
	       cout<<""<<endl;
	       cout<<""<<endl;
       }
       else if(x1==2)
       {
           cout<<""<<endl;
	       cout<<""<<endl;
           cout<<"******Mile To Kilometer Converter*****"<<endl;
           cout<<""<<endl;
	       cout<<""<<endl;
	       cout<<"------Enter The Mile Value:   "<<endl;
           long double m,n;
	       cin>>m;
	       n=1.60934*m;
	       cout<<"--The "<<m<<" Mile is Equal to "<<n<<" Kilometeres "<<endl;
	       cout<<""<<endl;
	       cout<<""<<endl;
       }
       else if(x1==3)
       {
           cout<<""<<endl;
	       cout<<""<<endl;
           cout<<"******Inch To Centimeter Converter*****"<<endl;
           cout<<""<<endl;
	       cout<<""<<endl;
	       cout<<"------Enter The Inch Value:   "<<endl;
           long double m,n;
	       cin>>m;
	       n=2.54*m;
	       cout<<"--The "<<m<<" Inch is Equal to "<<n<<" Centemeter "<<endl;
	       cout<<""<<endl;
	       cout<<""<<endl;
       }
       else if(x1==4)
       {
           cout<<""<<endl;
	       cout<<""<<endl;
           cout<<"******Centemeter To Inch Converter*****"<<endl;
           cout<<""<<endl;
	       cout<<""<<endl;
	       cout<<"------Enter The Centemeter Value:   "<<endl;
           long double m,n;
	       cin>>m;
	       n=0.393701*m;
	       cout<<"--The "<<m<<" Centemeter is Equal to "<<n<<" Inch "<<endl;
	       cout<<""<<endl;
	       cout<<""<<endl;
       }
       else if(x1==5)
       {
           cout<<""<<endl;
	       cout<<""<<endl;
           cout<<"******Feet To Meter Converter*****"<<endl;
           cout<<""<<endl;
	       cout<<""<<endl;
	       cout<<"------Enter The Feet Value:   "<<endl;
           long double m,n;
	       cin>>m;
	       n=0.3048*m;
	       cout<<"--The "<<m<<" Feet is Equal to "<<n<<" Meter "<<endl;
	       cout<<""<<endl;
	       cout<<""<<endl;
       }
       else if(x1==6)
       {
           cout<<""<<endl;
	       cout<<""<<endl;
           cout<<"******Meter To Feet Converter*****"<<endl;
           cout<<""<<endl;
	       cout<<""<<endl;
	       cout<<"------Enter The Meter Value:   "<<endl;
           long double m,n;
	       cin>>m;
	       n=3.28084*m;
	       cout<<"--The "<<m<<" Meter is Equal to "<<n<<" Feet "<<endl;
	       cout<<""<<endl;
	       cout<<""<<endl;
       }
       else
       {
           cout<<"   Invalid   "<<endl;
       }
    }

    else if(x==2)
    {

       cout<<"----Mass Converter----"<<endl;
       cout<<endl;
	   cout<<endl;



           cout<<"      1 Kg To Pound  \n";
	       cout<<"      2 Pound To Kg \n";
	       cout<<"      3 Mass(Kg) To Weight(Newton) \n";
	       cout<<""<<endl;
	       cout<<endl;
	       cout<<endl;

	   cout<<""<<endl;
	   cout<<"Enter Your Choice : "<<endl;
	   cout<<endl;
	   cout<<endl;
	   int mass;
	   cin>>mass;

	    if(mass==1)
       {
           cout<<""<<endl;
	       cout<<""<<endl;
           cout<<"******Kg To Pound Converter*****"<<endl;
           cout<<""<<endl;
	       cout<<""<<endl;
	       cout<<"------Enter The Kg Value:   "<<endl;
           long double m,n;
	       cin>>m;
	       n=2.20462*m;
	       cout<<m<<" Kg is Equal to "<<n<<" Pound "<<endl;
	       cout<<""<<endl;
	       cout<<""<<endl;
       }
        else if(mass==2)
       {
           cout<<""<<endl;
	       cout<<""<<endl;
           cout<<"******Pound To Kg Converter*****"<<endl;
           cout<<""<<endl;
	       cout<<""<<endl;
	       cout<<"------Enter The Pound Value:   "<<endl;
           long double m,n;
	       cin>>m;
	       n=0.453592*m;
	       cout<<m<<" Pound is Equal to "<<n<<" Kg "<<endl;
	       cout<<""<<endl;
	       cout<<""<<endl;
       }
        else if(mass==3)
       {
           cout<<""<<endl;
	       cout<<""<<endl;
           cout<<"******Mass(Kg) To Weight(Newton) Converter*****"<<endl;
           cout<<""<<endl;
	       cout<<""<<endl;
	       cout<<"------Enter The Mass Value in Kg :   "<<endl;
           long double m,n;
	       cin>>m;
	       n=9.8*m;
	       cout<<m<<" Mass(Kg) is Equal to "<<n<<" Newton "<<endl;
	       cout<<""<<endl;
	       cout<<""<<endl;
       }
       else
       {
           cout<<"---Invalid---"<<endl;
       }
    }

    else if(x==3)
    {
	   cout<<endl;
       cout<<"----Temparature Converter----"<<endl;
       cout<<endl;
	   cout<<endl;



           cout<<"      1 Celsius To Fahrenheit   \n";
	       cout<<"      2 Fahrenheit To Celsius \n";
	       cout<<"      3 Celsius To Kelvin \n";
	       cout<<"      4 Kelvin  To Celcious   \n";
	       cout<<"      5 Fahrenheit To Kelvin \n";
	       cout<<"      6 Kelvin To Fahrenheit \n";
	       cout<<endl;
	       cout<<endl;
	       cout<<endl;

	   cout<<endl;
	   cout<<"Enter Your Choice : "<<endl;
	   cout<<endl;
	   cout<<endl;
	   int x;
	   cin>>x;
	   switch(x)
	   {
	      case 1:
          {
              cout<<endl;
              double t,x;
              cout<<"Enter The Celsius Value: "<<endl;
              cout<<endl;
              cin>>t;
              cout<<endl;
              cout<<endl;
              x= (9*(t+32))/5.00;
              cout<<"Equivalent Fahrenheit Value is : "<<x<<endl;
	      }
	             break;

	      case 2:
          {
              cout<<endl;
              double t,x;
              cout<<"Enter The Fahrenheit Value: "<<endl;
              cout<<endl;
              cin>>t;
              cout<<endl;
              cout<<endl;
              x= (5*(t-32))/9.00;
              cout<<"Equivalent Celsius Value is : "<<x<<endl;
	      }
	             break;
	      case 3:
          {
              cout<<endl;
              double t,x;
              cout<<"Enter The Celsius Value: "<<endl;
              cout<<endl;
              cin>>t;
              cout<<endl;
              cout<<endl;
              x= 273.00+t;
              cout<<"Equivalent Kelvin Value is : "<<x<<endl;
	      }
                 break;
	      case 4:
          {
              cout<<endl;
              double t,x;
              cout<<"Enter The Kelvin Value: "<<endl;
              cout<<endl;
              cin>>t;
              cout<<endl;
              cout<<endl;
              x= -273.00+t;
              cout<<"Equivalent Celsius Value is : "<<x<<endl;
	      }
	            break;
	      case 5:
          {
              cout<<endl;
              double t,x;
              cout<<"Enter The Fahrenheit Value: "<<endl;
              cout<<endl;
              cin>>t;
              cout<<endl;
              cout<<endl;
              x= (5*(t-32))/9.00+273;
              cout<<"Equivalent Kelvin Value is : "<<x<<endl;
	      }
	            break;
	      case 6:
          {
              cout<<endl;
              double t,x;
              cout<<"Enter The Kelvin Value: "<<endl;
              cout<<endl;
              cin>>t;
              cout<<endl;
              cout<<endl;
              x= (9*(t-273))/5.00+32;
              cout<<"Equivalent Fahrenheit Value is : "<<x<<endl;
	      }
	           break;
	       default:
				cout<<"Invalid"<<endl;

	   }

    }
    else
    {
        cout<<endl;
        cout<<endl;
        cout<<"Your Choice is Invalid"<<endl;
        cout<<endl;
        cout<<endl;
    }
}
void show() {
    cout<<"***********Calculator**************"<<endl;
    cout<<"    Advanced Calculator\n";
	cout<<"      1 Arithmetic\n";
	cout<<"      2 Trigonometric\n";
	cout<<"      3 Exponential\n";
	cout<<"      4 Logarithmic\n";
	cout<<"      5 Equation\n";
	cout<<"      6 Calculus \n";
	cout<<"      7 Converter \n";
	cout<<""<<endl;
	cout<<"   You Can chose a function to calculate :"<<endl;
}
int main()
{
    cout<<""<<endl;
    cout<<""<<endl;
	int sel = 0;
	char choice = 'y';

	while(choice == 'y')
    {
        show();
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"_________________________________________________"<<endl;
        cout<<""<<endl;
		cout<<"Enter the type of operation you want to calculate\n";
		cin>>sel;

		switch(sel)
		{
			case 1:
				arithmetic();
				break;
			case 2:
				trignometric();
				break;
			case 3:
				exponential();
				break;
			case 4:
				logarithmic();
				break;
            case 5:
                equation();
                break;
            case 6:
                calculas();
                break;
            case 7:
                converter();
                break;
			default:
				cout<<"Invalid Operation"<<endl;
		}

		cout<<""<<endl;
		cout<<""<<endl;
		cout<<"Do you want to continue? y/n"<<endl;
		cin>>choice;
		if(choice == 'n')
        {
			break;
		}
	}
	return 0;
}
