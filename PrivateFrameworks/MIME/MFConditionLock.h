/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSConditionLock.h>
#import <libobjc.A.dylib/MFLockObject.h>

@class NSString;

@interface MFConditionLock : NSConditionLock <MFLockObject> {

	NSString* _name;
	id _delegate;

}
+(void)initialize;
-(char)lockBeforeDate:(id)arg1 ;
-(id)initWithName:(id)arg1 andDelegate:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)unlock;
-(void)unlockWithCondition:(int)arg1 ;
-(char)isLockedByMe;
-(id)initWithName:(id)arg1 condition:(int)arg2 andDelegate:(id)arg3 ;
-(char)lockWhenCondition:(int)arg1 beforeDate:(id)arg2 ;
@end

