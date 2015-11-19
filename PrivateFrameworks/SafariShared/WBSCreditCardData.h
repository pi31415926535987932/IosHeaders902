/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDate;

@interface WBSCreditCardData : NSObject {

	NSString* _cardName;
	NSString* _cardholderName;
	NSString* _cardNumber;
	NSDate* _expirationDate;

}

@property (nonatomic,copy) NSString * cardName;                           //@synthesize cardName=_cardName - In the implementation block
@property (nonatomic,copy) NSString * cardholderName;                     //@synthesize cardholderName=_cardholderName - In the implementation block
@property (nonatomic,copy) NSString * cardNumber;                         //@synthesize cardNumber=_cardNumber - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
-(NSString *)cardholderName;
-(void)setCardholderName:(NSString *)arg1 ;
-(id)description;
-(NSDate *)expirationDate;
-(id)initWithCardName:(id)arg1 number:(id)arg2 cardholderName:(id)arg3 expirationDate:(id)arg4 ;
-(id)initWithKeychainRepresentation:(id)arg1 ;
-(id)initWithCameraReaderOutput:(id)arg1 ;
-(id)keychainRepresentation;
-(id)creditCardDataByMergingCardholderNameAndExpirationDateFromCard:(id)arg1 ;
-(NSString *)cardName;
-(void)setCardName:(NSString *)arg1 ;
-(NSString *)cardNumber;
-(void)setCardNumber:(NSString *)arg1 ;
@end

