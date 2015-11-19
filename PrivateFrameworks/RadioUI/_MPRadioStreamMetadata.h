/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, RadioArtworkCollection, NSNumber;

@interface _MPRadioStreamMetadata : NSObject {

	int _albumBuyButtonType;
	NSString* _albumBuyButtonText;
	NSString* _album;
	NSString* _artist;
	RadioArtworkCollection* _artworkCollection;
	NSNumber* _explicit;
	NSString* _title;

}

@property (assign,nonatomic) int albumBuyButtonType;                                  //@synthesize albumBuyButtonType=_albumBuyButtonType - In the implementation block
@property (nonatomic,copy) NSString * albumBuyButtonText;                             //@synthesize albumBuyButtonText=_albumBuyButtonText - In the implementation block
@property (nonatomic,copy) NSString * album;                                          //@synthesize album=_album - In the implementation block
@property (nonatomic,copy) NSString * artist;                                         //@synthesize artist=_artist - In the implementation block
@property (nonatomic,retain) RadioArtworkCollection * artworkCollection;              //@synthesize artworkCollection=_artworkCollection - In the implementation block
@property (getter=isExplicit,nonatomic,retain) NSNumber * explicit;                   //@synthesize explicit=_explicit - In the implementation block
@property (nonatomic,copy) NSString * title;                                          //@synthesize title=_title - In the implementation block
-(NSString *)artist;
-(void)setArtist:(NSString *)arg1 ;
-(NSString *)album;
-(void)setAlbum:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)title;
-(int)albumBuyButtonType;
-(NSString *)albumBuyButtonText;
-(void)setExplicit:(NSNumber *)arg1 ;
-(id)isExplicit;
-(void)setArtworkCollection:(RadioArtworkCollection *)arg1 ;
-(void)setAlbumBuyButtonText:(NSString *)arg1 ;
-(void)setAlbumBuyButtonType:(int)arg1 ;
-(RadioArtworkCollection *)artworkCollection;
@end

