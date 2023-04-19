#include "DiscreteMaths.h"

DiscreteMaths::DiscreteMaths(){}

float DiscreteMaths::sumX(std::vector<float> vect)
{
    float totalX=0;

    for(int i=0; i < vect.size(); i++)
        totalX = totalX + vect[i];

    return totalX;
}

float DiscreteMaths::sumY(std::vector<float> vect)
{
    float totalY=0;

    for(int i=0; i < vect.size(); i++)
        totalY = totalY + vect[i];

    return totalY;
}


float DiscreteMaths::sumXY(std::vector<float> vect1, std::vector<float> vect2)
{
    float totalXY=0;

    for(int i=0; i < vect1.size(); i++)
        totalXY = totalXY + (vect1[i]*vect2[i]);

    return totalXY;
}

float DiscreteMaths::sumXsumY(std::vector<float> vect1, std::vector<float> vect2)
{
    return (sumX(vect1) * sumY(vect2));
}

/// Metodos implementados por mi

float DiscreteMaths::SumX2(std::vector<float> vect1){
    float totalX2 = 0;

    for(int i = 0;i < vect1.size();i++){
        totalX2 = totalX2 + pow(vect1[i], 2);
    }

    return totalX2;
}

float DiscreteMaths::sumXsumX(std::vector<float> vect1)
{
    return (sumX(vect1) * sumX(vect1));
}
