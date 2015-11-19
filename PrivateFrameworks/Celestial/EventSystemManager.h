/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:23 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSMutableArray;

@interface EventSystemManager : NSObject {

	IOHIDEventSystemClientRef eventSystemClient;
	NSMutableArray* clientList;
	CFRunLoopRef runLoop;
	char manageAccel;
	int accelEventIndex;
	int accelUpdateInternalUS;

}
+(id)sharedEventSystem;
-(void)dealloc;
-(id)init;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(char)managingAccel;
-(void)setAccelUpdateInterval:(double)arg1 ;
-(void)updateClientState;
-(void)refreshEventSystem;
-(IOHIDEventSystemClientRef)eventSystemClient;
-(id)clientList;
@end

