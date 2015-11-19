/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:23 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CellularPlanManager/CellularPlanManager-Structs.h>
#import <libobjc.A.dylib/CTCellularPlanClientDelegate.h>

@class NSMutableArray, NSString, NSData, NSXPCConnection;

@interface CTCellularPlanManager : NSObject <CTCellularPlanClientDelegate> {

	NSMutableArray* _subscriptionCompletions;
	dispatch_queue_sRef _queue;
	NSString* _lastSessionId;
	NSData* _cookieData;
	NSXPCConnection* _connection;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(void)_connect_sync;
-(void)isNewDataPlanCapable:(/*^block*/id)arg1 ;
-(void)didPurchasePlanWithIccid:(id)arg1 downloadProfile:(char)arg2 ;
-(void)setUserInPurchaseFlow:(char)arg1 ;
-(void)getDeviceInfo:(/*^block*/id)arg1 ;
-(void)openInternalUrlId:(int)arg1 ;
-(void)getCurrentPlanType:(/*^block*/id)arg1 ;
-(void)getIMEIPrefix:(/*^block*/id)arg1 ;
-(void)setIMEIPrefix:(id)arg1 ;
-(void)getSelectedEnv:(/*^block*/id)arg1 ;
-(void)setSelectedEnv:(int)arg1 ;
-(void)getSelectedProxy:(/*^block*/id)arg1 ;
-(void)setSelectedProxy:(int)arg1 ;
-(void)mccMncOverride:(/*^block*/id)arg1 ;
-(void)setMcc:(int)arg1 andMnc:(int)arg2 ;
-(void)latitudeLongitudeOverride:(/*^block*/id)arg1 ;
-(void)setLatitude:(id)arg1 andLongitude:(id)arg2 ;
-(void)launchSequoia;
-(void)expirePlan;
-(void)updatePlansDatabase;
-(void)setActivePlan:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)planInfoDidUpdate;
-(void)_ensureConnected_sync;
-(void)plansWithProgress:(/*^block*/id)arg1 andCompletion:(/*^block*/id)arg2 additionalParameters:(id)arg3 ;
-(void)_plansForRenewal:(char)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 latitude:(id)arg4 longitude:(id)arg5 additionalParameters:(id)arg6 ;
-(void)plansWithCompletion:(/*^block*/id)arg1 latitude:(id)arg2 longitude:(id)arg3 ;
-(void)_reconnect;
-(void)connectionSettings:(/*^block*/id)arg1 ;
-(void)plansWithProgress:(/*^block*/id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(void)plansForRenewalWithProgress:(/*^block*/id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(void)plansWithCompletion:(/*^block*/id)arg1 ;
-(void)plansForRenewalWithCompletion:(/*^block*/id)arg1 ;
-(void)subscriptionDetailsWithCompletion:(/*^block*/id)arg1 ;
-(void)carrierHandoffToken:(/*^block*/id)arg1 ;
-(void)subscriptionDetailsForCompletion:(id)arg1 ;
-(void)triggerAddNewDataPlan:(/*^block*/id)arg1 ;
-(void)planItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)isMultipleDataPlanSupportAvailable:(/*^block*/id)arg1 ;
-(void)isRoamingPlanSupportAvailable:(/*^block*/id)arg1 ;
-(void)isAddButtonEnabled:(/*^block*/id)arg1 ;
-(void)shouldShowPlanList:(/*^block*/id)arg1 ;
-(void)willDisplayPlanItems;
-(void)didSelectPlanItem:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

