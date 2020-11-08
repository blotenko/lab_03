#include <iostream>
#include <cmath>
#define PI 3.14159265

using namespace std;

/*
 №9
 Визначити довжину кривої, заданої у полярних координатах. Початковий і кінцевий кути 𝑎, 𝑏 задаються користувачем. Формула

 𝐿 = ba∫ √𝑟′(𝑡)2 + 𝑟(𝑡)2
 */


// функция для интеграл
double func(double x)
{
    float r = (3*(1+sin(x)));
    float r1 =(3*cos(x));
    return sqrt(pow(r,2)+pow(r1,2));
}

void integral(double a, double b){
    double Integral = 0.0;
    double h = 0.1;//  шаг интегрирования
    double n;//  число разбиений
    n = (b - a) / h;
    for(int i = 1; i <= n; i++)// вычисляем интеграл по формуле центральных прямугольников
      Integral = Integral + h * func(a + h * (i - 0.5));
    cout << "Integral = " << Integral << "\n";
}

void task_11(){
    //double Integral = 0.0;
    double a, b ;
    cout<<"a : ";
    cin>>a;
    cout<<"b : ";
    cin>>b;
    integral(a,b);
}






/*
 №16
 Дано функцію 𝑓(𝑥). Визначити, чи є вона періодичною, якщо так – визначити період.
 */
const float pi=3.1415;
 
float func(float x) {
        return (pow(-1,x));
       //return (pow(x,2));
         //return (cos(x));
        //return (cos(x)/sin(x));


}

void task_16_1(){
    float endP = 20*pi;
    for(float x = 1; x<=(endP); x++){
        float per;
        for(per = pi; per<=(endP); per=per+pi){
            if((int)(func(x)*1000)==(int)(func(x+per)*1000)){
                cout<<"Перiод функцii : "<<per<<endl;
                break;
            }
            
        }
        if(per<=(endP+pi)) {
            break;
        }
        else if(per>=(endP)) cout<<"Функцiя не перiодична"<<endl;
    }

}

void task_16_2(){
    float endP = 100;
    for(float x = 1; x<=(endP); x++){
        float per;
        for(per = 1; per<=endP; per++){
            if((int)(func(x))==(int)(func(x+per))){
                cout<<"Перiод функцii : "<<per<<endl;
                break;
            }
        }
        if(per<endP) break;
        else if(per>=(endP)){
            cout<<"Функцiя не перiодична"<<endl;
            break;
            
        }
    }

}
    
    
int main() {
    //task_16_2();
    //task_16_1();
    task_11();
    
return 0;
}
