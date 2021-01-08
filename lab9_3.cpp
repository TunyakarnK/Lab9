#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int count;
    float sum,dev;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        dev += pow(atof(textline.c_str()),2);
        count++;
    }
    cout << "Number of data = "<< count;
    cout << setprecision(3);
    cout << "\nMean = "<< sum/count;
    cout << "\nStandard deviation = "<< pow(((dev/count)-pow(sum/count,2)),0.5);
}
