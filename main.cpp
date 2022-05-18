#include <iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;

int main( int argc, char** argv )
{
    Eigen::Matrix4f m;
    m << 1, 2, 3, 4,
            5, 6, 7, 8,
            9, 10,11,12,
            13,14,15,16;

    
    cout << "m.leftCols(2) =" << endl << m.leftCols(2) << endl << endl;
    cout << "m.bottomRows<2>() =" << endl << m.bottomRows<2>() << endl << endl;
    m.topLeftCorner(1,3) = m.bottomRightCorner(3,1).transpose();
    cout << "After assignment, m = " << endl << m << endl;
}
