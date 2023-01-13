#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double A[],int N ,double B[])
{
    double sum,GeoTime,MinusMean,mean,STD,GeoMean,Harmonic,max,min;
    for(int i = 0; i < N; i++){
      sum += A[i];
    }

    mean = sum/N;

    for(int i = 0; i < N; i++){
      GeoTime *= A[i];
    }
     for(int i = 0; i < N; i++){
      MinusMean += pow(A[i]-mean,2);
    }
    STD = pow(MinusMean/(N-1))
    


    B[0] = mean;
    cout << sum;
}
