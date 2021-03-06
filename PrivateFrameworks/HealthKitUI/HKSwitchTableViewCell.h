/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@protocol HKSwitchTableViewCellDelegate;
@class UILabel, UIImageView, UISwitch;

@interface HKSwitchTableViewCell : UITableViewCell {

	UILabel* _displayLabel;
	UIImageView* _iconImageView;
	UISwitch* _switch;
	char _enabled;
	char _centersIcon;
	id<HKSwitchTableViewCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HKSwitchTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isOn,nonatomic) char on; 
@property (assign,getter=isEnabled,nonatomic) char enabled;                                  //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) char centersIcon;                                               //@synthesize centersIcon=_centersIcon - In the implementation block
@property (nonatomic,readonly) CGSize iconSize; 
@property (assign,nonatomic) char adjustsFontSizeToFitWidth; 
-(void)setIconImage:(id)arg1 ;
-(void)setDelegate:(id<HKSwitchTableViewCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<HKSwitchTableViewCellDelegate>)delegate;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)setAdjustsFontSizeToFitWidth:(char)arg1 ;
-(char)adjustsFontSizeToFitWidth;
-(void)setOn:(char)arg1 ;
-(char)isOn;
-(void)setDisplayText:(id)arg1 ;
-(void)_contextSizeCategoryChanged;
-(id)_displayLabelFont;
-(void)switchValueChanged:(id)arg1 ;
-(void)setCentersIcon:(char)arg1 ;
-(char)centersIcon;
-(CGSize)iconSize;
-(void)_setupUI;
@end

