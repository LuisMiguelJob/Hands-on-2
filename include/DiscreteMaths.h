#ifndef DISCRETEMATHS_H
#define DISCRETEMATHS_H
#include <vector>
#include <math.h>
#include <iostream>

class DiscreteMaths
{
    public:
        DiscreteMaths();
        float sumX(std::vector<float>);
        float sumY(std::vector<float>);
        float sumXY(std::vector<float>, std::vector<float>);
        float sumXsumY(std::vector<float>, std::vector<float>);

        /// Metodos implementados por mi

        float SumX2(std::vector<float>);
        float sumXsumX(std::vector<float>);
};

#endif // DISCRETEMATHS_H
