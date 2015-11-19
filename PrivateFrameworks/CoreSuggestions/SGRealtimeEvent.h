/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SGEvent, NSString;

@interface SGRealtimeEvent : NSObject <NSSecureCoding, NSCopying> {

	char _isHarvested;
	int _state;
	SGEvent* _event;
	NSString* _eventIdentifier;

}

@property (nonatomic,readonly) int state;                               //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) SGEvent * event;                         //@synthesize event=_event - In the implementation block
@property (nonatomic,readonly) NSString * eventIdentifier;              //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
@property (nonatomic,readonly) char isHarvested;                        //@synthesize isHarvested=_isHarvested - In the implementation block
+(char)supportsSecureCoding;
+(id)realtimeEventForCanceledEvent:(id)arg1 eventIdentifier:(id)arg2 harvested:(char)arg3 ;
+(id)realtimeEventForNewEvent:(id)arg1 harvested:(char)arg2 ;
+(id)realtimeEventForNearDuplicateEvent:(id)arg1 ;
+(id)realtimeEventUpdateToEvent:(id)arg1 withNewValues:(id)arg2 harvested:(char)arg3 ;
+(id)realtimeEventForCanceledEvent:(id)arg1 eventIdentifier:(id)arg2 ;
+(id)realtimeEventForNearDuplicateEvent:(id)arg1 harvested:(char)arg2 ;
+(id)realtimeEventForDuplicateEvent:(id)arg1 eventIdentifier:(id)arg2 harvested:(char)arg3 ;
+(id)realtimeEventUpdateToEvent:(id)arg1 withNewValues:(id)arg2 ;
+(id)realtimeEventForDuplicateEvent:(id)arg1 eventIdentifier:(id)arg2 ;
+(id)realtimeEventForNewEvent:(id)arg1 ;
-(NSString *)eventIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SGEvent *)event;
-(char)isEqualToRealtimeEvent:(id)arg1 ;
-(id)initWithState:(int)arg1 event:(id)arg2 eventIdentifier:(id)arg3 harvested:(char)arg4 ;
-(char)isHarvested;
@end

