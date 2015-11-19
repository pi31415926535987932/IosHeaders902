/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@class _ATXAppLaunchMonitor, _DECAsset, NSDictionary, _ATXScoreInterpreter, NSString, NSMutableDictionary;

@interface _ATXAppPredictor : NSObject {

	_ATXAppLaunchMonitor* _appLaunchMonitor;
	SCD_Struct_AT2* _lastPredictionItems;
	int _nLastPredictionItems;
	char _waitingForFeedback;
	_DECAsset* _dayZeroAsset;
	NSDictionary* _dayZeroParameters;
	_ATXScoreInterpreter* _interpreter;
	NSString* _abGroupIdentifier;
	NSMutableDictionary* _subscoreHistory;

}
+(id)sharedInstance;
-(id)init;
-(void)updateLaunchHistoryFromDuet;
-(id)pathsToBackUp;
-(double)predictionScoreForItem:(SCD_Struct_AT2*)arg1 ;
-(void)_asyncFlushSubscoreHistory;
-(id)initWithAsset:(id)arg1 withDayZeroAsset:(id)arg2 withAssetGroupId:(id)arg3 ;
-(SCD_Struct_AT2*)getPredictionItemsWithCount:(int*)arg1 ;
-(void)train;
-(void)logInputsForPredictionItem:(SCD_Struct_AT2)arg1 withOutcome:(unsigned)arg2 ;
-(id)predictWithLimit:(unsigned)arg1 ;
-(void)receiveFeedback:(id)arg1 ;
-(id)serializeState;
-(void)restoreSerializedState:(id)arg1 ;
@end
