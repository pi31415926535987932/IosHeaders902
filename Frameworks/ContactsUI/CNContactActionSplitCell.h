/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:44:02 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/CNLabeledCell.h>

@class UIButton;

@interface CNContactActionSplitCell : CNLabeledCell {

	UIButton* _leftLabel;
	UIButton* _rightLabel;

}

@property (nonatomic,readonly) UIButton * leftLabel;               //@synthesize leftLabel=_leftLabel - In the implementation block
@property (nonatomic,readonly) UIButton * rightLabel;              //@synthesize rightLabel=_rightLabel - In the implementation block
-(void)setLabelTextAttributes:(id)arg1 ;
-(void)setCardGroupItem:(id)arg1 ;
-(float)minCellHeight;
-(id)standardButton;
-(UIButton *)leftLabel;
-(void)_setupButton:(id)arg1 forAction:(id)arg2 ;
-(UIButton *)rightLabel;
-(id)constantConstraints;
-(id)rightMostView;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id)labelView;
@end

