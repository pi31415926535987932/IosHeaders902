/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PKPaymentDataItem.h>

@class PKPaymentPass, PKPaymentApplication, CNContact;

@interface PKPaymentCardDataItem : PKPaymentDataItem

@property (nonatomic,readonly) PKPaymentPass * pass; 
@property (nonatomic,readonly) PKPaymentApplication * paymentApplication; 
@property (nonatomic,readonly) char requiresBillingAddress; 
@property (nonatomic,readonly) CNContact * billingAddress; 
+(int)dataType;
-(char)isValidWithError:(id*)arg1 ;
-(char)requiresBillingAddress;
-(CNContact *)billingAddress;
-(PKPaymentApplication *)paymentApplication;
-(int)status;
-(PKPaymentPass *)pass;
@end

