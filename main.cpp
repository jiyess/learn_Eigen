#include <iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;

int main( int argc, char** argv )
{
    MatrixXf m(4,4);
    VectorXf v(4);
    v = m * v;

    cout<<v<<endl;
    return 0;
}
