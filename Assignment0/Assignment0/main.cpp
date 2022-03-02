#include<cmath>
#include<Eigen/Core>
#include<Eigen/Dense>
#include<iostream>

const double pi = acos(-1.0);
const double DEG2RAD = pi / 180.0;

int main(){
    /* 
    * PA 0
    */
    // TO DO: Define point P
    // TO DO: Define rotation matrix M
    // TO DO: M * P
    Eigen::Vector3f P(2.0, 1.0, 1.0);
    Eigen::Matrix3f M;

    double rad = 45.0 * DEG2RAD;

    M << cos(rad), -sin(rad), 1,
    sin(rad), cos(rad), 2,
    0, 0, 1;

    P = M * P;

    std::cout << P << "\n";

    return 0;
}