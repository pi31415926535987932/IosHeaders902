/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:23 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface SAClassRegistry : NSObject {

	NSMutableDictionary* _classesByAceClassNameByGroupIdentifier;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (getter=_classesByAceClassNameByGroupIdentifier,nonatomic,readonly) NSMutableDictionary * classesByAceClassNameByGroupIdentifier;              //@synthesize classesByAceClassNameByGroupIdentifier=_classesByAceClassNameByGroupIdentifier - In the implementation block
@property (getter=_queue,nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                                                         //@synthesize queue=_queue - In the implementation block
+(id)sharedClassRegistry;
-(void)dealloc;
-(id)init;
-(id)_queue;
-(Class)classForAceClassWithName:(id)arg1 inGroupWithIdentifier:(id)arg2 ;
-(void)registerClass:(Class)arg1 forAceClassWithName:(id)arg2 inGroupWithIdentifier:(id)arg3 ;
-(id)_classesByAceClassNameByGroupIdentifier;
-(void)_accessMutableStateWithBlock:(/*^block*/id)arg1 ;
@end

