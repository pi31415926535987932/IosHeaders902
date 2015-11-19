/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:45 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SoftwareBehaviorServices.framework/SoftwareBehaviorServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SoftwareBehaviorServices/SoftwareBehaviorServices-Structs.h>
@class NSMutableDictionary, NSLock;

@interface SBManagerClientCache : NSObject {

	char _behaviorBundleSupport;
	char _behaviorBundleSupportKnown;
	NSMutableDictionary* _keyValueCache;
	NSLock* _cacheLock;
	dispatch_queue_sRef _queue;
	map<std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *> >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *> > > > >* fCallbacks;

}

@property (assign) char behaviorBundleSupport;                       //@synthesize behaviorBundleSupport=_behaviorBundleSupport - In the implementation block
@property (assign) char behaviorBundleSupportKnown;                  //@synthesize behaviorBundleSupportKnown=_behaviorBundleSupportKnown - In the implementation block
@property (assign) NSMutableDictionary * keyValueCache;              //@synthesize keyValueCache=_keyValueCache - In the implementation block
@property (assign) NSLock * cacheLock;                               //@synthesize cacheLock=_cacheLock - In the implementation block
@property (assign) dispatch_queue_sRef queue;                        //@synthesize queue=_queue - In the implementation block
+(id)sharedInstance;
-(dispatch_queue_sRef)queue;
-(void)setQueue:(dispatch_queue_sRef)arg1 ;
-(id)init;
-(void)setCacheLock:(NSLock *)arg1 ;
-(void)saveBehaviorBundleSupport:(char)arg1 withValue:(char)arg2 ;
-(void)setKeyValueCache:(NSMutableDictionary *)arg1 ;
-(NSLock *)cacheLock;
-(NSMutableDictionary *)keyValueCache;
-(void)setBehaviorBundleSupportKnown:(char)arg1 ;
-(void)setBehaviorBundleSupport:(char)arg1 ;
-(void)resetKeyValueCache;
-(id)copyCachedValueFor:(id)arg1 ;
-(void)cacheValue:(id)arg1 forKey:(id)arg2 ;
-(void)registerCallbackForEvent:(id)arg1 with:(EventCallbackData*)arg2 ;
-(BOOL)deregisterCallbackForEvent:(EventCallbackData*)arg1 ;
-(void)callCallbacksForEvent:(id)arg1 ;
-(char)behaviorBundleSupport;
-(char)behaviorBundleSupportKnown;
@end

