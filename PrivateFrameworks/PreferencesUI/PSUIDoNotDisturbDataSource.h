/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:12 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSSpecifierDataSource.h>

@class PSSpecifier;

@interface PSUIDoNotDisturbDataSource : PSSpecifierDataSource {

	PSSpecifier* _dndRangeSpec;

}

@property (nonatomic,retain) PSSpecifier * dndRangeSpec;              //@synthesize dndRangeSpec=_dndRangeSpec - In the implementation block
-(void)dealloc;
-(id)specifiersForSpecifier:(id)arg1 observer:(id)arg2 ;
-(void)loadSpecifiers;
-(void)setIsEffectiveWhileUnlocked:(char)arg1 ;
-(id)allowedDisruptionsGroup:(id)arg1 ;
-(void)_loadBBState;
-(void)setDoNotDisturb:(id)arg1 specifier:(id)arg2 ;
-(id)doNotDisturb:(id)arg1 ;
-(void)setScheduledModeEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)scheduledModeEnabled:(id)arg1 ;
-(void)setDndRangeSpec:(PSSpecifier *)arg1 ;
-(char)_isScheduled;
-(id)_allowedGroupsFooterText;
-(void)setRepeatedCallsEnabled:(id)arg1 ;
-(id)repeatedCallsEnabled;
-(id)allowedDisruptionsGroupID;
-(PSSpecifier *)dndRangeSpec;
@end

