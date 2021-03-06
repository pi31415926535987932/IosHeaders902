/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NMSMessageCenter, NSString, NSData, NMSOutgoingResponse;

@interface NMSIncomingRequest : NSObject {

	char _expectsResponse;
	unsigned short _messageID;
	NMSMessageCenter* _messageCenter;
	NSString* _idsIdentifier;
	NSData* _data;
	unsigned _priority;
	NMSOutgoingResponse* _response;
	id _pbRequest;

}

@property (assign,nonatomic,__weak) NMSMessageCenter * messageCenter;              //@synthesize messageCenter=_messageCenter - In the implementation block
@property (assign,nonatomic) unsigned short messageID;                             //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                               //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,retain) NSData * data;                                        //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned priority;                                    //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) char expectsResponse;                                 //@synthesize expectsResponse=_expectsResponse - In the implementation block
@property (nonatomic,retain) NMSOutgoingResponse * response;                       //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) id pbRequest;                                         //@synthesize pbRequest=_pbRequest - In the implementation block
-(void)dealloc;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(unsigned)priority;
-(void)setPriority:(unsigned)arg1 ;
-(NMSOutgoingResponse *)response;
-(unsigned short)messageID;
-(void)setResponse:(NMSOutgoingResponse *)arg1 ;
-(id)pbRequest;
-(NSString *)idsIdentifier;
-(void)setPbRequest:(id)arg1 ;
-(NMSMessageCenter *)messageCenter;
-(void)setMessageCenter:(NMSMessageCenter *)arg1 ;
-(void)setMessageID:(unsigned short)arg1 ;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(void)setExpectsResponse:(char)arg1 ;
-(void)configureResponse;
-(char)expectsResponse;
@end

