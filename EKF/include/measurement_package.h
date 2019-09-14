/*
 * Author: Jun Zhu, zhujun981661@gmail.com
 */

#ifndef MEASUREMENT_PACKAGE_H_
#define MEASUREMENT_PACKAGE_H_

#include <Eigen/Dense>


class MeasurementPackage {
public:
  long long timestamp_;

  enum SensorType{
    LIDAR,
    RADAR
  } sensor_type_;

  Eigen::VectorXd raw_measurements_;
};

#endif /* MEASUREMENT_PACKAGE_H_ */
