/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, SKUIClientContext, SKUIBadgeLabel, UIColor, UIImageView, NSString;

@interface SKUILockupMetadataView : UIView {

	UILabel* _artistNameLabel;
	UILabel* _categoryLabel;
	SKUIClientContext* _clientContext;
	SKUIBadgeLabel* _editorialBadgeLabel;
	UILabel* _itemCountLabel;
	UILabel* _itemOfferLabel;
	int _numberOfUserRatings;
	UILabel* _releaseDateLabel;
	UIColor* _textColor;
	UIColor* _titleColor;
	UILabel* _titleLabel;
	float _userRating;
	UIImageView* _userRatingImageView;
	UILabel* _userRatingLabel;
	unsigned _visibleFields;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic) unsigned visibleFields;                         //@synthesize visibleFields=_visibleFields - In the implementation block
@property (nonatomic,copy) NSString * artistName; 
@property (nonatomic,copy) NSString * editorialBadgeString; 
@property (nonatomic,copy) NSString * categoryString; 
@property (nonatomic,copy) NSString * itemCountString; 
@property (nonatomic,copy) NSString * itemOfferString; 
@property (nonatomic,copy) NSString * releaseDateString; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) int numberOfUserRatings;                        //@synthesize numberOfUserRatings=_numberOfUserRatings - In the implementation block
@property (assign,nonatomic) float userRating;                               //@synthesize userRating=_userRating - In the implementation block
@property (nonatomic,readonly) UIColor * primaryTextColor;                   //@synthesize textColor=_textColor - In the implementation block
+(float)maximumHeightWithVisibleFields:(unsigned)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(UIColor *)primaryTextColor;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(NSString *)artistName;
-(int)numberOfUserRatings;
-(float)userRating;
-(id)_newDefaultLabel;
-(void)_reloadUserRatingViews;
-(id)_decimalNumberFormatter;
-(NSString *)editorialBadgeString;
-(NSString *)categoryString;
-(NSString *)itemCountString;
-(NSString *)itemOfferString;
-(NSString *)releaseDateString;
-(void)setArtistName:(NSString *)arg1 ;
-(void)setEditorialBadgeString:(NSString *)arg1 ;
-(void)setCategoryString:(NSString *)arg1 ;
-(void)setItemCountString:(NSString *)arg1 ;
-(void)setItemOfferString:(NSString *)arg1 ;
-(void)setNumberOfUserRatings:(int)arg1 ;
-(void)setReleaseDateString:(NSString *)arg1 ;
-(void)setUserRating:(float)arg1 ;
-(void)setVisibleFields:(unsigned)arg1 ;
-(unsigned)visibleFields;
@end

