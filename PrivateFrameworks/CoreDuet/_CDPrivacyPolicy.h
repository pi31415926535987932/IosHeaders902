/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _CDPrivacyPolicy : NSObject {

	char canPersistOnStorage;
	double temporalPrecision;

}

@property (nonatomic,readonly) char canPersistOnStorage; 
@property (nonatomic,readonly) double temporalPrecision; 
+(id)sharedPrivacyPolicy;
-(id)init;
-(id)description;
-(double)temporalPrecision;
-(char)canPersistOnStorage;
-(id)initWithTemporalPrecision:(double)arg1 canPersistOnStorage:(char)arg2 ;
@end

