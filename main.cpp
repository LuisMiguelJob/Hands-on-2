#include "DataSet.h"
#include "DiscreteMaths.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    DataSet ds;
    DiscreteMaths dm;
    vector<float>x;
    vector<float>y;

    x = ds.getX();
    //cout << x[1] << endl;
    y = ds.getY();
    //cout << y[0] << endl;

    //cout << "sumX=" << dm.sumX(x) << endl;
    //cout << "sumY=" << dm.sumY(y) << endl;
    //cout << "sumXY=" << dm.sumXY(x,y) << endl;
    //cout << "sumXsumY=" << dm.sumXsumY(x,y) << endl;

    /// cosas agregadas
    //cout << "SumX al cuadrado=" << dm.SumX2(x) << endl;
    //cout << "SumXsumX=" << dm.sumXsumX(x) << endl;

    cout << "Calculo de B1" << endl;
    float a = (x.size() * dm.sumXY(x, y) - dm.sumXsumY(x, y));
    float b = ((x.size() * dm.SumX2(x) - dm.sumXsumX(x)));
    float b1 = a/b;
    cout << "b1=" << b1 << endl;

    cout << "Calculo de B0" << endl;
    float b0 = ((dm.sumY(y) - (b1 * dm.sumX(x))) / x.size());
    cout << "b0=" << b0 << endl;

    cout << "Calculo Y" << endl;
    float calcY = b0 + b1 * 60;
    cout << "Y=" << calcY << endl;

    return 0;
}
