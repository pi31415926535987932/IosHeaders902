/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:45 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface MPPSearchStringPredicate : PBCodable <NSCopying> {

	NSMutableArray* _properties;
	NSString* _searchString;

}

@property (nonatomic,readonly) char hasSearchString; 
@property (nonatomic,retain) NSString * searchString;                  //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,retain) NSMutableArray * properties;              //@synthesize properties=_properties - In the implementation block
-(unsigned)propertiesCount;
-(id)propertiesAtIndex:(unsigned)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)searchString;
-(id)dictionaryRepresentation;
-(NSMutableArray *)properties;
-(void)setProperties:(NSMutableArray *)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasSearchString;
-(char)readFrom:(id)arg1 ;
-(void)clearProperties;
-(void)addProperties:(id)arg1 ;
@end

