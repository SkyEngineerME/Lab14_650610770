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
    double sum = 0,Nd = N,GeoTime = 1,MinusMean = 0,mean = 0,STD = 0,GeoMean = 0,Harmonic = 0,FlacPlus =0,max,min;
    max = A[0],min = A[0];

    for(int i = 0; i < N; i++){
      sum += A[i];
    }
    mean = sum/Nd;

    for(int i = 0; i < N; i++){
      GeoTime *= A[i];
    }
    for(int i = 0; i < N; i++){
      MinusMean += pow(A[i]-mean,2);
    }
    STD = sqrt(MinusMean/(Nd));
    GeoMean = pow(GeoTime,1/Nd);

    for(int i = 0; i < N; i++){
      FlacPlus += 1/A[i];
    }
    Harmonic = N/FlacPlus;
    
    for(int i = 0; i < N; i++){
      if(max < A[i]) max = A[i];
      else;
    }
    for(int i = 0; i < N; i++){
      if(min > A[i]) min = A[i];
      else;
    }

    B[0] = mean;
    B[1] = STD;
    B[2] = GeoMean;
    B[3] = Harmonic;
    B[4] = max;
    B[5] = min;
}
    
