/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:46:14 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSTimeZone.h>

@interface __NSTimeZone : NSTimeZone {

	CFStringRef _name;
	CFDataRef _data;
	void* _ucal;
	opaque_pthread_mutex_t _lock;

}
+(id)__new:(CFStringRef)arg1 data:(CFDataRef)arg2 ;
+(id)__new:(CFStringRef)arg1 cache:(char)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)abbreviationForDate:(id)arg1 ;
-(void)dealloc;
-(id)name;
-(id)data;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1 ;
-(int)secondsFromGMTForDate:(id)arg1 ;
-(id)localizedName:(int)arg1 locale:(id)arg2 ;
-(char)isDaylightSavingTimeForDate:(id)arg1 ;
-(double)daylightSavingTimeOffsetForDate:(id)arg1 ;
-(void)finalize;
@end

