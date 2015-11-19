/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSInputStream.h>
#import <libobjc.A.dylib/_SYStreamRunLoopSourceHandler.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <libobjc.A.dylib/SYStreamEventHandlerBlocks.h>
#import <libobjc.A.dylib/SYStreamThroughputCounter.h>
#import <libobjc.A.dylib/SYStreamProgress.h>

@class NSURL, _SYStreamGuts, NSProgress, NSString;

@interface SYCompressedFileInputStream : NSInputStream <_SYStreamRunLoopSourceHandler, NSStreamDelegate, SYStreamEventHandlerBlocks, SYStreamThroughputCounter, SYStreamProgress> {

	NSURL* _url;
	void* _file;
	_SYStreamGuts* _internal;
	/*^block*/id _onOpenComplete;
	/*^block*/id _onBytesAvailable;
	/*^block*/id _onSpaceAvailable;
	/*^block*/id _onEndOfFile;
	/*^block*/id _onError;
	/*^block*/id _onClose;
	NSProgress* _progress;
	unsigned long long _byteCount;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_internal,nonatomic,readonly) _SYStreamGuts * internal; 
@property (nonatomic,copy) id onOpenComplete;                                          //@synthesize onOpenComplete=_onOpenComplete - In the implementation block
@property (nonatomic,copy) id onBytesAvailable;                                        //@synthesize onBytesAvailable=_onBytesAvailable - In the implementation block
@property (nonatomic,copy) id onSpaceAvailable;                                        //@synthesize onSpaceAvailable=_onSpaceAvailable - In the implementation block
@property (nonatomic,copy) id onEndOfFile;                                             //@synthesize onEndOfFile=_onEndOfFile - In the implementation block
@property (nonatomic,copy) id onError;                                                 //@synthesize onError=_onError - In the implementation block
@property (nonatomic,copy) id onClose;                                                 //@synthesize onClose=_onClose - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesThroughput;                     //@synthesize byteCount=_byteCount - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                    //@synthesize progress=_progress - In the implementation block
-(id)_internal;
-(id)initWithFileAtPath:(id)arg1 ;
-(char)getBuffer:(char**)arg1 length:(unsigned*)arg2 ;
-(void)stream:(id)arg1 handleEvent:(unsigned)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(id)initWithData:(id)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)close;
-(NSProgress *)progress;
-(void)_SY_notifyOnQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithCompressedFileAtURL:(id)arg1 ;
-(void)_postEventToDelegate:(unsigned)arg1 ;
-(id)onOpenComplete;
-(void)setOnOpenComplete:(id)arg1 ;
-(id)onBytesAvailable;
-(void)setOnBytesAvailable:(id)arg1 ;
-(id)onSpaceAvailable;
-(void)setOnSpaceAvailable:(id)arg1 ;
-(id)onEndOfFile;
-(void)setOnEndOfFile:(id)arg1 ;
-(id)onError;
-(void)setOnError:(id)arg1 ;
-(id)onClose;
-(void)setOnClose:(id)arg1 ;
-(unsigned long long)bytesThroughput;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)open;
-(unsigned)streamStatus;
-(char)hasBytesAvailable;
-(int)read:(char*)arg1 maxLength:(unsigned)arg2 ;
-(id)streamError;
@end

