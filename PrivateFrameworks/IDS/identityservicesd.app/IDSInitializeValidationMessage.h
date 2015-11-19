/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <IDSFoundation/IDSBaseMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSNumber;

@interface IDSInitializeValidationMessage : IDSBaseMessage <NSCopying> {

	NSData* _sessionInfoRequest;
	NSData* _responseSessionInfo;
	NSNumber* _responseTTL;
	NSData* _pushToken;

}

@property (nonatomic,copy) NSData * sessionInfoRequest;               //@synthesize sessionInfoRequest=_sessionInfoRequest - In the implementation block
@property (nonatomic,copy) NSData * pushToken;                        //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,copy) NSData * responseSessionInfo;              //@synthesize responseSessionInfo=_responseSessionInfo - In the implementation block
@property (nonatomic,copy) NSNumber * responseTTL;                    //@synthesize responseTTL=_responseTTL - In the implementation block
-(NSData *)responseSessionInfo;
-(NSNumber *)responseTTL;
-(void)setResponseSessionInfo:(NSData *)arg1 ;
-(void)setResponseTTL:(NSNumber *)arg1 ;
-(int)command;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPushToken:(NSData *)arg1 ;
-(NSData *)pushToken;
-(id)bagKey;
-(char)wantsHTTPHeaders;
-(char)wantsBinaryPush;
-(char)wantsCompressedBody;
-(char)wantsBagKey;
-(double)anisetteHeadersTimeout;
-(int)responseCommand;
-(id)additionalMessageHeaders;
-(void)handleResponseDictionary:(id)arg1 ;
-(NSData *)sessionInfoRequest;
-(void)setSessionInfoRequest:(NSData *)arg1 ;
-(id)requiredKeys;
-(id)messageBody;
@end
