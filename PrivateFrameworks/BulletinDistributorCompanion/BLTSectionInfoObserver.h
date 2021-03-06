/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBObserverDelegate.h>

@protocol OS_dispatch_queue, BLTSectionInfoObserverDelegate;
@class BBObserver, NSObject, NSString;

@interface BLTSectionInfoObserver : NSObject <BBObserverDelegate> {

	BBObserver* _observer;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _reloadSectionInfoCompletion;
	id<BLTSectionInfoObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BLTSectionInfoObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<BLTSectionInfoObserverDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<BLTSectionInfoObserverDelegate>)delegate;
-(void)observer:(id)arg1 updateSectionInfo:(id)arg2 ;
-(void)observer:(id)arg1 noteServerConnectionStateChanged:(char)arg2 ;
-(void)_reconnectObserver;
-(void)reloadWithCompletion:(/*^block*/id)arg1 ;
-(void)updateSectionInfoBySectionIDs:(id)arg1 ;
-(void)_reloadSectionInfosWithCompletion:(/*^block*/id)arg1 ;
-(void)_getBBSectionInfoExtendedProperties:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

