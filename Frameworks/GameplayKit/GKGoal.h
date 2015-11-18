/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:22:46 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GKPath, NSArray;

@interface GKGoal : NSObject <NSCopying> {

	int _type;
	GKPath* _path;
	NSArray* _obstacles;
	NSArray* _agents;
	double _time;
	float _angle;
	float _distance;
	float _speed;
	char _forward;

}
+(id)goalToSeekAgent:(id)arg1 ;
+(id)goalToFleeAgent:(id)arg1 ;
+(id)goalToAvoidObstacles:(id)arg1 maxPredictionTime:(double)arg2 ;
+(id)goalToAvoidAgents:(id)arg1 maxPredictionTime:(double)arg2 ;
+(id)goalToSeparateFromAgents:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3 ;
+(id)goalToAlignWithAgents:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3 ;
+(id)goalToCohereWithAgents:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3 ;
+(id)goalToReachTargetSpeed:(float)arg1 ;
+(id)goalToWander:(float)arg1 ;
+(id)goalToInterceptAgent:(id)arg1 maxPredictionTime:(double)arg2 ;
+(id)goalToFollowPath:(id)arg1 maxPredictionTime:(double)arg2 forward:(char)arg3 ;
+(id)goalToStayOnPath:(id)arg1 maxPredictionTime:(double)arg2 ;
-(char)isTargetSpeedGoal;
-(2)getForce:(double)arg1 agent:(id)arg2 ;
-(id)initToSeekAgent:(id)arg1 ;
-(id)initToFleeAgent:(id)arg1 ;
-(id)initToAvoidObstacles:(id)arg1 maxPredictionTime:(double)arg2 ;
-(id)initToAvoidAgents:(id)arg1 maxPredictionTime:(double)arg2 ;
-(id)initToSeparateFromAgents:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3 ;
-(id)initToAlignWithAgents:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3 ;
-(id)initToCohereWithAgents:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3 ;
-(id)initToReachTargetSpeed:(float)arg1 ;
-(id)initToWander:(float)arg1 ;
-(id)initToInterceptAgent:(id)arg1 maxPredictionTime:(double)arg2 ;
-(id)initToFollowPath:(id)arg1 maxPredictionTime:(double)arg2 forward:(char)arg3 ;
-(id)initToStayOnPath:(id)arg1 maxPredictionTime:(double)arg2 ;
-(id)init;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)speed;
@end

