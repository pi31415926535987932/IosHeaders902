/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/imagent.app/imagent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <imagent/PictureCacheProtocol.h>

@class NSMutableDictionary, NSMutableSet, IMTimer, NSRecursiveLock;

@interface PictureCache : NSObject <PictureCacheProtocol> {

	NSMutableDictionary* _dataCache;
	NSMutableDictionary* _pictureCache;
	NSMutableDictionary* _serviceMap;
	NSMutableDictionary* _keyMap;
	NSMutableDictionary* _customMap;
	NSMutableSet* _dirtySet;
	IMTimer* _purgeTimer;
	NSRecursiveLock* _lock;
	/*^block*/id _purgeCancelBlock;
	/*^block*/id _purgeEnqueueBlock;
	char _loaded;
	char _pictureCacheEnabled;
	char _pictureCacheIsDirty;
	char _pictureCacheInvalid;

}

@property (assign,nonatomic) char pictureCacheEnabled;              //@synthesize pictureCacheEnabled=_pictureCacheEnabled - In the implementation block
+(id)sharedInstance;
-(void)_loadIfNeeded;
-(id)_pictureNameMapPath;
-(void)syncMapFile;
-(void)setPictureCacheEnabled:(char)arg1 ;
-(char)pictureCacheEnabled;
-(id)pictureCachePath;
-(void)_touchDataCache;
-(id)picturePathForKey:(id)arg1 ;
-(void)_touchKey:(id)arg1 ;
-(void)_setCachedData:(id)arg1 forKey:(id)arg2 ;
-(void)_removeKey:(id)arg1 ;
-(void)_clearDataCache;
-(void)addKey:(id)arg1 toName:(id)arg2 inService:(id)arg3 ;
-(id)keyForName:(id)arg1 inService:(id)arg2 ;
-(void)_expireKey:(id)arg1 ;
-(id)_nameMapForService:(id)arg1 ;
-(void)markName:(id)arg1 asDirty:(char)arg2 ;
-(void)_postNameChanged:(id)arg1 toKey:(id)arg2 forService:(id)arg3 data:(id)arg4 ;
-(void)addKey:(id)arg1 toName:(id)arg2 inService:(id)arg3 data:(id)arg4 ;
-(id)hashForCustomKey:(id)arg1 ;
-(id)pictureForKey:(id)arg1 ;
-(id)_expiredKeys;
-(char)hasPictureForKey:(id)arg1 ;
-(id)addPicture:(id)arg1 toName:(id)arg2 inService:(id)arg3 ;
-(void)removeName:(id)arg1 inService:(id)arg2 ;
-(void)addCustomKey:(id)arg1 forHash:(id)arg2 ;
-(id)pictureForCustomKey:(id)arg1 ;
-(char)nameIsDirty:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_save;
-(void)_purgeMap;
-(void)flushCache;
-(void)_setPurgeTimer;
-(void)_daemonWillShutdown:(id)arg1 ;
-(void)writePictureCache;
-(void)pruneCache;
@end

