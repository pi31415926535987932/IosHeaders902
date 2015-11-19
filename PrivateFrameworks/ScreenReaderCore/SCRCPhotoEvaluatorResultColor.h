/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCPhotoEvaluatorResult.h>

@interface SCRCPhotoEvaluatorResultColor : SCRCPhotoEvaluatorResult {

	float _redLevel;
	float _blueLevel;
	float _greenLevel;

}

@property (nonatomic,readonly) float redLevel;                //@synthesize redLevel=_redLevel - In the implementation block
@property (nonatomic,readonly) float blueLevel;               //@synthesize blueLevel=_blueLevel - In the implementation block
@property (nonatomic,readonly) float greenLevel;              //@synthesize greenLevel=_greenLevel - In the implementation block
-(id)humanReadableResult;
-(id)initWithRedLevel:(float)arg1 blueLevel:(float)arg2 greenLevel:(float)arg3 ;
-(float)redLevel;
-(float)blueLevel;
-(float)greenLevel;
@end

