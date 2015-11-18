/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UITextFieldDelegate.h>

@class UILabel, UIPasscodeField, UITextField, UIImageView, NSString;

@interface UIPrinterSetupPINView : UIControl <UITextFieldDelegate> {

	UILabel* _titleLabel;
	UILabel* _enterLabel;
	UIPasscodeField* _passcodeField;
	UITextField* _textEntryField;
	UILabel* _failedLabel;
	UIImageView* _failedBackground;
	int _failedAttemptCount;

}

@property (nonatomic,retain) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * enterLabel;                         //@synthesize enterLabel=_enterLabel - In the implementation block
@property (nonatomic,retain) UIPasscodeField * passcodeField;              //@synthesize passcodeField=_passcodeField - In the implementation block
@property (nonatomic,retain) UITextField * textEntryField;                 //@synthesize textEntryField=_textEntryField - In the implementation block
@property (nonatomic,retain) UILabel * failedLabel;                        //@synthesize failedLabel=_failedLabel - In the implementation block
@property (nonatomic,retain) UIImageView * failedBackground;               //@synthesize failedBackground=_failedBackground - In the implementation block
@property (assign,nonatomic) int failedAttemptCount;                       //@synthesize failedAttemptCount=_failedAttemptCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(void)textDidChange:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setEnterLabel:(UILabel *)arg1 ;
-(void)setPasscodeField:(UIPasscodeField *)arg1 ;
-(void)setTextEntryField:(UITextField *)arg1 ;
-(void)setFailedLabel:(UILabel *)arg1 ;
-(void)setFailedBackground:(UIImageView *)arg1 ;
-(id)initWithPrinterName:(id)arg1 ;
-(void)startPINInput;
-(void)stopPINInput;
-(id)PIN;
-(void)showSuccess:(char)arg1 ;
-(UILabel *)enterLabel;
-(UIPasscodeField *)passcodeField;
-(UITextField *)textEntryField;
-(UILabel *)failedLabel;
-(UIImageView *)failedBackground;
-(int)failedAttemptCount;
-(void)setFailedAttemptCount:(int)arg1 ;
@end

