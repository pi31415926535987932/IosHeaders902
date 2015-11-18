/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:01 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, AVWeakReference;

@interface AVAssetWriterInputMediaDataRequester : NSObject {

	NSObject*<OS_dispatch_queue> _requestQueue;
	/*^block*/id _requestBlock;
	NSObject*<OS_dispatch_queue> _ivarAccessQueue;
	AVWeakReference* _weakReferenceToDelegate;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> requestQueue;                  //@synthesize requestQueue=_requestQueue - In the implementation block
@property (__weak) id<AVAssetWriterInputMediaDataRequesterDelegate> delegate; 
-(id)initWithRequestQueue:(id)arg1 requestBlock:(/*^block*/id)arg2 ;
-(void)requestMediaDataIfNecessary;
-(void)_collectUncollectables_invokedFromDeallocAndFinalize;
-(void)setDelegate:(id<AVAssetWriterInputMediaDataRequesterDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<AVAssetWriterInputMediaDataRequesterDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(void)finalize;
@end

