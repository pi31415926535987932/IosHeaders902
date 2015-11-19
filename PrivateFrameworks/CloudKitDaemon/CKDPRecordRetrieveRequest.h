/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPAssetsToDownload, NSString, CKDPRecordRetrieveRequestRetrieveAssetURL, CKDPRecordIdentifier, CKDPRequestedFields;

@interface CKDPRecordRetrieveRequest : PBRequest <NSCopying> {

	CKDPAssetsToDownload* _assetsToDownload;
	NSString* _clientVersionETag;
	CKDPRecordRetrieveRequestRetrieveAssetURL* _getAssetURL;
	CKDPRecordIdentifier* _recordIdentifier;
	CKDPRequestedFields* _requestedFields;
	NSString* _versionETag;

}

@property (nonatomic,readonly) char hasRecordIdentifier; 
@property (nonatomic,retain) CKDPRecordIdentifier * recordIdentifier;                              //@synthesize recordIdentifier=_recordIdentifier - In the implementation block
@property (nonatomic,readonly) char hasRequestedFields; 
@property (nonatomic,retain) CKDPRequestedFields * requestedFields;                                //@synthesize requestedFields=_requestedFields - In the implementation block
@property (nonatomic,readonly) char hasVersionETag; 
@property (nonatomic,retain) NSString * versionETag;                                               //@synthesize versionETag=_versionETag - In the implementation block
@property (nonatomic,readonly) char hasClientVersionETag; 
@property (nonatomic,retain) NSString * clientVersionETag;                                         //@synthesize clientVersionETag=_clientVersionETag - In the implementation block
@property (nonatomic,readonly) char hasGetAssetURL; 
@property (nonatomic,retain) CKDPRecordRetrieveRequestRetrieveAssetURL * getAssetURL;              //@synthesize getAssetURL=_getAssetURL - In the implementation block
@property (nonatomic,readonly) char hasAssetsToDownload; 
@property (nonatomic,retain) CKDPAssetsToDownload * assetsToDownload;                              //@synthesize assetsToDownload=_assetsToDownload - In the implementation block
+(id)options;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setRecordIdentifier:(CKDPRecordIdentifier *)arg1 ;
-(void)setRequestedFields:(CKDPRequestedFields *)arg1 ;
-(void)setVersionETag:(NSString *)arg1 ;
-(void)setClientVersionETag:(NSString *)arg1 ;
-(void)setGetAssetURL:(CKDPRecordRetrieveRequestRetrieveAssetURL *)arg1 ;
-(void)setAssetsToDownload:(CKDPAssetsToDownload *)arg1 ;
-(char)hasRecordIdentifier;
-(char)hasRequestedFields;
-(char)hasVersionETag;
-(char)hasClientVersionETag;
-(char)hasGetAssetURL;
-(char)hasAssetsToDownload;
-(CKDPRecordIdentifier *)recordIdentifier;
-(CKDPRequestedFields *)requestedFields;
-(NSString *)versionETag;
-(NSString *)clientVersionETag;
-(CKDPRecordRetrieveRequestRetrieveAssetURL *)getAssetURL;
-(CKDPAssetsToDownload *)assetsToDownload;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(char)readFrom:(id)arg1 ;
@end
