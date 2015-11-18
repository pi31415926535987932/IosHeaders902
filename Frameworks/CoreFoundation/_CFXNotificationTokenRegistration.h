/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:46:13 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/_CFXNotificationRegistrationBase.h>

@interface _CFXNotificationTokenRegistration : _CFXNotificationRegistrationBase {

	unsigned long long _token;
	unsigned long _options;
	/*^block*/id _handler;
	char _registered;

}

@property (readonly) unsigned long long token;                         //@synthesize token=_token - In the implementation block
@property (readonly) unsigned long options;                            //@synthesize options=_options - In the implementation block
@property (retain) id queue; 
@property (copy,readonly) id handler; 
@property (getter=isRegistered,readonly) char registered;              //@synthesize registered=_registered - In the implementation block
@property (readonly) CFStringRef name; 
@property (readonly) void* object; 
@property (readonly) void* observer; 
+(const SCD_Struct_CF1*)keyCallbacks;
+(id)createTokenRegistration:(int)arg1 token:(unsigned long long)arg2 connection:(id)arg3 notifyToken:(int)arg4 options:(unsigned long)arg5 queue:(id)arg6 handler:(/*^block*/id)arg7 ;
+(id)find:(unsigned long long)arg1 ;
+(void)remove:(unsigned long long)arg1 ;
-(char)isRegistered;
-(id)initWithToken:(unsigned long long)arg1 options:(unsigned long)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)_removeFromParent;
-(/*^block*/id)copyHandler;
-(void)addToObserver:(id)arg1 ;
-(id)queue;
-(void)setQueue:(id)arg1 ;
-(void)dealloc;
-(CFStringRef)name;
-(void*)key;
-(void)invalidate;
-(void*)object;
-(void*)observer;
-(id)handler;
-(unsigned long)options;
-(void)_invalidate;
-(unsigned long long)token;
-(void)finalize;
-(void)removeFromParent;
@end

