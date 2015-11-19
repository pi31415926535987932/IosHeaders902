/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCStateOperation.h>

@interface MCStateOperationScalarSet : MCStateOperation {

	float _scalar;

}

@property (assign,nonatomic) float scalar;              //@synthesize scalar=_scalar - In the implementation block
+(id)stateOperationForTargetPlugObjectID:(id)arg1 withStateKey:(id)arg2 andScalar:(float)arg3 ;
-(void)setScalar:(float)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(float)scalar;
-(id)description;
-(id)imprint;
@end

