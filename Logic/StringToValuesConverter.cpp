#include <QDebug>
#include <complex.h>
#include "vector"
#include <iomanip>
#include <iostream>

std::complex<double> toComplex(std::string strValue){
    bool isReal = true;

    std::string sRe = "";
    std::string sIm = "";

    double real = 1;
    double imag = 1;

    int i = 0;
    if (strValue[0] == '-'){
        i = 1;
        real = -1;
    }

    while (i < strValue.size()) {
        if (isdigit(strValue[i]) and isReal){
            sRe += strValue[i];
        } else{
            if (isdigit(strValue[i]) and isReal == false){
                sIm += strValue[i];
            } else{
                isReal = false;
            }

        }
        i++;
    }
    real *= stod(sRe);
    if (sIm == ""){
        imag = 0;
    }else{
        imag *= stod(sIm);
    }

    std::complex<double> complexValue = std::complex<double>(real, imag);
    return complexValue;

}


std::vector<std::string> toStrValueVector(std::string strValues){
    std::vector<std::string> strValuesVec;

    std::string str = "Ты пидор";
    qDebug() << str.c_str();

    bool isValue = false;

    std::string strValue = "";
    for (int i = 0; i < strValues.length(); i++) {
        if((strValues[i]) == '+' or (strValues[i]) == '-' or (strValues[i]) == '.' or
        isdigit(strValues[i])){
            isValue = true;
            strValue += strValues[i];
        }else{
            if (isValue){
                isValue = false;
                strValuesVec.push_back(strValue);
                strValue = "";
            }
        }
    }



    return strValuesVec;
}


std::vector<std::complex<double>> toValueVector(std::string str){
    std::vector<std::string> strValVector = toStrValueVector(str);
    std::vector<std::complex<double>> values;
    for (int i = 0; i < strValVector.size(); i++) {
        std::complex<double> value= toComplex(strValVector[i]);
        values.push_back(value);
    }
    return values;
}
