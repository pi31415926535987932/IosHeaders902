/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView;

@interface SPUISearchWikiRowImageCell : UITableViewCell {

	UILabel* _label;
	UIImageView* _valueImageView;

}

@property (assign) UILabel * label;                           //@synthesize label=_label - In the implementation block
@property (assign) UIImageView * valueImageView;              //@synthesize valueImageView=_valueImageView - In the implementation block
-(void)awakeFromNib;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(UIImageView *)valueImageView;
-(void)setValueImageView:(UIImageView *)arg1 ;
@end
