/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:35 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol UIDocumentPasswordViewDelegate;
@class UIImageView, UIDocumentPasswordField, UILabel, NSObject, UITextField, NSString;

@interface UIDocumentPasswordView : UIView <UITextFieldDelegate> {

	UIImageView* _iconView;
	UIDocumentPasswordField* _passwordTextField;
	UILabel* _label;
	NSObject*<UIDocumentPasswordViewDelegate> passwordDelegate;

}

@property (assign,nonatomic) NSObject*<UIDocumentPasswordViewDelegate> passwordDelegate; 
@property (nonatomic,readonly) UITextField * passwordField;                                           //@synthesize passwordTextField=_passwordTextField - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(char)_canDrawContent;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(UITextField *)passwordField;
-(id)initWithDocumentName:(id)arg1 ;
-(void)setPasswordDelegate:(NSObject*<UIDocumentPasswordViewDelegate>)arg1 ;
-(id)_labelFont;
-(id)_labelTextColor;
-(void)_passwordEntered:(id)arg1 ;
-(CGRect)_iconRectForContainerRect:(CGRect)arg1 ;
-(float)_labelHorizontalOffset;
-(float)_textFieldWidth;
-(NSObject*<UIDocumentPasswordViewDelegate>)passwordDelegate;
@end

