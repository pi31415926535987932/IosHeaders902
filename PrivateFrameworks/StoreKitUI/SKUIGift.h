/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString, SKUIItem, NSArray, SKUIGiftTheme;

@interface SKUIGift : NSObject <NSCopying> {

	int _category;
	NSDate* _deliveryDate;
	int _giftAmount;
	NSString* _giftAmountString;
	SKUIItem* _item;
	NSString* _message;
	NSArray* _recipientAddresses;
	NSString* _senderEmailAddress;
	NSString* _senderName;
	SKUIGiftTheme* _theme;
	NSString* _totalGiftAmountString;

}

@property (nonatomic,readonly) SKUIItem * item;                           //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) int giftCategory;                          //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSDate * deliveryDate;                         //@synthesize deliveryDate=_deliveryDate - In the implementation block
@property (assign,nonatomic) int giftAmount;                              //@synthesize giftAmount=_giftAmount - In the implementation block
@property (nonatomic,copy) NSString * giftAmountString;                   //@synthesize giftAmountString=_giftAmountString - In the implementation block
@property (nonatomic,copy) NSString * message;                            //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSArray * recipientAddresses;                  //@synthesize recipientAddresses=_recipientAddresses - In the implementation block
@property (nonatomic,copy) NSString * senderEmailAddress;                 //@synthesize senderEmailAddress=_senderEmailAddress - In the implementation block
@property (nonatomic,copy) NSString * senderName;                         //@synthesize senderName=_senderName - In the implementation block
@property (nonatomic,copy) NSString * totalGiftAmountString;              //@synthesize totalGiftAmountString=_totalGiftAmountString - In the implementation block
@property (nonatomic,copy) SKUIGiftTheme * theme;                         //@synthesize theme=_theme - In the implementation block
-(SKUIItem *)item;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(SKUIGiftTheme *)theme;
-(void)setTheme:(SKUIGiftTheme *)arg1 ;
-(void)setSenderEmailAddress:(NSString *)arg1 ;
-(NSDate *)deliveryDate;
-(int)giftAmount;
-(NSArray *)recipientAddresses;
-(NSString *)senderEmailAddress;
-(NSString *)senderName;
-(id)initWithGiftCategory:(int)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(id)HTTPBodyDictionary;
-(void)setDeliveryDate:(NSDate *)arg1 ;
-(void)setGiftAmount:(int)arg1 ;
-(NSString *)giftAmountString;
-(void)setGiftAmountString:(NSString *)arg1 ;
-(int)giftCategory;
-(void)setRecipientAddresses:(NSArray *)arg1 ;
-(void)setSenderName:(NSString *)arg1 ;
-(NSString *)totalGiftAmountString;
-(void)setTotalGiftAmountString:(NSString *)arg1 ;
@end

