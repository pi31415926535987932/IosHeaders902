/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:46 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface MPUsageStatistics : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _domain;
	NSString* _lastAggregateStatisticsDisplayCountKey;
	double _lastAggregateStatisticsDisplayCountTime;

}
+(id)sharedStatistics;
-(void)incrementViewDisplayCountForViewController:(id)arg1 ;
-(void)incrementViewDisplayCountForKey:(id)arg1 ;
-(void)setAggregateStatisticsDomain:(id)arg1 ;
-(id)init;
-(id)domain;
@end

