/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetTextViewProxy.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, NSString;

@interface OKWidgetTextView : OKWidgetTextViewProxy <UITextViewDelegate> {

	UITextView* _textView;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(void)dealloc;
-(void)layoutSubviews;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(id)initWithWidget:(id)arg1 ;
-(id)settingText;
-(void)setSettingText:(id)arg1 ;
-(void)setSettingTextColor:(id)arg1 ;
-(id)settingFontName;
-(void)setSettingFontName:(id)arg1 ;
-(void)setSettingFontSize:(float)arg1 ;
-(float)settingFontSize;
-(id)settingTextColor;
-(id)settingTextBackgroundColor;
-(void)setSettingTextBackgroundColor:(id)arg1 ;
-(int)settingTextAlignment;
-(void)setSettingTextAlignment:(int)arg1 ;
-(UIEdgeInsets)settingContentEdgeInsets;
-(void)setSettingContentInset:(UIEdgeInsets)arg1 ;
-(char)settingOverflowEnabled;
-(void)setSettingOverflowEnabled:(char)arg1 ;
-(char)settingScrollEnabled;
-(void)setSettingScrollEnabled:(char)arg1 ;
-(id)settingAttributedText;
-(void)setSettingAttributedText:(id)arg1 ;
@end

