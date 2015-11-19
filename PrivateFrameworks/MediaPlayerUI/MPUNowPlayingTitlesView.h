/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:07 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIView.h>

@class MPUMarqueeView, UILabel, UIImageView, NSDictionary, NSString, UIImage;

@interface MPUNowPlayingTitlesView : UIView {

	MPUMarqueeView* _titleMarqueeView;
	MPUMarqueeView* _detailMarqueeView;
	UILabel* _titleLabel;
	UILabel* _detailLabel;
	UIImageView* _explicitImageView;
	char _needsLabelUpdate;
	char _explicit;
	int _style;
	NSDictionary* _titleTextAttributes;
	NSDictionary* _detailTextAttributes;
	NSString* _albumText;
	NSString* _artistText;
	NSString* _stationNameText;
	float _textMargin;
	float _titleLeading;
	NSString* _titleText;
	UIImage* _explicitImage;
	UIEdgeInsets _titleMarqueeEdgeInsets;
	UIEdgeInsets _detailMarqueeEdgeInsets;

}

@property (assign,nonatomic) int style;                                                //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSDictionary * titleTextAttributes;                       //@synthesize titleTextAttributes=_titleTextAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * detailTextAttributes;                      //@synthesize detailTextAttributes=_detailTextAttributes - In the implementation block
@property (nonatomic,copy) NSString * albumText;                                       //@synthesize albumText=_albumText - In the implementation block
@property (nonatomic,copy) NSString * artistText;                                      //@synthesize artistText=_artistText - In the implementation block
@property (assign,getter=isExplicit,nonatomic) char explicit;                          //@synthesize explicit=_explicit - In the implementation block
@property (assign,getter=isMarqueeEnabled,nonatomic) char marqueeEnabled; 
@property (nonatomic,copy) NSString * stationNameText;                                 //@synthesize stationNameText=_stationNameText - In the implementation block
@property (assign,nonatomic) float textMargin;                                         //@synthesize textMargin=_textMargin - In the implementation block
@property (assign,nonatomic) float titleLeading;                                       //@synthesize titleLeading=_titleLeading - In the implementation block
@property (nonatomic,readonly) float titleBaselineOffsetFromBottom; 
@property (nonatomic,copy) NSString * titleText;                                       //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) UIImage * explicitImage;                                  //@synthesize explicitImage=_explicitImage - In the implementation block
@property (assign,nonatomic) UIEdgeInsets titleMarqueeEdgeInsets;                      //@synthesize titleMarqueeEdgeInsets=_titleMarqueeEdgeInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets detailMarqueeEdgeInsets;                     //@synthesize detailMarqueeEdgeInsets=_detailMarqueeEdgeInsets - In the implementation block
+(Class)labelClass;
-(id)_detailLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(int)style;
-(void)setTitleTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)titleTextAttributes;
-(void)setStyle:(int)arg1 ;
-(id)_titleLabel;
-(void)setMarqueeEnabled:(char)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setMarqueeEnabled:(char)arg1 withOptions:(long long)arg2 ;
-(char)isMarqueeEnabled;
-(NSString *)titleText;
-(void)setExplicitImage:(UIImage *)arg1 ;
-(NSDictionary *)detailTextAttributes;
-(void)setDetailTextAttributes:(NSDictionary *)arg1 ;
-(void)_updateAttributedTitleLabel;
-(void)setAlbumText:(NSString *)arg1 ;
-(void)setArtistText:(NSString *)arg1 ;
-(void)setExplicit:(char)arg1 ;
-(void)setStationNameText:(NSString *)arg1 ;
-(void)setTextMargin:(float)arg1 ;
-(float)titleBaselineOffsetFromBottom;
-(void)resetMarqueePositions;
-(id)_titleMarqueeView;
-(id)_detailMarqueeView;
-(NSString *)albumText;
-(NSString *)artistText;
-(char)isExplicit;
-(NSString *)stationNameText;
-(float)textMargin;
-(float)titleLeading;
-(void)setTitleLeading:(float)arg1 ;
-(UIImage *)explicitImage;
-(UIEdgeInsets)titleMarqueeEdgeInsets;
-(void)setTitleMarqueeEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)detailMarqueeEdgeInsets;
-(void)setDetailMarqueeEdgeInsets:(UIEdgeInsets)arg1 ;
@end

