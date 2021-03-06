/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:46:13 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/_CFXNotificationTokenRegistration.h>

@protocol OS_xpc_object;
@class NSObject;

@interface _CFXNotificationDistributedTokenRegistration : _CFXNotificationTokenRegistration {

	NSObject*<OS_xpc_object> _connection;
	opaque_pthread_mutex_t _connectionLock;

}
-(id)initWithToken:(unsigned long long)arg1 connection:(id)arg2 options:(unsigned long)arg3 queue:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)invalidate;
@end

