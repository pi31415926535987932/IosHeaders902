/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:24:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSString, NSDate, HMHome, HMThreadSafeMutableArrayCollection, HMMessageDispatcher, NSObject, HMDelegateCaller, NSArray;

@interface HMTrigger : NSObject <HMMessageReceiver, NSSecureCoding, HMObjectMerge> {

	char _enabled;
	NSString* _name;
	NSUUID* _uniqueIdentifier;
	NSDate* _lastFireDate;
	NSUUID* _uuid;
	HMHome* _home;
	HMThreadSafeMutableArrayCollection* _currentActionSets;
	HMMessageDispatcher* _msgDispatcher;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMDelegateCaller* _delegateCaller;

}

@property (nonatomic,copy) NSString * name;                                                       //@synthesize name=_name - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;                                       //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actionSets; 
@property (nonatomic,copy) NSDate * lastFireDate;                                                 //@synthesize lastFireDate=_lastFireDate - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                    //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                       //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) HMThreadSafeMutableArrayCollection * currentActionSets;              //@synthesize currentActionSets=_currentActionSets - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                                                //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HMMessageDispatcher * msgDispatcher;                                 //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;                            //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;                          //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) HMDelegateCaller * delegateCaller;                                   //@synthesize delegateCaller=_delegateCaller - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(char)supportsSecureCoding;
-(HMDelegateCaller *)delegateCaller;
-(void)setLastFireDate:(NSDate *)arg1 ;
-(id)_serializeForAdd;
-(void)setDelegateCaller:(HMDelegateCaller *)arg1 ;
-(void)_registerNotificationHandlers;
-(void)_unconfigure;
-(void)_addActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateActionSet:(id)arg1 add:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_removeActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_enable:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleTriggerFired:(id)arg1 ;
-(void)_handleUpdatedActionSetNotification:(id)arg1 ;
-(void)_handleTriggerRenamedNotification:(id)arg1 ;
-(void)_handleTriggerActivatedNotification:(id)arg1 ;
-(void)_handleTriggerFiredNotification:(id)arg1 ;
-(void)_configure:(id)arg1 uuid:(id)arg2 messageDispatcher:(id)arg3 clientQueue:(id)arg4 delegateCaller:(id)arg5 ;
-(void)addActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)enable:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(NSUUID *)uniqueIdentifier;
-(void)_invalidate;
-(id)initWithName:(id)arg1 ;
-(NSUUID *)uuid;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSDate *)lastFireDate;
-(HMMessageDispatcher *)msgDispatcher;
-(NSArray *)actionSets;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(void)setMsgDispatcher:(HMMessageDispatcher *)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMThreadSafeMutableArrayCollection *)currentActionSets;
-(void)setCurrentActionSets:(HMThreadSafeMutableArrayCollection *)arg1 ;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(char)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)setUuid:(NSUUID *)arg1 ;
@end

