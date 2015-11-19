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

@class NSData;

@interface GEOSuggestionsOptions : PBCodable <NSCopying> {

	int _entriesType;
	int _listType;
	NSData* _suggestionEntryMetadata;
	NSData* _suggestionMetadata;
	char _includeRankingFeatures;
	char _normalizePOIs;
	SCD_Struct_GE6 _has;

}

@property (assign,nonatomic) char hasListType; 
@property (assign,nonatomic) int listType;                                   //@synthesize listType=_listType - In the implementation block
@property (assign,nonatomic) char hasEntriesType; 
@property (assign,nonatomic) int entriesType;                                //@synthesize entriesType=_entriesType - In the implementation block
@property (nonatomic,readonly) char hasSuggestionMetadata; 
@property (nonatomic,retain) NSData * suggestionMetadata;                    //@synthesize suggestionMetadata=_suggestionMetadata - In the implementation block
@property (nonatomic,readonly) char hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata;               //@synthesize suggestionEntryMetadata=_suggestionEntryMetadata - In the implementation block
@property (assign,nonatomic) char hasNormalizePOIs; 
@property (assign,nonatomic) char normalizePOIs;                             //@synthesize normalizePOIs=_normalizePOIs - In the implementation block
@property (assign,nonatomic) char hasIncludeRankingFeatures; 
@property (assign,nonatomic) char includeRankingFeatures;                    //@synthesize includeRankingFeatures=_includeRankingFeatures - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasSuggestionMetadata;
-(void)setSuggestionMetadata:(NSData *)arg1 ;
-(NSData *)suggestionMetadata;
-(NSData *)suggestionEntryMetadata;
-(char)hasSuggestionEntryMetadata;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(void)setListType:(int)arg1 ;
-(int)entriesType;
-(char)hasNormalizePOIs;
-(void)setHasListType:(char)arg1 ;
-(void)setNormalizePOIs:(char)arg1 ;
-(void)setHasEntriesType:(char)arg1 ;
-(void)setHasNormalizePOIs:(char)arg1 ;
-(void)setHasIncludeRankingFeatures:(char)arg1 ;
-(char)includeRankingFeatures;
-(char)hasIncludeRankingFeatures;
-(char)hasEntriesType;
-(void)setIncludeRankingFeatures:(char)arg1 ;
-(int)listType;
-(char)hasListType;
-(char)normalizePOIs;
-(void)setEntriesType:(int)arg1 ;
-(char)readFrom:(id)arg1 ;
@end
