/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSEditingPane.h>

@class UITextView;

@interface PSTextViewPane : PSEditingPane {

	UITextView* _textView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(id)arg1 ;
-(void)setPreferenceSpecifier:(id)arg1 ;
-(char)handlesDoneButton;
@end

