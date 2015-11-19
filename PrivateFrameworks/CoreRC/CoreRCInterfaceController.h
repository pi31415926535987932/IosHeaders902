/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRC/CoreRCInterfaceListenerDelegate.h>

@protocol CoreRCInterfaceControllerDelegate, OS_dispatch_queue;
@class NSMutableArray, NSObject, CECFakeInterfaceListener, NSArray, NSString;

@interface CoreRCInterfaceController : NSObject <CoreRCInterfaceListenerDelegate> {

	NSMutableArray* _interfaceListeners;
	id<CoreRCInterfaceControllerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) CECFakeInterfaceListener * fakeInterfaceListener; 
@property (assign,nonatomic) id<CoreRCInterfaceControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSArray * interfaceListeners;                                  //@synthesize interfaceListeners=_interfaceListeners - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setDelegate:(id<CoreRCInterfaceControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CoreRCInterfaceControllerDelegate>)delegate;
-(void)startOnQueue:(id)arg1 ;
-(NSArray *)interfaceListeners;
-(CECFakeInterfaceListener *)fakeInterfaceListener;
-(void)interfaceListener:(id)arg1 didAddInterface:(id)arg2 ;
-(void)interfaceListener:(id)arg1 didRemoveInterface:(id)arg2 ;
-(id)firstInterface;
-(char)addInterfaceListenerClass:(Class)arg1 ;
-(char)addBundlesFromPaths:(id)arg1 expectedClass:(Class)arg2 ;
@end

