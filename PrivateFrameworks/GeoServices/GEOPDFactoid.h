/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOPDFactoid : PBCodable <NSCopying> {

	NSString* _text;
	NSString* _title;

}

@property (nonatomic,readonly) char hasTitle; 
@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) char hasText; 
@property (nonatomic,retain) NSString * text;               //@synthesize text=_text - In the implementation block
+(char)factoidPairAvailableForPlaceData:(id)arg1 ;
+(id)factoidsForPlaceData:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(char)hasText;
-(id)dictionaryRepresentation;
-(char)hasTitle;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

