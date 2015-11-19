/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:34 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOAddressCorrectionInitRequest : PBRequest <NSCopying> {

	NSString* _personID;
	NSString* _token;
	char _supportsMultipleAddresses;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) char hasToken; 
@property (nonatomic,retain) NSString * token;                               //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) char hasPersonID; 
@property (nonatomic,retain) NSString * personID;                            //@synthesize personID=_personID - In the implementation block
@property (assign,nonatomic) char hasSupportsMultipleAddresses; 
@property (assign,nonatomic) char supportsMultipleAddresses;                 //@synthesize supportsMultipleAddresses=_supportsMultipleAddresses - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(char)hasToken;
-(void)setHasSupportsMultipleAddresses:(char)arg1 ;
-(NSString *)personID;
-(char)hasSupportsMultipleAddresses;
-(void)setSupportsMultipleAddresses:(char)arg1 ;
-(char)supportsMultipleAddresses;
-(void)setPersonID:(NSString *)arg1 ;
-(char)hasPersonID;
-(char)readFrom:(id)arg1 ;
@end

