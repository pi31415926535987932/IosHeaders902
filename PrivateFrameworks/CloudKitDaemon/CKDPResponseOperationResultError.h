/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:34 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPResponseOperationResultErrorClient, NSString, CKDPResponseOperationResultErrorExtension, CKDPResponseOperationResultErrorServer;

@interface CKDPResponseOperationResultError : PBCodable <NSCopying> {

	CKDPResponseOperationResultErrorClient* _clientError;
	NSString* _errorDescription;
	NSString* _errorInternal;
	NSString* _errorKey;
	CKDPResponseOperationResultErrorExtension* _extensionError;
	int _retryAfterSeconds;
	CKDPResponseOperationResultErrorServer* _serverError;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) char hasClientError; 
@property (nonatomic,retain) CKDPResponseOperationResultErrorClient * clientError;                    //@synthesize clientError=_clientError - In the implementation block
@property (nonatomic,readonly) char hasServerError; 
@property (nonatomic,retain) CKDPResponseOperationResultErrorServer * serverError;                    //@synthesize serverError=_serverError - In the implementation block
@property (nonatomic,readonly) char hasExtensionError; 
@property (nonatomic,retain) CKDPResponseOperationResultErrorExtension * extensionError;              //@synthesize extensionError=_extensionError - In the implementation block
@property (assign,nonatomic) char hasRetryAfterSeconds; 
@property (assign,nonatomic) int retryAfterSeconds;                                                   //@synthesize retryAfterSeconds=_retryAfterSeconds - In the implementation block
@property (nonatomic,readonly) char hasErrorDescription; 
@property (nonatomic,retain) NSString * errorDescription;                                             //@synthesize errorDescription=_errorDescription - In the implementation block
@property (nonatomic,readonly) char hasErrorKey; 
@property (nonatomic,retain) NSString * errorKey;                                                     //@synthesize errorKey=_errorKey - In the implementation block
@property (nonatomic,readonly) char hasErrorInternal; 
@property (nonatomic,retain) NSString * errorInternal;                                                //@synthesize errorInternal=_errorInternal - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasClientError;
-(CKDPResponseOperationResultErrorClient *)clientError;
-(char)hasServerError;
-(CKDPResponseOperationResultErrorServer *)serverError;
-(char)hasExtensionError;
-(char)hasRetryAfterSeconds;
-(int)retryAfterSeconds;
-(void)setClientError:(CKDPResponseOperationResultErrorClient *)arg1 ;
-(void)setErrorKey:(NSString *)arg1 ;
-(char)hasErrorKey;
-(NSString *)errorKey;
-(CKDPResponseOperationResultErrorExtension *)extensionError;
-(void)setServerError:(CKDPResponseOperationResultErrorServer *)arg1 ;
-(void)setErrorInternal:(NSString *)arg1 ;
-(void)setExtensionError:(CKDPResponseOperationResultErrorExtension *)arg1 ;
-(void)setRetryAfterSeconds:(int)arg1 ;
-(void)setHasRetryAfterSeconds:(char)arg1 ;
-(char)hasErrorInternal;
-(NSString *)errorInternal;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setErrorDescription:(NSString *)arg1 ;
-(char)hasErrorDescription;
-(NSString *)errorDescription;
-(char)readFrom:(id)arg1 ;
@end

