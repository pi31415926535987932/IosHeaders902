/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:25 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOPlaceDataProxy.h>

@class NSMapTable, NSLock, GEOPlaceDataCacheRegister, GEOPhoneNumberMUIDMapper, NSMutableSet, NSMutableOrderedSet, NSString;

@interface GEOPlaceDataLocalProxy : NSObject <GEOPlaceDataProxy> {

	NSMapTable* _pendingRequests;
	NSLock* _pendingRequestsLock;
	GEOPlaceDataCacheRegister* _cacheRegister;
	GEOPhoneNumberMUIDMapper* _phoneNumberMapper;
	NSMutableSet* _requestsInProgress;
	NSMutableOrderedSet* _placeHashes;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)clearCache;
-(void)cancelRequest:(id)arg1 ;
-(void)requestMUIDs:(id)arg1 resultProviderID:(int)arg2 includeETA:(char)arg3 traits:(id)arg4 options:(unsigned)arg5 auditToken:(id)arg6 requesterHandler:(/*^block*/id)arg7 ;
-(void)trackPlaceData:(id)arg1 ;
-(void)applyRAPUpdatedMapItems:(id)arg1 ;
-(void)requestComponentsFromNetwork:(id)arg1 muid:(unsigned long long)arg2 resultProviderID:(int)arg3 traits:(id)arg4 auditToken:(id)arg5 requesterHandler:(/*^block*/id)arg6 ;
-(void)requestPhoneNumbers:(id)arg1 allowCellularDataForLookup:(char)arg2 traits:(id)arg3 auditToken:(id)arg4 requesterHandler:(/*^block*/id)arg5 ;
-(void)performPlaceDataRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 networkActivity:(/*^block*/id)arg5 requesterHandler:(/*^block*/id)arg6 ;
-(void)shrinkBySize:(unsigned long long)arg1 finished:(/*^block*/id)arg2 ;
-(void)fetchAllCacheEntriesWithRequesterHandler:(/*^block*/id)arg1 ;
-(void)calculateFreeableSpaceWithHandler:(/*^block*/id)arg1 ;
-(int)_invalidationStateForPlace:(id)arg1 ;
-(void)_requestMUIDsFromNetwork:(id)arg1 resultProviderID:(int)arg2 includeETA:(char)arg3 traits:(id)arg4 auditToken:(id)arg5 finished:(/*^block*/id)arg6 error:(/*^block*/id)arg7 ;
-(void)_resetPhoneNumberMapper;
-(void)_cachePlaceData:(id)arg1 forKey:(GEOTileKey)arg2 shouldOptimizeWritesToDisk:(char)arg3 ;
-(void)_callHistoryRecentsClearedObserver:(id)arg1 ;
-(char)_populateKey:(GEOTileKey*)arg1 request:(id)arg2 ;
-(void)_trackPlaceData:(id)arg1 forRequest:(id)arg2 ;
-(void)startRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 finished:(/*^block*/id)arg5 networkActivity:(/*^block*/id)arg6 error:(/*^block*/id)arg7 ;
-(void)_privacyAndLocationSettingsResetObserver:(id)arg1 ;
-(id)_cachedPlacedForRequest:(id)arg1 ;
@end
