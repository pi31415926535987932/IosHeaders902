/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPAssetsToDownload, NSString, CKDPRecordIdentifier, CKDPRequestedFields;

@interface CKDPRecordRetrieveVersionsRequest : PBRequest <NSCopying> {

	CKDPAssetsToDownload* _assetsToDownload;
	NSString* _minimumVersionEtag;
	CKDPRecordIdentifier* _recordIdentifier;
	CKDPRequestedFields* _requestedFields;

}

@property (nonatomic,readonly) char hasRecordIdentifier; 
@property (nonatomic,retain) CKDPRecordIdentifier * recordIdentifier;              //@synthesize recordIdentifier=_recordIdentifier - In the implementation block
@property (nonatomic,readonly) char hasRequestedFields; 
@property (nonatomic,retain) CKDPRequestedFields * requestedFields;                //@synthesize requestedFields=_requestedFields - In the implementation block
@property (nonatomic,readonly) char hasMinimumVersionEtag; 
@property (nonatomic,retain) NSString * minimumVersionEtag;                        //@synthesize minimumVersionEtag=_minimumVersionEtag - In the implementation block
@property (nonatomic,readonly) char hasAssetsToDownload; 
@property (nonatomic,retain) CKDPAssetsToDownload * assetsToDownload;              //@synthesize assetsToDownload=_assetsToDownload - In the implementation block
+(id)options;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setRecordIdentifier:(CKDPRecordIdentifier *)arg1 ;
-(void)setRequestedFields:(CKDPRequestedFields *)arg1 ;
-(void)setAssetsToDownload:(CKDPAssetsToDownload *)arg1 ;
-(char)hasRecordIdentifier;
-(char)hasRequestedFields;
-(char)hasAssetsToDownload;
-(CKDPRecordIdentifier *)recordIdentifier;
-(CKDPRequestedFields *)requestedFields;
-(CKDPAssetsToDownload *)assetsToDownload;
-(void)setMinimumVersionEtag:(NSString *)arg1 ;
-(char)hasMinimumVersionEtag;
-(NSString *)minimumVersionEtag;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(char)readFrom:(id)arg1 ;
@end

