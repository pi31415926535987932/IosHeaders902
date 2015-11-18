/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:08 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertController.h>

@protocol PKPaymentConfirmationAlertControllerDelegate;
@interface PKPaymentConfirmationAlertController : UIAlertController {

	int _confirmationMethod;
	id<PKPaymentConfirmationAlertControllerDelegate> _delegate;

}

@property (nonatomic,readonly) int confirmationMethod;                                               //@synthesize confirmationMethod=_confirmationMethod - In the implementation block
@property (assign,nonatomic) id<PKPaymentConfirmationAlertControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithConfirmationMethod:(int)arg1 pass:(id)arg2 isPayment:(char)arg3 ;
-(int)confirmationMethod;
-(void)setDelegate:(id<PKPaymentConfirmationAlertControllerDelegate>)arg1 ;
-(id<PKPaymentConfirmationAlertControllerDelegate>)delegate;
@end

