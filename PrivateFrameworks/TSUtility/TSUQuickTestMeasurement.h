/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@class TSMTraceBuffer, NSDictionary;

@interface TSUQuickTestMeasurement : NSObject {

	TSMTraceBuffer* mBuffer;
	NSDictionary* mPrevious;

}
+(id)sharedManager;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_singletonAlloc;
-(id)p_niceString:(unsigned long long)arg1 withPrefix:(id)arg2 ;
-(id)getPreviousTimeForKey:(id)arg1 ;
-(id)displayTime:(unsigned long long)arg1 forClassAndMethodName:(id)arg2 ;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setup;
-(void)teardown;
@end

