/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateBridge.framework/SoftwareUpdateBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SUBProgress : NSObject <NSSecureCoding> {

	char _isDone;
	NSString* _phase;
	float _portionComplete;
	double _estimatedTimeRemaining;

}

@property (nonatomic,retain) NSString * phase;                           //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) float portionComplete;                      //@synthesize portionComplete=_portionComplete - In the implementation block
@property (assign,nonatomic) double estimatedTimeRemaining;              //@synthesize estimatedTimeRemaining=_estimatedTimeRemaining - In the implementation block
@property (assign,nonatomic) char isDone;                                //@synthesize isDone=_isDone - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)phase;
-(void)setPhase:(NSString *)arg1 ;
-(char)isDone;
-(void)setIsDone:(char)arg1 ;
-(double)estimatedTimeRemaining;
-(float)portionComplete;
-(void)setPortionComplete:(float)arg1 ;
-(void)setEstimatedTimeRemaining:(double)arg1 ;
@end

