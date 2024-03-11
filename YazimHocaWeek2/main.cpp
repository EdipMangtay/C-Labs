#include"iostream"
using namespace std;


class Calculate{
public:
    double pi =3.14;
    double R;
    double H;
    Calculate(double p, double r, double h){
        pi =p;
        R = r;
        H=h;
    }
    void W(){
        double volume =(pi*R*R*H);
        cout <<volume;
    }
    
};


int main(){
    Calculate(3.14, 4, 6).W();
    
    
}
