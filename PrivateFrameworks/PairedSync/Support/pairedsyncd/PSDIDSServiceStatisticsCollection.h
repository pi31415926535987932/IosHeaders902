/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/Support/pairedsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface PSDIDSServiceStatisticsCollection : NSObject {

	NSMutableDictionary* _statistics;
	NSString* _channelName;

}

@property (nonatomic,copy) NSString * channelName;              //@synthesize channelName=_channelName - In the implementation block
+(id)knownChannelNames;
+(id)statisticsCollectionWithChannelName:(id)arg1 statisticsDictionary:(id)arg2 ;
-(id)statisticsCollectionByDiffingStatisticsCollection:(id)arg1 ;
-(void)enumerateServiceStatisticsWithBlock:(/*^block*/id)arg1 ;
-(void)setChannelName:(NSString *)arg1 ;
-(void)addServiceStatistics:(id)arg1 ;
-(id)statisticsForServiceName:(id)arg1 ;
-(NSString *)channelName;
-(id)init;
-(id)description;
@end
