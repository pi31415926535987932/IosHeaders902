/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:32:46 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFComposeHeaderView.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, UIButton, NSString;

@interface MFComposeSubjectView : MFComposeHeaderView <NSLayoutManagerDelegate, UITextViewDelegate> {

	unsigned _delegateRespondsToTextChange : 1;
	unsigned _delegateRespondsToDidRemoveContent : 1;
	unsigned _notifyButtonSelected : 1;
	unsigned _showNotifyButton : 1;
	UITextView* _textView;
	UIButton* _notifyButton;

}

@property (nonatomic,readonly) UITextView * textView;                //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) UIButton * notifyButton;              //@synthesize notifyButton=_notifyButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)refreshPreferredContentSize;
-(void)notifyButtonClicked:(id)arg1 ;
-(void)updateNotifyButton;
-(void)_updateTextContainerInsets;
-(void)setShowNotifyButton:(char)arg1 ;
-(char)isNotifyButtonSelected;
-(void)setNotifyButtonSelected:(char)arg1 ;
-(UIButton *)notifyButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)delegate;
-(char)becomeFirstResponder;
-(id)text;
-(void)setText:(id)arg1 ;
-(char)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(char)arg3 ;
-(void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(char)arg3 ;
-(char)endEditing:(char)arg1 ;
-(char)_canBecomeFirstResponder;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(UITextView *)textView;
@end

