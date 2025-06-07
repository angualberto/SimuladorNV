#ifndef BLOCHUTILS_HPP
#define BLOCHUTILS_HPP

#include <Eigen/Dense>

class BlochUtils {
public:
    static Eigen::Vector3d normalize(const Eigen::Vector3d& vector);
    static Eigen::Vector3d rotate(const Eigen::Vector3d& vector, double theta, const Eigen::Vector3d& axis);
};

#endif // BLOCHUTILS_HPP