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

@class GEOFormattedString, NSMutableArray;

@interface GEOTrafficBannerText : PBCodable <NSCopying> {

	GEOFormattedString* _bannerLargeText;
	GEOFormattedString* _bannerSmallText;
	unsigned _hideAtDistance;
	unsigned _incidentDistance;
	unsigned _incidentIndex;
	NSMutableArray* _localizedIncidentBanners;
	NSMutableArray* _localizedIncidentSpokenTexts;
	NSMutableArray* _localizedIncidentSubBanners;
	int _previousBannerChange;
	unsigned _showAtDistance;
	GEOFormattedString* _spokenPrompt;
	SCD_Struct_GE93 _has;

}

@property (nonatomic,retain) NSMutableArray * localizedIncidentBanners;                  //@synthesize localizedIncidentBanners=_localizedIncidentBanners - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedIncidentSubBanners;               //@synthesize localizedIncidentSubBanners=_localizedIncidentSubBanners - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedIncidentSpokenTexts;              //@synthesize localizedIncidentSpokenTexts=_localizedIncidentSpokenTexts - In the implementation block
@property (nonatomic,readonly) char hasBannerLargeText; 
@property (nonatomic,retain) GEOFormattedString * bannerLargeText;                       //@synthesize bannerLargeText=_bannerLargeText - In the implementation block
@property (nonatomic,readonly) char hasBannerSmallText; 
@property (nonatomic,retain) GEOFormattedString * bannerSmallText;                       //@synthesize bannerSmallText=_bannerSmallText - In the implementation block
@property (nonatomic,readonly) char hasSpokenPrompt; 
@property (nonatomic,retain) GEOFormattedString * spokenPrompt;                          //@synthesize spokenPrompt=_spokenPrompt - In the implementation block
@property (assign,nonatomic) char hasShowAtDistance; 
@property (assign,nonatomic) unsigned showAtDistance;                                    //@synthesize showAtDistance=_showAtDistance - In the implementation block
@property (assign,nonatomic) char hasHideAtDistance; 
@property (assign,nonatomic) unsigned hideAtDistance;                                    //@synthesize hideAtDistance=_hideAtDistance - In the implementation block
@property (assign,nonatomic) char hasIncidentDistance; 
@property (assign,nonatomic) unsigned incidentDistance;                                  //@synthesize incidentDistance=_incidentDistance - In the implementation block
@property (assign,nonatomic) char hasIncidentIndex; 
@property (assign,nonatomic) unsigned incidentIndex;                                     //@synthesize incidentIndex=_incidentIndex - In the implementation block
@property (assign,nonatomic) char hasPreviousBannerChange; 
@property (assign,nonatomic) int previousBannerChange;                                   //@synthesize previousBannerChange=_previousBannerChange - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)localizedIncidentSubBannerAtIndex:(unsigned)arg1 ;
-(char)hasSpokenPrompt;
-(void)setLocalizedIncidentSubBanners:(NSMutableArray *)arg1 ;
-(id)localizedIncidentBannerAtIndex:(unsigned)arg1 ;
-(unsigned)localizedIncidentSubBannersCount;
-(unsigned)incidentIndex;
-(void)setHasIncidentIndex:(char)arg1 ;
-(void)setHideAtDistance:(unsigned)arg1 ;
-(void)addLocalizedIncidentBanner:(id)arg1 ;
-(void)setHasHideAtDistance:(char)arg1 ;
-(unsigned)localizedIncidentBannersCount;
-(GEOFormattedString *)bannerLargeText;
-(void)setBannerLargeText:(GEOFormattedString *)arg1 ;
-(void)setIncidentIndex:(unsigned)arg1 ;
-(void)setHasPreviousBannerChange:(char)arg1 ;
-(void)setSpokenPrompt:(GEOFormattedString *)arg1 ;
-(NSMutableArray *)localizedIncidentSpokenTexts;
-(char)hasIncidentIndex;
-(unsigned)hideAtDistance;
-(GEOFormattedString *)bannerSmallText;
-(void)setShowAtDistance:(unsigned)arg1 ;
-(unsigned)localizedIncidentSpokenTextsCount;
-(void)addLocalizedIncidentSubBanner:(id)arg1 ;
-(char)hasPreviousBannerChange;
-(unsigned)incidentDistance;
-(char)hasHideAtDistance;
-(id)localizedIncidentSpokenTextAtIndex:(unsigned)arg1 ;
-(void)setPreviousBannerChange:(int)arg1 ;
-(void)clearLocalizedIncidentSubBanners;
-(void)setIncidentDistance:(unsigned)arg1 ;
-(GEOFormattedString *)spokenPrompt;
-(void)addLocalizedIncidentSpokenText:(id)arg1 ;
-(NSMutableArray *)localizedIncidentBanners;
-(void)setHasIncidentDistance:(char)arg1 ;
-(char)hasBannerLargeText;
-(void)clearLocalizedIncidentBanners;
-(void)setLocalizedIncidentSpokenTexts:(NSMutableArray *)arg1 ;
-(void)setHasShowAtDistance:(char)arg1 ;
-(int)previousBannerChange;
-(void)setBannerSmallText:(GEOFormattedString *)arg1 ;
-(unsigned)showAtDistance;
-(void)clearLocalizedIncidentSpokenTexts;
-(void)setLocalizedIncidentBanners:(NSMutableArray *)arg1 ;
-(char)hasShowAtDistance;
-(NSMutableArray *)localizedIncidentSubBanners;
-(char)hasIncidentDistance;
-(char)hasBannerSmallText;
-(char)readFrom:(id)arg1 ;
@end

