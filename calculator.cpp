#include<iostream>
#include<math.h>
using namespace std;

class SimpleCalculator{
    float a,b;
    public:
        void Setdata(float x,float y){
            a=x;
            b=y;
        }
        void calculate(char c){
            switch (c)
            {
            case '+':
                cout<< (a+b)<<endl;
                break;
            
            case '-':
                cout<< (a-b)<<endl;
                break;
            
            case '*':
                cout<< (a*b)<<endl;
                break;
            
            case '/':
                cout<< (a/b)<<endl;
                break;
            
            
            default:
                break;
            }
        }
};
class ScientificCalculator{
    float i;
    int fact=1;
    public:
        void setVAlue(float p){
            i=p;
        }
        void Value(char j){
            switch (j)
            {
            case 's':
                cout<<sin(i)<<endl;
                break;
            case 'c':
                cout<<cos(i)<<endl;
                break;
            case 't':
                cout<<tan(i)<<endl;
                break;
            case 'l':
                cout<<log10(i)<<endl;
                break;
            case 'f':
                while(i>0){
                    fact=fact*i;
                    i=i-1;
                }
                cout<<fact<<endl;
                break;
            
            default:
                cout<<"Enter valid input!"<<endl;
                break;

            }
        }
};
class Calculator: public ScientificCalculator , public SimpleCalculator{

};
int main(){
    Calculator a;
    cout<<"For Addition Enter +"<<endl;
    cout<<"For Subtraction Enter -"<<endl;
    cout<<"For Multiplication Enter *"<<endl;
    cout<<"For Division Enter /"<<endl;
    cout<<"For sin value Enter s"<<endl;
    cout<<"For cos value Enter c"<<endl;
    cout<<"For tan value Enter t"<<endl;
    cout<<"For log value Enter l"<<endl;
    cout<<"For factorial value Enter f"<<endl;
    char c;
    cin>>c;
    if (c=='s' || c=='c' || c=='t' ||c=='l' || c=='f'){
        float k;
        cout<<"Enter the number: "<<endl;
        cin>>k;
        a.setVAlue(k);
        a.Value(c);
    }
    else{
        float x,y;
        cout<<"Enter two numbers "<<endl;
        cin>>x>>y;
        a.Setdata(x,y);
        a.calculate(c);
        
    }

    return 0;
}