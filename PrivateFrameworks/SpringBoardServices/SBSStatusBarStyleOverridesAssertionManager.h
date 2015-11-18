/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 5:00:33 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBSStatusBarStyleOverridesAssertionClient.h>

@protocol OS_dispatch_queue;
@class NSMapTable, NSXPCConnection, NSObject, NSString;

@interface SBSStatusBarStyleOverridesAssertionManager : NSObject <SBSStatusBarStyleOverridesAssertionClient> {

	NSMapTable* _assertionsByIdentifier;
	NSXPCConnection* _sbXPCConnection;
	NSObject*<OS_dispatch_queue> _internalQueue;

}

@property (nonatomic,retain) NSMapTable * assertionsByIdentifier;                     //@synthesize assertionsByIdentifier=_assertionsByIdentifier - In the implementation block
@property (nonatomic,retain) NSXPCConnection * sbXPCConnection;                       //@synthesize sbXPCConnection=_sbXPCConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)removeStatusBarStyleOverridesAssertion:(id)arg1 ;
-(void)updateStatusStringForAssertion:(id)arg1 ;
-(void)addStatusBarStyleOverridesAssertion:(id)arg1 withHandler:(/*^block*/id)arg2 onQueue:(id)arg3 ;
-(void)invalidateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1 ;
-(void)_reactivateAssertions;
-(void)_internalQueue_removeStatusBarStyleOverridesAssertionWithIdentifier:(id)arg1 invalidate:(char)arg2 ;
-(NSMapTable *)assertionsByIdentifier;
-(void)setAssertionsByIdentifier:(NSMapTable *)arg1 ;
-(NSXPCConnection *)sbXPCConnection;
-(void)setSbXPCConnection:(NSXPCConnection *)arg1 ;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_tearDownXPCConnection;
@end

