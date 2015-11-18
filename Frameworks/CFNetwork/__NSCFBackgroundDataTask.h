/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:22:43 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/__NSCFBackgroundSessionTask.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_io, OS_dispatch_semaphore;
@class NSInputStream, NSObject, NSFileHandle, NSString;

@interface __NSCFBackgroundDataTask : __NSCFBackgroundSessionTask <NSStreamDelegate> {

	NSInputStream* _requestBodyStream;
	NSInputStream* _initialStream;
	NSObject*<OS_dispatch_queue> _writeQueue;
	NSFileHandle* _readHandle;
	NSObject*<OS_dispatch_io> _pipeIO;
	unsigned _bytesRead;
	NSObject*<OS_dispatch_semaphore> _streamOpenedSema;
	char _finishedOpen;
	char _openedStreamDuringNeedNewBodyStream;
	char _streamBased;
	/*^block*/id _streamWriteCompletion;

}

@property (getter=isStreamBased,readonly) char streamBased;              //@synthesize streamBased=_streamBased - In the implementation block
@property (copy) id streamWriteCompletion;                               //@synthesize streamWriteCompletion=_streamWriteCompletion - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_onqueue_didFinishWithError:(id)arg1 ;
-(void)_onqueue_didReceiveResponse:(id)arg1 redirectRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_onqueue_needNewBodyStream:(char)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithSession:(id)arg1 remoteSession:(id)arg2 request:(id)arg3 ident:(unsigned)arg4 ;
-(void)_onqueue_willBeRetried;
-(void)_onqueue_didReceiveResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_onqueue_didReceiveData:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_onqueue_captureStream:(id)arg1 ;
-(void)_onqueue_openStream;
-(void)_onqueue_finishStream:(char)arg1 ;
-(id)streamWriteCompletion;
-(void)setStreamWriteCompletion:(id)arg1 ;
-(void)_onqueue_invokeStreamWriteCompletion;
-(void)readFromStream;
-(char)isStreamBased;
-(void)stream:(id)arg1 handleEvent:(unsigned)arg2 ;
-(void)dealloc;
-(char)isKindOfClass:(Class)arg1 ;
@end

