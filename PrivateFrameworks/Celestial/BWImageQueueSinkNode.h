/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSinkNode.h>

@protocol BWImageQueueSinkNodePreviewTapDelegate, OS_os_transaction;
@class NSObject;

@interface BWImageQueueSinkNode : BWSinkNode {

	unsigned _imageQueueCapacity;
	unsigned _imageQueueWidth;
	unsigned _imageQueueHeight;
	unsigned _imageQueueFreeSlots;
	CAImageQueueRef _imageQueue;
	unsigned _imageQueueSlot;
	char _syncedWithDisplay;
	char _resetPreviewSynchronizerOnNextFrame;
	OpaqueFigPreviewSynchronizerRef _previewSynchronizer;
	id<BWImageQueueSinkNodePreviewTapDelegate> _previewTapDelegate;
	NSObject*<OS_os_transaction> _holdingBuffersForClientAssertion;

}

@property (nonatomic,readonly) CAImageQueueRef imageQueue; 
@property (nonatomic,readonly) unsigned imageQueueSlot; 
@property (assign,nonatomic) id<BWImageQueueSinkNodePreviewTapDelegate> previewTapDelegate;              //@synthesize previewTapDelegate=_previewTapDelegate - In the implementation block
+(void)initialize;
-(void)dealloc;
-(CAImageQueueRef)imageQueue;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)initWithHFRSupport:(unsigned char)arg1 ;
-(unsigned)imageQueueSlot;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)inputConnectionWillBeEnabled;
-(void)setSyncedWithDisplay:(char)arg1 ;
-(void)setPreviewTapDelegate:(id<BWImageQueueSinkNodePreviewTapDelegate>)arg1 ;
-(void)makeCurrentConfigurationLive;
-(char)hasNonLiveConfigurationChanges;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)_ensureImageQueue;
-(char)syncedWithDisplay;
-(id<BWImageQueueSinkNodePreviewTapDelegate>)previewTapDelegate;
@end

