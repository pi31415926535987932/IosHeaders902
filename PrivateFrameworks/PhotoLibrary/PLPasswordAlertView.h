/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertView.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UITextField, NSString;

@interface PLPasswordAlertView : UIAlertView <UIAlertViewDelegate> {

	/*^block*/id _completionHandler;
	UITextField* _accountTextField;
	UITextField* _passwordTextField;
	int _style;

}

@property (nonatomic,readonly) int style;                                       //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * accountTextFieldPlaceholder; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(int)style;
-(id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 ;
-(id)initWithStyle:(int)arg1 title:(id)arg2 message:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)accountTextFieldPlaceholder;
-(void)setAccountTextFieldPlaceholder:(NSString *)arg1 ;
@end

