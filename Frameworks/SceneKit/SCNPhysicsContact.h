/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:46:59 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class SCNNode;

@interface SCNPhysicsContact : NSObject {

	SCNNode* _nodeA;
	SCNNode* _nodeB;
	SCNVector3 _contactPoint;
	SCNVector3 _contactNormal;
	float _collisionImpulse;
	float _distance;
	int _updateCount;

}

@property (nonatomic,readonly) SCNNode * nodeA; 
@property (nonatomic,readonly) SCNNode * nodeB; 
@property (nonatomic,readonly) SCNVector3 contactPoint; 
@property (nonatomic,readonly) SCNVector3 contactNormal; 
@property (nonatomic,readonly) float collisionImpulse; 
@property (nonatomic,readonly) float penetrationDistance; 
+(id)_contactWithManifold:(const btPersistentManifold*)arg1 index:(int)arg2 ;
-(void)_setupWithManifold:(const btPersistentManifold*)arg1 index:(int)arg2 point:(const btManifoldPoint*)arg3 ;
-(void)_fillNodeA:(id)arg1 nodeB:(id)arg2 contactPoint:(SCNVector3)arg3 collisionImpulse:(SCNVector3)arg4 distance:(float)arg5 ;
-(void)_fillNodeA:(id)arg1 nodeB:(id)arg2 ;
-(SCNNode *)nodeA;
-(SCNNode *)nodeB;
-(SCNVector3)contactNormal;
-(float)collisionImpulse;
-(float)penetrationDistance;
-(void)_prepareUpdate;
-(char)_shouldPostUpdate;
-(void)dealloc;
-(id)description;
-(SCNVector3)contactPoint;
@end

