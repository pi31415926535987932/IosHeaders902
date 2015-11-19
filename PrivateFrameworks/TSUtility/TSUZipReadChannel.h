/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TSUtility/TSUStreamReadChannel.h>

@protocol TSUReadChannel, OS_dispatch_queue;
@class TSUZipEntry, NSObject, NSString;

@interface TSUZipReadChannel : NSObject <TSUStreamReadChannel> {

	TSUZipEntry* _entry;
	id<TSUReadChannel> _archiveReadChannel;
	NSObject*<OS_dispatch_queue> _readQueue;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEntry:(id)arg1 archiveReadChannel:(id)arg2 ;
-(void)handleFailureWithQueue:(id)arg1 handler:(/*^block*/id)arg2 error:(id)arg3 ;
-(char)readFileHeaderFromData:(id)arg1 headerLength:(unsigned*)arg2 ;
-(void)readWithHeaderLength:(unsigned long)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(char)processData:(id)arg1 CRC:(unsigned*)arg2 isDone:(char)arg3 queue:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)readWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)close;
@end

