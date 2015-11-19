/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkStatistics/NetworkStatistics-Structs.h>
#import <NetworkStatistics/NWStatisticsSource.h>

@class NSData;

@interface NWStatisticsRouteSource : NWStatisticsSource {

	nstat_route_descriptor _descriptor;
	NSData* _destination;
	NSData* _mask;
	NSData* _gateway;

}

@property (readonly) unsigned long long routeID; 
@property (readonly) unsigned long long parentID; 
@property (readonly) unsigned long long gatewayID; 
@property (retain) NSData * destination;                        //@synthesize destination=_destination - In the implementation block
@property (retain) NSData * mask;                               //@synthesize mask=_mask - In the implementation block
@property (retain) NSData * gateway;                            //@synthesize gateway=_gateway - In the implementation block
@property (readonly) int interface; 
@property (readonly) unsigned flags; 
-(id)description;
-(NSData *)mask;
-(void)setMask:(NSData *)arg1 ;
-(NSData *)destination;
-(void)setDestination:(NSData *)arg1 ;
-(int)interface;
-(NSData *)gateway;
-(void)setGateway:(NSData *)arg1 ;
-(unsigned long long)parentID;
-(unsigned long long)routeID;
-(id)initWithManager:(id)arg1 destination:(const sockaddr*)arg2 mask:(const sockaddr*)arg3 interface:(unsigned)arg4 ;
-(id)createCounts;
-(char)handleDescriptor:(void*)arg1 length:(unsigned long)arg2 ;
-(unsigned long long)gatewayID;
-(unsigned)flags;
@end

