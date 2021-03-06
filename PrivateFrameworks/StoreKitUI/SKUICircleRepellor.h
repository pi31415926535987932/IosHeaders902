/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class PKPhysicsBody;

@interface SKUICircleRepellor : NSObject {

	float _bufferSize;
	CGPoint _center;
	PKPhysicsBody* _physicsBody;
	float _radius;

}

@property (assign,nonatomic) float bufferSize;                         //@synthesize bufferSize=_bufferSize - In the implementation block
@property (assign,nonatomic) CGPoint center;                           //@synthesize center=_center - In the implementation block
@property (nonatomic,retain) PKPhysicsBody * physicsBody;              //@synthesize physicsBody=_physicsBody - In the implementation block
@property (assign,nonatomic) float radius;                             //@synthesize radius=_radius - In the implementation block
-(id)description;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(float)bufferSize;
-(void)setRadius:(float)arg1 ;
-(float)radius;
-(void)setBufferSize:(float)arg1 ;
-(void)setPhysicsBody:(PKPhysicsBody *)arg1 ;
-(PKPhysicsBody *)physicsBody;
@end

