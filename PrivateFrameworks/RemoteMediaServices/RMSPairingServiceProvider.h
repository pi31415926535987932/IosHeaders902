/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:19 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteMediaServices/RMSBonjourServiceProvider.h>

@class NSMutableDictionary, NSArray;

@interface RMSPairingServiceProvider : RMSBonjourServiceProvider {

	NSMutableDictionary* _unmonitoredServices;
	NSArray* _pairedNetworkNames;

}

@property (nonatomic,retain) NSArray * pairedNetworkNames;              //@synthesize pairedNetworkNames=_pairedNetworkNames - In the implementation block
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(char)arg3 ;
-(void)dealloc;
-(id)init;
-(NSArray *)pairedNetworkNames;
-(void)setPairedNetworkNames:(NSArray *)arg1 ;
-(int)serviceDiscoverySource;
-(int)serviceLegacyFlagsFromTXTDictionary:(id)arg1 ;
-(id)searchType;
@end

