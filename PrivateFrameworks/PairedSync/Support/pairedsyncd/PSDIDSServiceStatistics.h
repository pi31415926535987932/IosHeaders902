/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/Support/pairedsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PSDIDSServiceStatistics : NSObject {

	NSString* _serviceName;
	int _messageCount;
	int _bytes;
	int _deliveredMessageCount;
	int _deliveredBytes;

}

@property (nonatomic,copy) NSString * serviceName;                   //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,nonatomic) int messageCount;                       //@synthesize messageCount=_messageCount - In the implementation block
@property (assign,nonatomic) int bytes;                              //@synthesize bytes=_bytes - In the implementation block
@property (assign,nonatomic) int deliveredMessageCount;              //@synthesize deliveredMessageCount=_deliveredMessageCount - In the implementation block
@property (assign,nonatomic) int deliveredBytes;                     //@synthesize deliveredBytes=_deliveredBytes - In the implementation block
+(id)statisticsWithServiceName:(id)arg1 statisticsDictionary:(id)arg2 ;
-(int)deliveredBytes;
-(int)deliveredMessageCount;
-(void)setBytes:(int)arg1 ;
-(void)setDeliveredBytes:(int)arg1 ;
-(void)setDeliveredMessageCount:(int)arg1 ;
-(id)statisticsByDiffingStatistics:(id)arg1 ;
-(NSString *)serviceName;
-(id)description;
-(int)bytes;
-(int)messageCount;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setMessageCount:(int)arg1 ;
@end

