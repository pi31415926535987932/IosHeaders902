/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKPassLibraryDataProvider <NSObject>
@property (nonatomic,readonly) char canAddPaymentPass; 
@required
-(void)removePass:(id)arg1;
-(id)passWithUniqueID:(id)arg1;
-(char)canAddPaymentPass;
-(id)paymentPasses;
-(id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;

@end

