/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:24:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeKit/HMEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSCopying;
@class HMCharacteristic;

@interface HMCharacteristicEvent : HMEvent <NSSecureCoding> {

	id<NSCopying> _triggerValue;
	HMCharacteristic* _characteristic;

}

@property (nonatomic,readonly) HMCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,copy) id<NSCopying> triggerValue;                         //@synthesize triggerValue=_triggerValue - In the implementation block
+(char)supportsSecureCoding;
-(id)_serializeForAdd;
-(void)_updateTriggerValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<NSCopying>)triggerValue;
-(id)initWithCharacteristic:(id)arg1 triggerValue:(id)arg2 ;
-(void)setTriggerValue:(id<NSCopying>)arg1 ;
-(void)updateTriggerValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(HMCharacteristic *)characteristic;
-(char)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
@end

