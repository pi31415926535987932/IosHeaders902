/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVLeafDataPayload.h>
@class NSURL, NSData, NSString, NSArray;


@protocol CoreDAVLeafDataPayload <NSObject>
@property (nonatomic,retain) NSURL * serverID; 
@property (nonatomic,readonly) NSData * dataPayload; 
@property (nonatomic,readonly) NSString * syncKey; 
@property (nonatomic,readonly) NSArray * childrenOrder; 
@optional
-(NSArray *)childrenOrder;

@required
-(NSData *)dataPayload;
-(id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;
-(NSURL *)serverID;
-(void)setServerID:(id)arg1;
-(NSString *)syncKey;

@end


@class NSURL, NSData, NSString, NSArray;

@interface CoreDAVLeafDataPayload : NSObject <CoreDAVLeafDataPayload> {

	NSURL* _serverID;
	NSString* _syncKey;
	NSData* _dataPayload;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSURL * serverID;                       //@synthesize serverID=_serverID - In the implementation block
@property (nonatomic,readonly) NSData * dataPayload;                 //@synthesize dataPayload=_dataPayload - In the implementation block
@property (nonatomic,readonly) NSString * syncKey;                   //@synthesize syncKey=_syncKey - In the implementation block
@property (nonatomic,readonly) NSArray * childrenOrder; 
-(void)dealloc;
-(NSData *)dataPayload;
-(id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5 ;
-(NSURL *)serverID;
-(void)setServerID:(NSURL *)arg1 ;
-(NSString *)syncKey;
@end

