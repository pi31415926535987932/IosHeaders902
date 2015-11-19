/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface _CDEventStreamProperties : NSObject {

	NSString* name;
	NSString* knowledgeBaseName;
	NSString* descriptionString;
	int valueType;
	char futureEvent;
	char setupOnDemand;
	char canBeSpeculative;
	double timeToLive;
	char canPersistOnStorage;
	double temporalPrecision;
	int deResolitionPolicy;
	NSString* dataProtectionClass;
	int totalSizeLimit;
	int eventsPerPeriod;
	double period;
	char canBeShared;
	int sharingPolicy;
	double maxLatency;
	char canSendToServer;
	char hasStats;
	int statisticsType;
	char isInstant;
	char isHistorical;
	int pollingPeriod;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * knowledgeBaseName; 
@property (nonatomic,readonly) NSString * descriptionString; 
@property (nonatomic,readonly) int valueType; 
@property (nonatomic,readonly) char futureEvent; 
@property (nonatomic,readonly) char setupOnDemand; 
@property (nonatomic,readonly) char canBeSpeculative; 
@property (nonatomic,readonly) double timeToLive; 
@property (nonatomic,readonly) char canPersistOnStorage; 
@property (nonatomic,readonly) double temporalPrecision; 
@property (nonatomic,readonly) int deResolitionPolicy; 
@property (nonatomic,readonly) NSString * dataProtectionClass; 
@property (nonatomic,readonly) int totalSizeLimit; 
@property (nonatomic,readonly) double period; 
@property (nonatomic,readonly) int eventsPerPeriod; 
@property (nonatomic,readonly) char canBeShared; 
@property (nonatomic,readonly) int sharingPolicy; 
@property (nonatomic,readonly) double maxLatency; 
@property (nonatomic,readonly) char canSendToServer; 
@property (nonatomic,readonly) char hasStats; 
@property (nonatomic,readonly) int statisticsType; 
@property (nonatomic,readonly) char isInstant; 
@property (nonatomic,readonly) char isHistorical; 
@property (nonatomic,readonly) int pollingPeriod; 
+(id)eventStreamPropertiesFromDictionary:(id)arg1 ;
-(char)canBeShared;
-(id)initFromDictionary:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(NSString *)knowledgeBaseName;
-(int)eventsPerPeriod;
-(int)totalSizeLimit;
-(double)temporalPrecision;
-(char)canPersistOnStorage;
-(char)futureEvent;
-(char)setupOnDemand;
-(char)canBeSpeculative;
-(int)deResolitionPolicy;
-(NSString *)dataProtectionClass;
-(int)sharingPolicy;
-(double)maxLatency;
-(char)canSendToServer;
-(char)hasStats;
-(int)statisticsType;
-(char)isInstant;
-(char)isHistorical;
-(int)pollingPeriod;
-(int)valueType;
-(NSString *)descriptionString;
-(double)timeToLive;
-(double)period;
@end

