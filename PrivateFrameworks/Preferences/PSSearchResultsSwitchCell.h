/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSSearchResultsCell.h>

@class UISwitch, PSSpecifierAction, PSSpecifier;

@interface PSSearchResultsSwitchCell : PSSearchResultsCell {

	UISwitch* _switch;
	PSSpecifierAction* _action;
	PSSpecifier* _specifier;

}

@property (nonatomic,copy) PSSpecifierAction * action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;               //@synthesize specifier=_specifier - In the implementation block
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(PSSpecifierAction *)action;
-(void)setAction:(PSSpecifierAction *)arg1 ;
-(void)prepareForReuse;
-(PSSpecifier *)specifier;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(void)reloadValue:(char)arg1 ;
-(void)_switchValueChanged:(id)arg1 ;
@end

