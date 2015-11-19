/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, PLGeoLocationShifterDelegate;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSObject, NSMutableOrderedSet, NSMutableSet, PLGeoLocationShiftResult, GEOLocationShifter;

@interface PLGeoLocationShifter : NSObject {

	NSObject*<OS_dispatch_queue> _locationShiftQueue;
	NSMutableOrderedSet* _assetsToShift;
	char _shiftOperationInProgress;
	char _isRunning;
	NSMutableSet* _inFlightRequestIDs;
	PLGeoLocationShiftResult* _currentBatchResult;
	GEOLocationShifter* _locationShifter;
	id<PLGeoLocationShifterDelegate> _delegate;

}

@property (assign,nonatomic) id<PLGeoLocationShifterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char hasWork; 
+(char)isLocationShiftRequiredForCoordinate:(SCD_Struct_PL12)arg1 ;
+(unsigned)locationShiftFunctionVersion;
-(void)setDelegate:(id<PLGeoLocationShifterDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<PLGeoLocationShifterDelegate>)delegate;
-(void)reset;
-(void)stop;
-(void)start;
-(char)hasWork;
-(void)enqueueAssetIDs:(id)arg1 ;
-(id)shifterStatus;
-(void)_updateShiftOperationStatus;
-(void)_runShiftOperation;
-(void)_beginBatch:(id)arg1 ;
-(void)_processShiftRequestWithAssetID:(id)arg1 coordinate:(id)arg2 ;
-(void)_shiftCompletedForAssetID:(id)arg1 withSuccess:(char)arg2 needsRetry:(char)arg3 shiftedCoordinate:(SCD_Struct_PL12)arg4 ;
-(void)_completeBatchIfReady;
@end

