/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:20:55 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSInputStream.h>

@interface NSCFInputStream : NSInputStream
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(char)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)initWithFileAtPath:(id)arg1 ;
-(char)getBuffer:(char**)arg1 length:(unsigned*)arg2 ;
-(char)_setCFClientFlags:(unsigned long)arg1 callback:(/*function pointer*/void*)arg2 context:(SCD_Struct_NS46*)arg3 ;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned)retainCount;
-(unsigned)hash;
-(id)delegate;
-(id)initWithData:(id)arg1 ;
-(char)allowsWeakReference;
-(id)initWithURL:(id)arg1 ;
-(char)retainWeakReference;
-(void)close;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)open;
-(void)finalize;
-(unsigned)streamStatus;
-(char)hasBytesAvailable;
-(int)read:(char*)arg1 maxLength:(unsigned)arg2 ;
-(id)streamError;
@end

