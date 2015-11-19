/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:13 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ToneKit/ToneKit-Structs.h>
#import <ToneKit/TKPickerTableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol TKVibrationPickerTableViewCellDelegate;
@class UIColor, UITextField, NSString, UIFont;

@interface TKVibrationPickerTableViewCell : TKPickerTableViewCell <UITextFieldDelegate> {

	char _editable;
	id<TKVibrationPickerTableViewCellDelegate> _delegate;
	UIColor* _regularTextColor;
	UITextField* _removableTextField;

}

@property (assign,nonatomic) id<TKVibrationPickerTableViewCellDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * labelText; 
@property (nonatomic,retain) NSString * placeholderText; 
@property (nonatomic,retain) UIFont * regularTextFont; 
@property (nonatomic,retain) UIColor * regularTextColor;                                                               //@synthesize regularTextColor=_regularTextColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedTextColor; 
@property (assign,getter=isEditable,nonatomic) char editable;                                                          //@synthesize editable=_editable - In the implementation block
@property (assign,getter=isChecked,nonatomic) char checked; 
@property (setter=_setRemovableTextField:,nonatomic,retain) UITextField * _removableTextField;                         //@synthesize removableTextField=_removableTextField - In the implementation block
@property (getter=_isDisplayingRemovableTextField,nonatomic,readonly) char _displayingRemovableTextField; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(void)setDelegate:(id<TKVibrationPickerTableViewCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setChecked:(char)arg1 ;
-(id<TKVibrationPickerTableViewCellDelegate>)delegate;
-(char)isEditable;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)willTransitionToState:(unsigned)arg1 ;
-(void)didTransitionToState:(unsigned)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)setHighlightedTextColor:(UIColor *)arg1 ;
-(void)setEditable:(char)arg1 ;
-(UIColor *)highlightedTextColor;
-(char)isChecked;
-(NSString *)labelText;
-(void)setLabelText:(NSString *)arg1 ;
-(void)setRegularTextFont:(UIFont *)arg1 ;
-(void)setRegularTextColor:(UIColor *)arg1 ;
-(void)makeTextFieldResignFirstResponderIfNeeded;
-(void)_setRemovableTextField:(id)arg1 ;
-(void)_makeRemovableTextFieldEditable:(char)arg1 ;
-(char)_isDisplayingRemovableTextField;
-(UITextField *)_removableTextField;
-(UIColor *)regularTextColor;
-(void)_layoutRemovableTextField;
-(UIFont *)regularTextFont;
@end
