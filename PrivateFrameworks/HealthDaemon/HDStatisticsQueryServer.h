/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>

@interface HDStatisticsQueryServer : HDQueryServer {

	unsigned _statisticsOptions;
	unsigned _mergeStrategy;

}

@property (nonatomic,readonly) unsigned statisticsOptions;              //@synthesize statisticsOptions=_statisticsOptions - In the implementation block
@property (nonatomic,readonly) unsigned mergeStrategy;                  //@synthesize mergeStrategy=_mergeStrategy - In the implementation block
-(id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 healthDaemon:(id)arg6 ;
-(unsigned)mergeStrategy;
-(void)_queue_start;
-(void)_queue_fetchAndDeliverStatistics;
-(id)_quantityType;
-(id)_statisticsForDataType:(id)arg1 restrictedSourceIdentifier:(id)arg2 filter:(id)arg3 error:(id*)arg4 ;
-(unsigned)statisticsOptions;
@end

