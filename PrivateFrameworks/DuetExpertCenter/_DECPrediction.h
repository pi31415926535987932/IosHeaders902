/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:03 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, _DECPredictionExpiry, NSDictionary, NSDate;

@interface _DECPrediction : NSObject <NSSecureCoding> {

	NSArray* _items;
	_DECPredictionExpiry* _expiry;
	int _reason;
	NSDictionary* _reasonMetadata;
	NSDate* _creationDate;

}

@property (nonatomic,retain) NSArray * items;                              //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) _DECPredictionExpiry * expiry;              //@synthesize expiry=_expiry - In the implementation block
@property (assign,nonatomic) int reason;                                   //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSDictionary * reasonMetadata;                //@synthesize reasonMetadata=_reasonMetadata - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                        //@synthesize creationDate=_creationDate - In the implementation block
+(char)supportsSecureCoding;
+(id)predictionWithItems:(id)arg1 expiry:(id)arg2 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setReason:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(int)reason;
-(_DECPredictionExpiry *)expiry;
-(NSDictionary *)reasonMetadata;
-(void)setReasonMetadata:(NSDictionary *)arg1 ;
-(void)filterItems:(id)arg1 ;
-(id)initWithItems:(id)arg1 expiry:(id)arg2 ;
@end

