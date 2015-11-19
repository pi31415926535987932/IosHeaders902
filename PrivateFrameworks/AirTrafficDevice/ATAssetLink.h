/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ATAssetLink <NSObject>
@property (getter=isOpen,nonatomic,readonly) char open; 
@property (assign,nonatomic,__weak) id<ATAssetLinkDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id<ATAssetLinkDelegate>)delegate;
-(unsigned)priority;
-(void)close;
-(id)enqueueAssets:(id)arg1 force:(char)arg2;
-(char)canEnqueueAsset:(id)arg1;
-(void)cancelAssets:(id)arg1;
-(void)prioritizeAsset:(id)arg1;
-(unsigned)maximumBatchSize;
-(char)linkIsReady;
-(char)open;
-(char)isOpen;

@end
