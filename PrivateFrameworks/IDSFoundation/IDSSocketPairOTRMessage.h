/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData;

@interface IDSSocketPairOTRMessage : IDSSocketPairMessage {

	unsigned _offset;
	unsigned char _versionNumber;
	char _encrypted;
	char _shouldEncrypt;
	unsigned char _protectionClass;
	unsigned short _streamID;
	unsigned short _priority;
	unsigned _sequenceNumber;
	NSData* _data;

}

@property (nonatomic,readonly) unsigned char versionNumber;                //@synthesize versionNumber=_versionNumber - In the implementation block
@property (nonatomic,readonly) char encrypted;                             //@synthesize encrypted=_encrypted - In the implementation block
@property (nonatomic,readonly) char shouldEncrypt;                         //@synthesize shouldEncrypt=_shouldEncrypt - In the implementation block
@property (nonatomic,readonly) unsigned char protectionClass;              //@synthesize protectionClass=_protectionClass - In the implementation block
@property (assign,nonatomic) unsigned short streamID;                      //@synthesize streamID=_streamID - In the implementation block
@property (nonatomic,readonly) unsigned short priority;                    //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) unsigned sequenceNumber;                    //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,retain,readonly) NSData * data; 
-(unsigned char)versionNumber;
-(unsigned char)command;
-(void)dealloc;
-(id)description;
-(NSData *)data;
-(unsigned short)priority;
-(char)encrypted;
-(char)shouldEncrypt;
-(unsigned short)streamID;
-(void)setStreamID:(unsigned short)arg1 ;
-(unsigned)sequenceNumber;
-(unsigned char)protectionClass;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(id)initWithVersion:(unsigned char)arg1 encrypted:(char)arg2 shouldEncrypt:(char)arg3 protectionClass:(unsigned char)arg4 streamID:(unsigned short)arg5 priority:(unsigned short)arg6 sequenceNumber:(unsigned)arg7 data:(id)arg8 ;
@end

