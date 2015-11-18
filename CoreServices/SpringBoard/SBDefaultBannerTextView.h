/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBDateLabelDelegate.h>

@protocol NCNotificationDateLabel;
@class NSAttributedString, UIImage, UILabel, NSString;

@interface SBDefaultBannerTextView : UIView <SBDateLabelDelegate> {

	NSAttributedString* _primaryTextAttributedString;
	NSAttributedString* _primaryTextAttributedStringComponent;
	UIImage* _primaryTextAccessoryImageComponent;
	NSAttributedString* _subtitleTextAttributedString;
	NSAttributedString* _secondaryTextAttributedString;
	NSAttributedString* _alternateSecondaryTextAttributedString;
	UILabel*<NCNotificationDateLabel> _relevanceDateLabel;
	float _secondaryTextAlpha;
	float _alternateSecondaryTextAlpha;

}

@property (nonatomic,copy) NSString * primaryText; 
@property (nonatomic,retain) UIImage * primaryTextAccessoryImage; 
@property (nonatomic,copy) NSString * subtitleText; 
@property (nonatomic,copy) NSString * secondaryText; 
@property (nonatomic,copy) NSString * alternateSecondaryText; 
@property (nonatomic,retain,readonly) UILabel * relevanceDateLabel;              //@synthesize relevanceDateLabel=_relevanceDateLabel - In the implementation block
+(id)_defaultRelevanceDateFont;
+(id)_secondaryItalicTextFont;
+(id)_primaryTextFont;
+(id)_secondaryTextFont;
-(UILabel *)relevanceDateLabel;
-(void)setSecondaryTextAlpha:(float)arg1 ;
-(void)setPrimaryTextAccessoryImage:(UIImage *)arg1 ;
-(void)setSecondaryText:(id)arg1 italicized:(char)arg2 ;
-(void)setAlternateSecondaryText:(NSString *)arg1 ;
-(void)setAlternateSecondaryText:(id)arg1 italicized:(char)arg2 ;
-(void)setAlternateSecondaryTextAlpha:(float)arg1 ;
-(char)textWillWrapForWidth:(float)arg1 ;
-(void)_invalidatePrimaryTextAttributedString;
-(void)_setSecondaryText:(id)arg1 italicized:(char)arg2 forAttributedStringPtr:(id*)arg3 ;
-(id)_newAttributedStringForSecondaryText:(id)arg1 italicized:(char)arg2 ;
-(CGRect)_primaryTextRectForBounds:(CGRect)arg1 ;
-(CGRect)_subtitleTextRectForBounds:(CGRect)arg1 attributedString:(id)arg2 ;
-(float)_primaryTextBaselineForBounds:(CGRect)arg1 ;
-(CGSize)_primaryTextSizeForBounds:(CGRect)arg1 ;
-(float)_subtitleTextOriginYForBounds:(CGRect)arg1 ;
-(float)_secondaryTextOriginYForBounds:(CGRect)arg1 ;
-(CGRect)_secondaryTextRectForBounds:(CGRect)arg1 attributedString:(id)arg2 ;
-(id)_primaryTextAttributedString;
-(char)_hasSecondaryText;
-(CGRect)_maximumSecondaryTextRectForBounds:(CGRect)arg1 ;
-(UIImage *)primaryTextAccessoryImage;
-(NSString *)alternateSecondaryText;
-(char)_isItalicizedAttributedString:(id)arg1 ;
-(void)setSecondaryText:(NSString *)arg1 ;
-(void)setPrimaryText:(NSString *)arg1 ;
-(NSString *)primaryText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setRelevanceDate:(id)arg1 ;
-(void)dateLabelDidChange:(id)arg1 ;
-(NSString *)secondaryText;
-(void)setSubtitleText:(NSString *)arg1 ;
-(NSString *)subtitleText;
@end

