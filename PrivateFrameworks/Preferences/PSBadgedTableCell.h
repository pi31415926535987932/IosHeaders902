/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIImageView, UILabel;

@interface PSBadgedTableCell : PSTableCell {

	UIImageView* _badgeImageView;
	UILabel* _badgeNumberLabel;
	int _badgeInt;

}
+(id)reuseIdentifierForClassAndType:(int)arg1 ;
+(float)badgePadding;
+(id)badgeNumberLabelHighlightedTextColor;
+(id)badgeNumberLabelTextColor;
+(id)unreadBubbleImage;
+(id)unreadBubbleHighlightedImage;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)badgeWithInteger:(int)arg1 ;
-(void)resetLocale;
@end

