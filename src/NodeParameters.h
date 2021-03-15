#include <ros/ros.h>
#include <norlab_icp_mapper/Mapper.h>

typedef norlab_icp_mapper::PM PM;
typedef norlab_icp_mapper::T T;

class NodeParameters
{
private:
	void retrieveParameters(const ros::NodeHandle& nodeHandle);

	void validateParameters();

	void parseComplexParameters();

	void parseInitialMapPose();

public:
	std::string odomFrame;
	std::string robotFrame;
	std::string initialMapFileName;
	std::string initialMapPoseString;
	PM::TransformationParameters initialMapPose;
	std::string finalMapFileName;
	std::string finalTrajectoryFileName;
	std::string icpConfig;
	std::string inputFiltersConfig;
	std::string mapPostFiltersConfig;
	std::string mapUpdateCondition;
	float mapUpdateOverlap;
	float mapUpdateDelay;
	float mapUpdateDistance;
	float mapPublishRate;
	float mapTfPublishRate;
	float maxIdleTime;
	float minDistNewPoint;
	float sensorMaxRange;
	float priorDynamic;
	float thresholdDynamic;
	float beamHalfAngle;
	float epsilonA;
	float epsilonD;
	float alpha;
	float beta;
	bool is3D;
	bool isOnline;
	bool computeProbDynamic;
	bool isMapping;
	bool saveMapCellsOnHardDrive;

	NodeParameters(ros::NodeHandle privateNodeHandle);
};
