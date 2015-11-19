/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSNumber, NSDate;

@interface DAStatusReport : NSObject {

	char _syncingAllowed;
	NSString* _persistentUUID;
	NSString* _displayName;
	NSString* _accountType;
	NSNumber* _timeSpan;
	NSNumber* _timeInNetworking;
	NSNumber* _averageHBI;
	NSNumber* _successfulRequests;
	NSNumber* _failedNetworkRequests;
	NSNumber* _failedProtocolRequests;
	NSNumber* _downloadedElements;
	NSNumber* _uploadedElements;
	NSNumber* _falseMoreAvailableCount;
	NSString* _protocolVersion;
	NSDate* _creationDate;
	int _numHBIDataPoints;

}

@property (nonatomic,retain) NSString * persistentUUID;                       //@synthesize persistentUUID=_persistentUUID - In the implementation block
@property (nonatomic,retain) NSString * displayName;                          //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * accountType;                          //@synthesize accountType=_accountType - In the implementation block
@property (nonatomic,retain) NSNumber * timeSpan;                             //@synthesize timeSpan=_timeSpan - In the implementation block
@property (nonatomic,retain) NSNumber * timeInNetworking;                     //@synthesize timeInNetworking=_timeInNetworking - In the implementation block
@property (nonatomic,retain) NSNumber * averageHBI;                           //@synthesize averageHBI=_averageHBI - In the implementation block
@property (nonatomic,retain) NSNumber * successfulRequests;                   //@synthesize successfulRequests=_successfulRequests - In the implementation block
@property (nonatomic,retain) NSNumber * failedNetworkRequests;                //@synthesize failedNetworkRequests=_failedNetworkRequests - In the implementation block
@property (nonatomic,retain) NSNumber * failedProtocolRequests;               //@synthesize failedProtocolRequests=_failedProtocolRequests - In the implementation block
@property (nonatomic,retain) NSNumber * downloadedElements;                   //@synthesize downloadedElements=_downloadedElements - In the implementation block
@property (nonatomic,retain) NSNumber * uploadedElements;                     //@synthesize uploadedElements=_uploadedElements - In the implementation block
@property (nonatomic,retain) NSNumber * falseMoreAvailableCount;              //@synthesize falseMoreAvailableCount=_falseMoreAvailableCount - In the implementation block
@property (nonatomic,retain) NSString * protocolVersion;                      //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (assign,nonatomic) char syncingAllowed;                             //@synthesize syncingAllowed=_syncingAllowed - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                           //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) int numHBIDataPoints;                            //@synthesize numHBIDataPoints=_numHBIDataPoints - In the implementation block
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(id)init;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(NSString *)accountType;
-(void)noteTimeSpentInNetworking:(double)arg1 ;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg1 ;
-(void)noteFailedNetworkRequest;
-(void)noteFailedProtocolRequest;
-(void)setSyncingAllowed:(char)arg1 ;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg1 numUploadedElements:(int)arg2 ;
-(void)mergeStatusReport:(id)arg1 ;
-(void)noteFalseMoreAvailableResponse;
-(void)noteNewHBIDataPoint:(int)arg1 ;
-(void)setTimeSpan:(NSNumber *)arg1 ;
-(void)setTimeInNetworking:(NSNumber *)arg1 ;
-(void)setAverageHBI:(NSNumber *)arg1 ;
-(void)setSuccessfulRequests:(NSNumber *)arg1 ;
-(void)setFailedNetworkRequests:(NSNumber *)arg1 ;
-(void)setFailedProtocolRequests:(NSNumber *)arg1 ;
-(void)setDownloadedElements:(NSNumber *)arg1 ;
-(void)setUploadedElements:(NSNumber *)arg1 ;
-(void)setFalseMoreAvailableCount:(NSNumber *)arg1 ;
-(NSNumber *)timeSpan;
-(NSNumber *)timeInNetworking;
-(NSNumber *)averageHBI;
-(NSNumber *)successfulRequests;
-(NSNumber *)failedNetworkRequests;
-(NSNumber *)failedProtocolRequests;
-(NSNumber *)downloadedElements;
-(NSNumber *)uploadedElements;
-(NSNumber *)falseMoreAvailableCount;
-(char)syncingAllowed;
-(int)numHBIDataPoints;
-(void)setNumHBIDataPoints:(int)arg1 ;
-(void)setProtocolVersion:(NSString *)arg1 ;
-(NSString *)protocolVersion;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)persistentUUID;
-(void)setPersistentUUID:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setAccountType:(NSString *)arg1 ;
@end
