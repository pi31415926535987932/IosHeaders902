/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:03 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface ADOfflineSAMetricsManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _queue;              //@synthesize queue=_queue - In the implementation block
+(id)_offlineMetricsURL;
-(void)saveOfflineMetrics:(id)arg1 ;
-(void)readOfflineMetricsAndSendToServerUsingBlock:(/*^block*/id)arg1 ;
-(id)_offlineSAMetricsDicts;
-(void)_deleteOfflineSAMetrics;
-(id)init;
-(NSObject*<OS_dispatch_queue>)_queue;
@end

