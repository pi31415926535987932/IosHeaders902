/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIView, UIImageView, UILabel, NSString;

@interface SKUIGiftDateTableViewCell : UITableViewCell {

	UIView* _bottomBorderView;
	char _checked;
	UIImageView* _checkmarkView;
	UILabel* _dateLabel;
	UILabel* _labelLabel;
	UILabel* _placeholderLabel;
	UIView* _topBorderView;

}

@property (assign,getter=isChecked,nonatomic) char checked;              //@synthesize checked=_checked - In the implementation block
@property (nonatomic,copy) NSString * dateString; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * placeholder; 
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setChecked:(char)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)placeholder;
-(char)isChecked;
-(void)setDateString:(NSString *)arg1 ;
-(id)_labelColor;
-(NSString *)dateString;
-(id)_newLabel;
@end

