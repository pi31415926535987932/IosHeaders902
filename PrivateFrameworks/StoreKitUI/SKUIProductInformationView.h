/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class SKUIColorScheme, NSArray, NSMutableArray, UIView, UILabel, NSString;

@interface SKUIProductInformationView : UIView {

	SKUIColorScheme* _colorScheme;
	UIEdgeInsets _contentInset;
	NSArray* _informationLines;
	NSMutableArray* _imageValues;
	NSMutableArray* _keyLabels;
	UIView* _separatorView;
	UILabel* _titleLabel;
	NSMutableArray* _valueLabels;

}

@property (nonatomic,retain) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                  //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,retain) NSArray * informationLines;                 //@synthesize informationLines=_informationLines - In the implementation block
@property (assign,nonatomic) char hidesSeparatorView; 
@property (nonatomic,retain) NSString * title; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(void)setHidesSeparatorView:(char)arg1 ;
-(void)setInformationLines:(NSArray *)arg1 ;
-(float)_keyWidth;
-(char)hidesSeparatorView;
-(NSArray *)informationLines;
@end
