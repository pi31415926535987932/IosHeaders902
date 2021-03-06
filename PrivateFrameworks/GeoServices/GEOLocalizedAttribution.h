/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOLocalizedAttribution : PBCodable <NSCopying> {

	NSString* _displayName;
	NSString* _language;
	NSMutableArray* _logoURLs;
	NSMutableArray* _snippetLogoURLs;

}

@property (nonatomic,readonly) char hasLanguage; 
@property (nonatomic,retain) NSString * language;                           //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) char hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                        //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSMutableArray * logoURLs;                     //@synthesize logoURLs=_logoURLs - In the implementation block
@property (nonatomic,retain) NSMutableArray * snippetLogoURLs;              //@synthesize snippetLogoURLs=_snippetLogoURLs - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasDisplayName;
-(NSMutableArray *)snippetLogoURLs;
-(void)setLogoURLs:(NSMutableArray *)arg1 ;
-(void)clearSnippetLogoURLs;
-(void)clearLogoURLs;
-(void)addLogoURLs:(id)arg1 ;
-(void)setSnippetLogoURLs:(NSMutableArray *)arg1 ;
-(id)snippetLogoURLsAtIndex:(unsigned)arg1 ;
-(unsigned)snippetLogoURLsCount;
-(id)logoURLsAtIndex:(unsigned)arg1 ;
-(void)addSnippetLogoURLs:(id)arg1 ;
-(unsigned)logoURLsCount;
-(NSMutableArray *)logoURLs;
-(id)bestURLForLogos:(id)arg1 scale:(float)arg2 ;
-(char)hasLanguage;
-(char)readFrom:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
@end

