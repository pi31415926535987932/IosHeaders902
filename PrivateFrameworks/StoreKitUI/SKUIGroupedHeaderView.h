/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView, NSString;

@interface SKUIGroupedHeaderView : UIView {

	UILabel* _titleLabel;
	UIView* _topBorder;
	UIView* _botBorder;

}

@property (assign,nonatomic) char hasTopBorder; 
@property (assign,nonatomic) char hasBottomBorder; 
@property (nonatomic,copy) NSString * title; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(char)hasTopBorder;
-(void)setHasTopBorder:(char)arg1 ;
-(char)hasBottomBorder;
-(void)setHasBottomBorder:(char)arg1 ;
@end

