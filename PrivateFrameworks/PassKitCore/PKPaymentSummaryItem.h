/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDecimalNumber;

@interface PKPaymentSummaryItem : NSObject <NSCopying, NSSecureCoding> {

	NSString* _label;
	NSDecimalNumber* _amount;
	unsigned _type;

}

@property (nonatomic,copy) NSString * label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * amount;              //@synthesize amount=_amount - In the implementation block
@property (assign,nonatomic) unsigned type;                       //@synthesize type=_type - In the implementation block
+(char)supportsSecureCoding;
+(id)summaryItemWithLabel:(id)arg1 amount:(id)arg2 ;
+(id)summaryItemWithLabel:(id)arg1 amount:(id)arg2 type:(unsigned)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)amount;
-(char)isEqualToPaymentSummaryItem:(id)arg1 ;
@end

