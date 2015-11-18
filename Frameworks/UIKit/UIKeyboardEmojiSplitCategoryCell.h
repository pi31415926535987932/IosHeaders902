/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface UIKeyboardEmojiSplitCategoryCell : UITableViewCell {

	UIImageView* _symbol;
	UILabel* _title;
	UIView* _selectedCircle;

}

@property (nonatomic,retain) UIImageView * symbol;                 //@synthesize symbol=_symbol - In the implementation block
@property (nonatomic,retain) UILabel * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIView * selectedCircle;              //@synthesize selectedCircle=_selectedCircle - In the implementation block
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(UILabel *)arg1 ;
-(UILabel *)title;
-(void)setPressIndicatorHidden:(char)arg1 ;
-(UIImageView *)symbol;
-(void)setTitleText:(id)arg1 ;
-(void)setSelectedCircleBlendMode:(char)arg1 ;
-(id)titleFont;
-(id)symbolFont;
-(void)setSymbol:(UIImageView *)arg1 ;
-(UIView *)selectedCircle;
-(void)setSelectedCircle:(UIView *)arg1 ;
@end

