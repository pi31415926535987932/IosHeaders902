/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:45:49 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, NSPersistentStore, PFUbiquityLocation, NSLock, NSObject;

@interface PFUbiquityImportOperation : NSOperation {

	NSString* _localPeerID;
	NSString* _storeName;
	NSPersistentStore* _store;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSLock* _delegateLock;
	char _lockedDelegateLock;
	NSObject* _delegate;

}

@property (nonatomic,readonly) NSString * localPeerID;                                 //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,readonly) NSString * storeName;                                   //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * ubiquityRootLocation;              //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (nonatomic,readonly) NSPersistentStore * store;                              //@synthesize store=_store - In the implementation block
@property (assign) NSObject * delegate; 
-(NSPersistentStore *)store;
-(NSString *)localPeerID;
-(NSString *)storeName;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(id)initWithPersistentStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(id)retainedDelegate;
-(void)storeWillBeRemoved:(id)arg1 ;
-(void)lockDelegateLock;
-(void)unlockDelegateLock;
-(id)initWithStoreName:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(void)cancel;
-(void)setDelegate:(NSObject *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSObject *)delegate;
@end

