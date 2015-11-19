/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIBuyButtonDescriptor.h>

@class NSString, SKUIStoreIdentifier;

@interface SKUIMutableBuyButtonDescriptor : SKUIBuyButtonDescriptor

@property (nonatomic,copy) NSString * buttonText; 
@property (assign,nonatomic) int buttonType; 
@property (nonatomic,copy) NSString * confirmationText; 
@property (assign,nonatomic) unsigned elementType; 
@property (nonatomic,retain) SKUIStoreIdentifier * storeIdentifier; 
@property (assign,nonatomic) long long itemIdentifier; 
@property (nonatomic,copy) NSString * variantIdentifier; 
-(void)setButtonType:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setItemIdentifier:(long long)arg1 ;
-(void)setStoreIdentifier:(SKUIStoreIdentifier *)arg1 ;
-(void)setVariantIdentifier:(NSString *)arg1 ;
-(void)setButtonText:(NSString *)arg1 ;
-(void)setConfirmationText:(NSString *)arg1 ;
-(void)setElementType:(unsigned)arg1 ;
@end

