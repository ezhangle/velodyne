

#ifndef __POINTCLOUDXYZIR_H
#define __POINTCLOUDXYZIR_H

#include <velodyne_pointcloud/rawdata.h>

namespace velodyne_pointcloud 
{
  class PointcloudXYZIR : public velodyne_rawdata::DataContainerBase 
  {
  public:
    velodyne_rawdata::VPointCloud::Ptr pc;

    PointcloudXYZIR() : pc(new velodyne_rawdata::VPointCloud) {}
  
    virtual void addPoint(const velodyne_rawdata::VPoint& point);
    virtual void finalize();
  };
}
#endif //__POINTCLOUDXYZIR_H
