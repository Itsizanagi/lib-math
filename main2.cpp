#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>

int main(){

    // float num = M_PI;

    // printf("%.16f", num);

    int num = 0xa;
    int set = 10;
    int larg = 30;

    std::cout << "valor em decimal: "<< num << std::endl;
    std::cout << "valor em hexadecimal: " <<  std::setbase(16)<< set << std::endl;
    std::cout << "largura: " <<  std::setw(10) << larg << std::endl;

    double cont = M_PI;
    std::cout.precision(10); // valor normal ( - 1)
    std::cout << "valor de ponto flutuante: "<< cont << std::endl;

    return 0;
}
