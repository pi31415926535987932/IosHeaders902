/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <identityservicesd/identityservicesd-Structs.h>
@class NSData;

@interface IDSStunMessage : NSObject {

	int _type;
	unsigned short _len;
	NSData* _transactionID;
	IDSStunAttribute _attributes[20];
	int _numAttribute;

}

@property (nonatomic,readonly) int type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSData * transactionID;              //@synthesize transactionID=_transactionID - In the implementation block
-(char)bindingRequestToBuffer:(char*)arg1 outputLength:(int*)arg2 transactionID:(char*)arg3 nominateCount:(int)arg4 userName:(char*)arg5 usernameLen:(int)arg6 sendTime:(unsigned short)arg7 ;
-(char)getAttribute:(unsigned short)arg1 attribute:(IDSStunAttribute*)arg2 ;
-(char)read:(char*)arg1 inputLength:(int)arg2 internal:(char)arg3 ;
-(char)quickRelayStunMessageToBuffer:(char*)arg1 outputLength:(int*)arg2 stunMessageDictionary:(id)arg3 ;
-(char)bindingResponseToBuffer:(char*)arg1 outputLength:(int*)arg2 transactionID:(id)arg3 nominateCount:(int)arg4 echoTime:(unsigned short)arg5 delay:(unsigned short)arg6 ;
-(char)read:(char*)arg1 inputLength:(int)arg2 ;
-(char)allocationRequestWithDictionaryToBuffer:(id)arg1 outputBuffer:(char*)arg2 outputLength:(int*)arg3 lifeTime:(int)arg4 ;
-(char)channelBindRequestWithDictionaryToBuffer:(id)arg1 outputBuffer:(char*)arg2 outputLength:(int*)arg3 channelNumber:(unsigned short)arg4 ;
-(char)refreshRequestToBuffer:(char*)arg1 outputLength:(int*)arg2 lifeTime:(int)arg3 ;
-(char)isMatchingResponse:(id)arg1 ;
-(char)write:(char*)arg1 outputLength:(int*)arg2 ;
-(void)_addBinaryDataAttribute:(int)arg1 value:(id)arg2 ;
-(void)_addUInt16Attribute:(int)arg1 value:(unsigned short)arg2 ;
-(void)_addUInt64Attribute:(int)arg1 value:(unsigned long long)arg2 ;
-(char)write:(char*)arg1 outputLength:(int*)arg2 internal:(char)arg3 ;
-(char)hasAttribute:(unsigned short)arg1 ;
-(void)dealloc;
-(int)type;
-(id)initWithType:(unsigned short)arg1 ;
-(void)setTransactionID:(NSData *)arg1 ;
-(NSData *)transactionID;
-(char)addAttribute:(IDSStunAttribute*)arg1 ;
@end

