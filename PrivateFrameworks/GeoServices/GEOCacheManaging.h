/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GEOCacheManaging <NSObject>
@required
-(void)snapshotWithFilePathArray:(id)arg1 handler:(/*^block*/id)arg2;
-(void)refreshLOIAssociatedMapItems:(id)arg1 updatedCoordinates:(id)arg2 traits:(id)arg3 handler:(/*^block*/id)arg4;
-(int)invalidationStateForComponent:(id)arg1;
-(void)refreshLOIReverseGeocodedMapItems:(id)arg1 updatedCoordinates:(id)arg2 traits:(id)arg3 handler:(/*^block*/id)arg4;
-(void)versionsForDomains:(id)arg1 handler:(/*^block*/id)arg2;
-(int)invalidationStateForPlace:(id)arg1;
-(void)checkHasExpiredWithInvalidationDatas:(id)arg1 handler:(/*^block*/id)arg2;

@end

