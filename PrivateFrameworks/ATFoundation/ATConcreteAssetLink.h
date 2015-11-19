/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ATFoundation/ATAssetLink.h>
#import <ATFoundation/ATMessageLinkObserver.h>

@protocol ATAssetLinkDelegate, OS_dispatch_queue, OS_dispatch_semaphore;
@class ATMessageLink, NSMutableArray, NSMutableSet, NSObject, NSString;

@interface ATConcreteAssetLink : NSObject <ATAssetLink, ATMessageLinkObserver> {

	ATMessageLink* _messageLink;
	char _open;
	id<ATAssetLinkDelegate> _delegate;
	NSMutableArray* _outstandingAssets;
	NSMutableSet* _readers;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _fileIOQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	int _pendingWriteAmount;
	NSObject*<OS_dispatch_semaphore> _pendingWriteSemaphore;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isOpen,nonatomic,readonly) char open;                            //@synthesize open=_open - In the implementation block
@property (assign,nonatomic,__weak) id<ATAssetLinkDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<ATAssetLinkDelegate>)arg1 ;
-(id<ATAssetLinkDelegate>)delegate;
-(unsigned)priority;
-(void)close;
-(void)_requestAsset:(id)arg1 ;
-(id)_urlForWritingAsset:(id)arg1 withFileName:(id)arg2 ;
-(void)messageLinkWasClosed:(id)arg1 ;
-(id)enqueueAssets:(id)arg1 force:(char)arg2 ;
-(char)canEnqueueAsset:(id)arg1 ;
-(void)cancelAssets:(id)arg1 ;
-(void)prioritizeAsset:(id)arg1 ;
-(unsigned)maximumBatchSize;
-(char)linkIsReady;
-(id)initWithMessageLink:(id)arg1 ;
-(void)_finishAsset:(id)arg1 withError:(id)arg2 ;
-(char)open;
-(char)isOpen;
@end

