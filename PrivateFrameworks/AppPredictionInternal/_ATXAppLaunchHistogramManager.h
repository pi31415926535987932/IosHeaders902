/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _ATXAppLaunchHistogramManager : NSObject {

	NSMutableDictionary* _histograms;

}
+(id)sharedInstance;
+(void)resetSharedInstance;
-(id)init;
-(id)pathForLaunchType:(unsigned)arg1 ;
-(id)histogramForLaunchType:(unsigned)arg1 ;
@end

